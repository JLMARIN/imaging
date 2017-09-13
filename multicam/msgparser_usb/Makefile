# General
CC = gcc

# Names and flags
SOURCES = $(wildcard *.c pprzlink/*.c)
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = pprz
CFLAGS = -c -Wall -g
LIBS =



# Targets
all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LIBS)

messages.h: messages.xml
	$(Q) ./pprzlink/generator/gen_messages.py -o $@ $<  telemetry

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@

clean:
	rm -rf $(OBJECTS)

cleanall:
	rm -rf $(OBJECTS) $(EXECUTABLE)
