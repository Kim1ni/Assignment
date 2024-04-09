CC = gcc
CFLAGS = -I.

Appliances: main.o applianceInfo.o
	$(CC) -o Appliances main.o applianceInfo.o

main.o: main.c 
	$(CC) -c main.c 

applianceInfo.o: applianceInfo.c 
	$(CC) -c applianceInfo.c 

clean: 
	rm -f *.o Appliances