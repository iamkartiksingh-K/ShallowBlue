# Compiler and flags
CC = g++
CFLAGS = -std=c++11 -Wall -O2

# Source and object files
SRC = src/engine.cpp src/board.cpp src/move_generator.cpp src/search.cpp src/uci.cpp src/evaluation.cpp
OBJ = $(SRC:.cpp=.o)

# Output executable
OUTPUT = ShallowBlue

# Default target
all: $(OUTPUT)

# Linking
$(OUTPUT): $(OBJ)
	$(CC) $(OBJ) -o $(OUTPUT)

# Compiling
%.o: %.cpp
	$(CC) $(CFLAGS) -Iinclude -c $< -o $@

# Clean up
clean:
	rm -f $(OBJ) $(OUTPUT)

.PHONY: all clean
