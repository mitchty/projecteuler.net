CC=clang
PWD=$(shell pwd)
CFLAGS=-Werror  -Weverything -std=c11 -O4 -funroll-loops
LIBS=
SRC=$(wildcard *.c)
TARGETS:=$(patsubst %.c,%,$(SRC))
LDLIBS=-I$(PWD)
LDFLAGS=
BAR=

.PHONY: all

all: $(TARGETS)

clean:
	-rm $(TARGETS) > /dev/null 2>&1
	-rm -fr $(wildcard *.dSYM) a.out flycheck* > /dev/null 2>&1

cleanly: clean all

%.c:
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $@ $^

%.o:
	$(CC) $(LDFLAGS) $^ $(LDLIBS)
