CC = g++
CFLAGS = -ggdb
SRCS = multiview.cpp
PROG = multiview

OPENCV = `pkg-config opencv --cflags --libs`
LIBS = $(OPENCV)

all: $(PROG)

$(PROG):$(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(LIBS)

clean:
	$(RM) *.o
	$(RM) $(PROG)
