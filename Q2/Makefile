CC = g++
CXXFLAGS = -std=c++17 -Wall -c
LDFLAGS = -std=c++17

OBJECTS = src/count_vowels.o test/count_vowels_test.o test/main.o

TARGET = test_q2

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -lgtest -o $(TARGET)

src/add_two_numbers.o: src/count_vowels.c
	$(CC) $(CXXFLAGS) src/count_vowels.c -o src/count_vowels.o

test/add_two_numbers_test.o: test/count_vowels_test.cpp
	$(CC) $(CXXFLAGS) test/count_vowels_test.cpp -o test/count_vowels_test.o

test/main.o: test/main.cpp
	$(CC) $(CXXFLAGS) test/main.cpp -o test/main.o

clean:
	rm -f $(TARGET) $(OBJECTS)

run:
	./$(TARGET)