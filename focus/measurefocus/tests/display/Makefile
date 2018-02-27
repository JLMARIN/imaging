CC = g++
CFLAGS = -ggdb
SRCS = display.cpp
PROG = display

OPENCV = `pkg-config opencv --cflags --libs`
LIBS = $(OPENCV)

$(PROG):$(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(LIBS)