CC=g++
CFLAGS= -fno-omit-frame-pointer -fstack-protector-all -Wstack-protector -Wall -g
CC_INCLUDE = -I./

all: ExecutableApp

ExecutableApp: main.o SampleClass.o
		$(CC) $(CFLAGS) $(CC_INCLUDE) main.o SampleClass.o -o executableApp

SampleClass.o:
		$(CC) $(CFLAGS) $(INCLUDE) $(TESTFLAG) -c SampleClass.cpp -o SampleClass.o

main.o:
		$(CC) $(CFLAGS) $(CC_INCLUDE) -c main.cpp -o main.o

clean:
		rm -f *.o executableApp 
