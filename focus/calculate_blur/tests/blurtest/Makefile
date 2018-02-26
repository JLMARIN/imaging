CC = g++
CFLAGS = -ggdb
SRCS = blurtest.cpp
PROG = blurtest

OPENCV = `pkg-config opencv --cflags --libs`
LIBS = $(OPENCV)

$(PROG):$(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(LIBS)