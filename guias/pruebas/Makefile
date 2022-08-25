# tells the compiler to use gcc
CC = gcc

# Flags:
# -Wall turns on most, but not all, compiler warnings
#  -std=c99 specifies the version of C
#  --pedantic indicates that it shoud only use libraries that work on all platforms

CFLAGS = -g -Wall -std=c99 --pedantic

# Files to link
LFILES = 

# the name for both the target and the output file
TARGET = $(target)

all: $(TARGET)
$(TARGET): $(TARGET).c ; $(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c $(LFILES)

clean:
	rm $(TARGET)
