CC = gcc
CFLAGS = -Iinclude -Wall -g

SRCS = main.c scheduler.c \
       $(wildcard algorithms/*.c) \
       $(wildcard simulation/*.c) \
       $(wildcard visualization/*.c) \
       $(wildcard metrics/*.c) \
       $(wildcard io/*.c)

OBJS = $(SRCS:.c=.o)
TARGET = cpu_scheduler

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: clean
