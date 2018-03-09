CC = g++
CFLAGS = -ggdb
SRCS = viewcam1.cpp v4ldevice.cpp
PROG = viewcam1

OPENCV = `pkg-config opencv --cflags --libs`
LIBS = $(OPENCV)

all: $(PROG)

$(PROG):$(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(LIBS)

clean:
	$(RM) *.o
	$(RM) $(PROG)
