all: test.exe

clean:
	rm main.o test.exe
	
test.exe: main.o
	g++ -g -o test main.o

main.o:
	g++ -c -g main.cpp