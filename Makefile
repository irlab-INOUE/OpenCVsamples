# Makefile for CPP
# Copyright (C) Kazumichi INOUE <k.inoue@oyama-ct.ac.jp>, 2016-06-02
SHELL = /bin/sh

CXX = g++

SRC = windowOpen.cpp drawPoints.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = windowOpen drawPoints

CXXFLAGS = -c -O2 -Wall `pkg-config --cflags opencv` -std=gnu++11
LDLIBS = `pkg-config --libs opencv` -std=gnu++11

.cpp.o:
	$(CXX) $(CXXFLAGS) $<

all:$(TARGET)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $< $(LDLIBS)

clean:
	rm -f $(TARGET) $(OBJ) *~ *.o


