# Makefile for CPP
# Copyright (C) Kazumichi INOUE <k.inoue@oyama-ct.ac.jp>, 2016-06-02
SHELL = /bin/sh

CXX = g++

SRC = faceDetect.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = faceDetect

CXXFLAGS = -c -O2 -Wall `pkg-config --cflags opencv` -std=gnu++11
LDLIBS = `pkg-config --libs opencv` -std=gnu++11

.cpp.o:
	$(CXX) $(CXXFLAGS) $<

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $@.o $(LDLIBS)

clean:
	rm -f $(TARGET) $(OBJ) *~ *.o


