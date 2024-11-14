CC=gcc
CFLAGS=-Wall -Wextra
LDFLAGS=-lm
TARGET=donut

SRCDIR=src
INCLUDEDIR=include

SRCS=$(wildcard $(SRCDIR)/*.c)
OBJS=$(SRCS:$(SRCDIR)/%.c=$(SRCDIR)/%.o)


$(TARGET):$(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(OBJS) -o $(TARGET) -I$(INCLUDEDIR)

$(SRCDIR)/%.o: $(SRCDIR)/%.c 
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCLUDEDIR)

.PHONY: clean run

clean:
	rm -f $(OBJS) $(TARGET)

run:$(TARGET)
	./$(TARGET)
