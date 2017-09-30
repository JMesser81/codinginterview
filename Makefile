# C gcc -pipe -O2 -std=c11 <filename> -lm

# C++ g++ -pipe -O2 -std=c++11 <filename> -lm

CC=g++
CFLAGS=--std=c++14 -Wall -Wextra
LDFLAGS=

MAKEFILE = Makefile
TARGETS = build

all: $(TARGETS)

.PHONY: build clean
	
build:
	@echo Building project
	cd src && make

clean:
	@echo Cleaning project
	@rm -f *~
	cd src && make clean
	@echo Done cleaning!!