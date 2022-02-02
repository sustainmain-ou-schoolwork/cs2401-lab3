CC = g++
CFLAGS = -g -Wall -std=c++11

PART_NUM = 3

a.out: part$(PART_NUM).cc
	$(CC) $(CFLAGS) part$(PART_NUM).cc -o a.out

clean:
	rm -rf a.out