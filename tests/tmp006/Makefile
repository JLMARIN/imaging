CC = gcc
CFLAG = -g
OBJGROUP = tmp006.o temp.o

EXTRA_LIBS = -lwiringPi -lpthread

all: temp

temp: $(OBJGROUP)
	$(CC) -o temp  $(OBJGROUP) $(EXTRA_LIBS) -lm

clean:
	rm *o

cleanall:
	rm *o temp
