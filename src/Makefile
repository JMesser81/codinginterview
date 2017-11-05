CC     = g++
CFLAGS = -std=c++14 -Wall -Wextra

MAKEFILE = Makefile
TARGETS = build

all: $(TARGETS)

build:
	@echo "Building project"
	cd chapter1-arrays_strings && make
	cd chapter2-linkedlists && make

.PHONY: clean
clean:
	@echo "Cleaning project"
	@rm -f *~
	cd chapter1-arrays_strings && make clean
	@echo Done cleaning!!
