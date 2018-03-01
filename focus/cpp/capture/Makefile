CC = g++
CFLAGS = -ggdb
SRCS = capture.cpp v4ldevice.cpp
PROG = capture

OPENCV = `pkg-config opencv --cflags --libs`
LIBS = $(OPENCV)

all: $(PROG)

$(PROG):$(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(LIBS)

clean:
	$(RM) *.o
	$(RM) $(PROG)
