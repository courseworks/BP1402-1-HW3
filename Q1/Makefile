CC = g++
CXXFLAGS = -std=c++17 -Wall -c
LDFLAGS = -std=c++17

OBJECTS = src/remove_characters.o test/remove_characters_test.o test/main.o

TARGET = test_q2

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -lgtest -o $(TARGET)

src/add_two_numbers.o: src/remove_characters.c
	$(CC) $(CXXFLAGS) src/remove_characters.c -o src/remove_characters.o

test/add_two_numbers_test.o: test/remove_characters_test.cpp
	$(CC) $(CXXFLAGS) test/remove_characters_test.cpp -o test/remove_characters_test.o

test/main.o: test/main.cpp
	$(CC) $(CXXFLAGS) test/main.cpp -o test/main.o

clean:
	rm -f $(TARGET) $(OBJECTS)

run:
	./$(TARGET)