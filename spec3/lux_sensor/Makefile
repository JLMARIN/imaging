CC = gcc
CFLAG = -g
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = lux_sensor
EXTRA_LIBS = -lwiringPi -lpthread

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(EXTRA_LIBS)

clean:
	rm -rf $(OBJECTS)

cleanall:
	rm -rf $(OBJECTS) $(EXECUTABLE)
