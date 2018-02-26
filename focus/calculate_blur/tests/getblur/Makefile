CC = g++
CFLAGS = -ggdb
SRCS = getblur.cpp
PROG = getblur

OPENCV = `pkg-config opencv --cflags --libs`
LIBS = $(OPENCV)

$(PROG):$(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(LIBS)