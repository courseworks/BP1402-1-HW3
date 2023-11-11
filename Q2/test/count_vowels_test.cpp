#include <gtest/gtest.h>
#include <iostream>
#include "../include/count_vowels.h"

TEST(CountVowelsTest, EmptyString) {
  // Test that an empty string has no vowels.
  EXPECT_EQ(0, count_vowels(""));
}

TEST(CountVowelsTest, SingleVowel) {
  // Test that a string with a single vowel has one vowel.
  EXPECT_EQ(1, count_vowels("a"));
}

TEST(CountVowelsTest, MultipleVowels) {
  // Test that a string with multiple vowels has the correct number of vowels.
  EXPECT_EQ(6, count_vowels("This is a sentence."));
}

TEST(CountVowelsTest, NonVowelCharacters) {
  // Test that non-vowel characters are not counted as vowels.
  EXPECT_EQ(0, count_vowels("bcdfghjklmnpqrstvwxyz"));
}

TEST(CountVowelsTest, MixedCharacters) {
  // Test that a string with mixed characters has the correct number of vowels.
  EXPECT_EQ(3, count_vowels("Hello, world!"));
}