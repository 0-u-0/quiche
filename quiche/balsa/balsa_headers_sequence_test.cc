#include "quiche/balsa/balsa_headers_sequence.h"

#include <utility>

#include "quiche/balsa/balsa_headers.h"
#include "quiche/common/platform/api/quiche_test.h"

namespace quiche {
namespace test {
namespace {

TEST(BalsaHeadersSequenceTest, Initial) {
  BalsaHeadersSequence sequence;
  EXPECT_FALSE(sequence.HasNext());
  EXPECT_EQ(sequence.Next(), nullptr);
}

TEST(BalsaHeadersSequenceTest, Basic) {
  BalsaHeadersSequence sequence;

  BalsaHeaders headers_one;
  headers_one.AppendHeader("one", "fish");
  sequence.Append(std::move(headers_one));
  EXPECT_TRUE(sequence.HasNext());

  BalsaHeaders headers_two;
  headers_two.AppendHeader("two", "fish");
  sequence.Append(std::move(headers_two));
  EXPECT_TRUE(sequence.HasNext());

  const BalsaHeaders* headers = sequence.Next();
  ASSERT_NE(headers, nullptr);
  EXPECT_TRUE(headers->HasHeader("one"));
  EXPECT_TRUE(sequence.HasNext());

  headers = sequence.Next();
  ASSERT_NE(headers, nullptr);
  EXPECT_TRUE(headers->HasHeader("two"));
  EXPECT_FALSE(sequence.HasNext());

  EXPECT_EQ(sequence.Next(), nullptr);
}

TEST(BalsaHeadersSequenceTest, Clear) {
  BalsaHeadersSequence sequence;

  BalsaHeaders headers_one;
  headers_one.AppendHeader("one", "fish");
  sequence.Append(std::move(headers_one));
  EXPECT_TRUE(sequence.HasNext());

  BalsaHeaders headers_two;
  headers_two.AppendHeader("two", "fish");
  sequence.Append(std::move(headers_two));
  EXPECT_TRUE(sequence.HasNext());

  sequence.Clear();
  EXPECT_FALSE(sequence.HasNext());
  EXPECT_EQ(sequence.Next(), nullptr);
}

TEST(BalsaHeadersSequenceTest, PeekNext) {
  BalsaHeadersSequence sequence;
  EXPECT_EQ(sequence.PeekNext(), nullptr);

  BalsaHeaders headers_one;
  headers_one.AppendHeader("one", "fish");
  sequence.Append(std::move(headers_one));
  EXPECT_TRUE(sequence.HasNext());

  const BalsaHeaders* headers = sequence.PeekNext();
  ASSERT_NE(headers, nullptr);
  EXPECT_TRUE(headers->HasHeader("one"));
  EXPECT_TRUE(sequence.HasNext());

  // Continuing to peek should not advance the sequence.
  EXPECT_EQ(sequence.PeekNext(), headers);

  // Adding more headers should not matter for peeking.
  BalsaHeaders headers_two;
  headers_two.AppendHeader("two", "fish");
  sequence.Append(std::move(headers_two));
  EXPECT_TRUE(sequence.HasNext());
  EXPECT_EQ(sequence.PeekNext(), headers);

  headers = sequence.Next();
  ASSERT_NE(headers, nullptr);
  EXPECT_TRUE(headers->HasHeader("one"));
  EXPECT_TRUE(sequence.HasNext());

  headers = sequence.PeekNext();
  ASSERT_NE(headers, nullptr);
  EXPECT_TRUE(headers->HasHeader("two"));
  EXPECT_TRUE(sequence.HasNext());

  headers = sequence.Next();
  ASSERT_NE(headers, nullptr);
  EXPECT_TRUE(headers->HasHeader("two"));
  EXPECT_FALSE(sequence.HasNext());

  EXPECT_EQ(sequence.PeekNext(), nullptr);
}

}  // namespace
}  // namespace test
}  // namespace quiche
