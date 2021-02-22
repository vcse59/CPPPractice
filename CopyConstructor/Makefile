CC=g++
CFLAGS= -fno-omit-frame-pointer -fstack-protector-all -Wstack-protector -Wall -g
CC_INCLUDE = -I./

all: ExecutableApp

ExecutableApp: main.o sampleClass.o
		$(CC) $(CFLAGS) $(CC_INCLUDE) main.o sampleClass.o -o executableApp

sampleClass.o:
		$(CC) $(CFLAGS) $(INCLUDE) $(TESTFLAG) -c sampleClass.cpp -o sampleClass.o

main.o:
		$(CC) $(CFLAGS) $(CC_INCLUDE) -c main.cpp -o main.o

clean:
		rm -f *.o executableApp 
