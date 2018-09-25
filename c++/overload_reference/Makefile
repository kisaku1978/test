SRCS=$(strip $(wildcard *.cpp))
OBJS=$(strip $(patsubst %.cpp,%.o,$(SRCS)))
TARGET=sample
CFLAGS=-Wall
LDFLAGS=
ALLFLAGS=$(strip $(LDFLAGS) $(CFLAGS))
all: $(OBJS)
	g++ $(ALLFLAGS) -o $(TARGET) $(OBJS)
clean:
	rm -rf $(TARGET) $(OBJS)
%.o: %.cpp
	g++ $(CFLAGS) -o $@ -c $<
