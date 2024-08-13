CC = gcc
CFLAGS = -Wall -g -O2
LDFLAGS = -libverbs

APPS = RDMASetup PrintfCost

all: ${APPS}

RDMASetup:
	cc RDMASetup.c $(CFLAGS) $(LDFLAGS) -o RDMASetup

PrintfCost: 
	cc PrintfCost.c $(CFLAGS) -o PrintfCost

clean:
	rm -rf ./*.o ${APPS}