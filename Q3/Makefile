CC = g++
CXXFLAGS = -std=c++17 -Wall -c
LDFLAGS = -std=c++17

OBJECTS = src/remove_duplicates.o test/remove_duplicates_test.o test/main.o

TARGET = test_q3

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -lgtest -o $(TARGET)

src/add_two_numbers.o: src/remove_duplicates.c
	$(CC) $(CXXFLAGS) src/remove_duplicates.c -o src/remove_duplicates.o

test/add_two_numbers_test.o: test/remove_duplicates_test.cpp
	$(CC) $(CXXFLAGS) test/remove_duplicates_test.cpp -o test/remove_duplicates_test.o

test/main.o: test/main.cpp
	$(CC) $(CXXFLAGS) test/main.cpp -o test/main.o

clean:
	rm -f $(TARGET) $(OBJECTS)

run:
	./$(TARGET)