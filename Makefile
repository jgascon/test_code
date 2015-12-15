FLAGS=-pg -O3 -I/usr/local/include -L/usr/local/lib -pthread
MINIFLAGS=-I/usr/local/include -I/usr/X11R6/include
OBJECTS=test_code.o

all: $(OBJECTS)
	g++ $(FLAGS) $(MINIFLAGS) $(OBJECTS) -o test_code.bin

clean:
	rm -f *.o *~ *.out *.bin

%.o : %.cpp
	g++ -c $(FLAGS) $(MINIFLAGS) $+
