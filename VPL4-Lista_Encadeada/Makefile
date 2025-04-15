CC = g++
CFLAGS = -std=c++11 -Wall -Iinclude

SRC_DIR = src
BUILD_DIR = build

# Alvos
all: $(BUILD_DIR)/main

$(BUILD_DIR)/list.o: $(SRC_DIR)/list.cpp include/list.hpp include/node.hpp
	$(CC) $(CFLAGS) -c $(SRC_DIR)/list.cpp -o $(BUILD_DIR)/list.o

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.cpp include/list.hpp include/node.hpp
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.cpp -o $(BUILD_DIR)/main.o

$(BUILD_DIR)/main: $(BUILD_DIR)/main.o $(BUILD_DIR)/list.o
	$(CC) $(CFLAGS) $(BUILD_DIR)/main.o $(BUILD_DIR)/list.o -o $(BUILD_DIR)/main

clean:
	rm -f $(BUILD_DIR)/*.o $(BUILD_DIR)/main
