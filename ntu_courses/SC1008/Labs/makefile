# Makefile for C++ project using clang++

# Compiler and flags
CXX = /usr/bin/clang++
CXXFLAGS = -std=gnu++14 -stdlib=libc++ -fcolor-diagnostics -fansi-escape-codes -g

# Directories
LAB1 = lab_1_Oscar_Stommendal_N2402294F@e.ntu.edu.sg
LAB2 = lab_2_Oscar_Stommendal_N2402294F@e.ntu.edu.sg
LAB3 = lab_3_Oscar_Stommendal_N2402294F@e.ntu.edu.sg
BUILD_DIR = build

# Ensure the build directory exists
$(shell mkdir -p $(BUILD_DIR))

# Targets for building all lab executables
all: lab1_q1 lab1_q2 lab2_q1 lab2_q2 lab3_q1 lab3_q2

# Build lab1_q1
lab1_q1: $(BUILD_DIR)/lab_1_q1

$(BUILD_DIR)/lab_1_q1: $(LAB1)/lab_1_q1.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build lab1_q2
lab1_q2: $(BUILD_DIR)/lab_1_q2

$(BUILD_DIR)/lab_1_q2: $(LAB1)/lab_1_q2.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build lab2_q1
lab2_q1: $(BUILD_DIR)/lab_2_q1

$(BUILD_DIR)/lab_2_q1: $(LAB2)/lab_2_q1.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build lab2_q2
lab2_q2: $(BUILD_DIR)/lab_2_q2

$(BUILD_DIR)/lab_2_q2: $(LAB2)/lab_2_q2.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build lab3_q1
lab3_q1: $(BUILD_DIR)/lab_3_q1

$(BUILD_DIR)/lab_3_q1: $(LAB3)/lab_3_q1.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build lab3_q2
lab3_q2: $(BUILD_DIR)/lab_3_q2

$(BUILD_DIR)/lab_3_q2: $(LAB3)/lab_3_q2.cpp
	$(CXX) $(CXXFLAGS) -o $@ $

# Clean the build directory
clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean
