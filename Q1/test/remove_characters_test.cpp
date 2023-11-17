#include <gtest/gtest.h>
#include <iostream>
#include "../include/remove_characters.h"

TEST(RemoveCharactersTest, EmptyString) {
  // Test that an empty string remains empty.
  EXPECT_EQ("", remove_characters(""));
}

TEST(CountVowelsTest, SingleAlpha) {
  // Test that a string with a single alphabet letter in it.
  EXPECT_EQ("", remove_characters("a"));
}

TEST(CountVowelsTest, MultipleAlpha) {
  // Test that a string with multiple vowels has the correct number of vowels.
  EXPECT_EQ("This is a sentence.", remove_characters("This87is@a111sentence."));
}