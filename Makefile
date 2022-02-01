CC = g++
CFLAGS = -g -Wall -std=c++11

a.out: part1.cc
	$(CC) $(CFLAGS) part1.cc -o a.out

clean:
	rm -rf a.out