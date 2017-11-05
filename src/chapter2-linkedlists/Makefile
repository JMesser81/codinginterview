CC     = g++
CFLAGS = -std=c++14 -Wall -Wextra

SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SRCS))
BINS = removedups

all: $(BINS)

removedups: removedups.o
	@$(CC) $^ -o $@

$(OBJS): $(SRCS)
	@$(CC) $(CFLAGS) -c $^
	@echo "$(CC) $(CFLAGS) -c $^"

.PHONY: clean
clean:
	@$(RM) -f $(OBJS) 
	@$(RM) -f $(BINS)
