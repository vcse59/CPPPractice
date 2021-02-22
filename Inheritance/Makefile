CC=g++
CFLAGS= -fno-omit-frame-pointer -fstack-protector-all -Wstack-protector -Wall -g
CC_INCLUDE = -I./

all: ExecutableApp

ExecutableApp: main.o BaseSampleClass.o DerivedSampleClass.o
		$(CC) $(CFLAGS) $(CC_INCLUDE) main.o BaseSampleClass.o DerivedSampleClass.o -o executableApp

BaseSampleClass.o:
		$(CC) $(CFLAGS) $(INCLUDE) $(TESTFLAG) -c BaseSampleClass.cpp -o BaseSampleClass.o

DerivedSampleClass.o:
		$(CC) $(CFLAGS) $(INCLUDE) $(TESTFLAG) -c DerivedSampleClass.cpp -o DerivedSampleClass.o
main.o:
		$(CC) $(CFLAGS) $(CC_INCLUDE) -c main.cpp -o main.o

clean:
		rm -f *.o executableApp 
