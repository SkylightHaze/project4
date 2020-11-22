CC = g++
CPPFLAGS = -Wall -g -std=c++11

app: 		app.o p4.o

app.o: 		p4.h

p4.o:		p4.h

see:
		vim p4.cpp
backup:
	cp test.txt test.txt.b
fix:
	cp test.txt.b test.txt

.PHONY: clean
clean:			#cleans the directory
			$(info -- cleaning the directory --)
			rm -f *.o
			rm -f app
