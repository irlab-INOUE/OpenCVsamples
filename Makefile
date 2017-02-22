# Makefile for CPP
# Copyright (C) Kazumichi INOUE <k.inoue@oyama-ct.ac.jp>, 2016-06-02
SHELL = /bin/sh

all:
	g++ -o windowOpen windowOpen.cpp `pkg-config --cflags opencv` `pkg-config --libs opencv` -std=gnu++11

