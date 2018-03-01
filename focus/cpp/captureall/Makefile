CC = g++
CFLAGS = -ggdb
SRCS = captureall.cpp v4ldevice.cpp
PROG = captureall

OPENCV = `pkg-config opencv --cflags --libs`
LIBS = $(OPENCV)

all: $(PROG)

$(PROG):$(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(LIBS)

clean:
	$(RM) *.o
	$(RM) $(PROG)
