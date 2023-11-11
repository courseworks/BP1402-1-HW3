#include <gtest/gtest.h>
#include "../include/remove_duplicates.h"

TEST(RemoveDuplicatesTest, EmptyArray) {
  int array[] = {};
  int size = sizeof(array) / sizeof(array[0]);

  int unique_elements = remove_duplicates(array, size);

  EXPECT_EQ(unique_elements, 0);
}

TEST(RemoveDuplicatesTest, SingleElementArray) {
  int array[] = {1};
  int size = sizeof(array) / sizeof(array[0]);

  int unique_elements = remove_duplicates(array, size);

  EXPECT_EQ(unique_elements, 1);
}

TEST(RemoveDuplicatesTest, MultipleElementsArray) {
  int array[] = {1, 2, 3, 4, 5, 1, 2, 3};
  int size = sizeof(array) / sizeof(array[0]);

  int unique_elements = remove_duplicates(array, size);

  EXPECT_EQ(unique_elements, 5);
}

