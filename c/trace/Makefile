OBJS=1.o trace.o
TARGET=1
CFLAGS=-Wall -finstrument-functions -g
LDFLAGS=
all: $(OBJS)
	gcc $(LDFLAGS) $(CFLAGS) -o $(TARGET) $(OBJS)
clean:
	rm -rf $(TARGET) *.o
%.o: %.c
	gcc $(CFLAGS) -o $@ -c $<
#Note: trace.c can't be compiled with finstrument-functions flag!!
trace.o: trace.c
	gcc -Wall -o $@ -c $<
