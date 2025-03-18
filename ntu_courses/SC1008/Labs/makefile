# Makefile for C++ project using clang++

# Compiler and flags
CXX = /usr/bin/clang++
CXXFLAGS = -std=gnu++14 -stdlib=libc++ -fcolor-diagnostics -fansi-escape-codes -g

# Directories
LAB1 = lab1_starting_code
LAB2 = lab2_starting_code
BUILD_DIR = build

# Ensure the build directory exists
$(shell mkdir -p $(BUILD_DIR))

# Targets for building all lab executables
all: lab1_q1 lab2_q1

# Build lab1_q1
lab1_q1: $(BUILD_DIR)/lab1_q1

$(BUILD_DIR)/lab1_q1: $(LAB1)/lab1_q1.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build lab1_q2
lab1_q2: $(BUILD_DIR)/lab1_q2

$(BUILD_DIR)/lab1_q2: $(LAB1)/lab1_q2.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build lab2_q1
lab2_q1: $(BUILD_DIR)/lab2_q1

$(BUILD_DIR)/lab2_q1: $(LAB2)/lab2_q1.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build lab3_q1
lab3_q1: $(BUILD_DIR)/lab3_q1

$(BUILD_DIR)/lab3_q1: $(LAB3)/lab3_q1.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Clean the build directory
clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean
