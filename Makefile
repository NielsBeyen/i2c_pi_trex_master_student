# The compiler

BINPATH=/home/niels/buildroot-2014.08/output/host/usr/bin/arm-buildroot-linux-uclibcgnueabi-

CC=$(BINPATH)g++

# Compiler flags
CFLAGS  = -Wall
  #  -Wall turns on most, but not all, compiler warnings


all: clean I2C.o MyI2C.o wait.o Serial.o StatusDataPacket.o TRex.o main.o Json.o  MyStatusDataPacket.o MyTRex.o 
	$(CC) $(CFLAGS) I2C.o MyI2C.o wait.o Serial.o StatusDataPacket.o TRex.o Json.o MyStatusDataPacket.o MyTRex.o main.o -o i2c_pi_trex_master

I2C.o: I2C.cpp
	$(CC) -c $(CFLAGS) I2C.cpp

MyI2C.o: MyI2C.cpp
	$(CC) -c $(CFLAGS) MyI2C.cpp

Json.o: Json.cpp
	$(CC) -c $(CFLAGS) Json.cpp

wait.o: wait.cpp
	$(CC) -c $(CFLAGS) wait.cpp

Serial.o: Serial.cpp
	$(CC) -c $(CFLAGS) Serial.cpp

StatusDataPacket.o: StatusDataPacket.cpp
	$(CC) -c $(CFLAGS) StatusDataPacket.cpp

MyStatusDataPacket.o: MyStatusDataPacket.cpp
	$(CC) -c $(CFLAGS) MyStatusDataPacket.cpp

TRex.o: TRex.cpp
	$(CC) -c $(CFLAGS) TRex.cpp

MyTRex.o: MyTRex.cpp
	$(CC) -c $(CFLAGS) MyTRex.cpp

main.o: main.cpp
	$(CC) -c $(CFLAGS) main.cpp

echoserv.o: echoserv.c	
	$(CC) -c $(CFLAGS) echoserv.c
	
helper.o: helper.c	
	$(CC) -c $(CFLAGS) helper.c
	
clean:
	rm -f *.o i2c_pi_trex_master
