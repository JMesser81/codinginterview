CC     = g++
CFLAGS = -std=c++14 -Wall -Wextra

SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SRCS))
BINS = isunique urlify checkpermutation palindromepermutation

all: $(BINS)

isunique: isunique.o
	@$(CC) $^ -o $@

urlify: urlify.o
	@$(CC) $^ -o $@

checkpermutation: checkpermutation.o
	@$(CC) $^ -o $@

palindromepermutation: palindrome-permutation.o
	@$(CC) $^ -o $@

$(OBJS): $(SRCS)
	@$(CC) $(CFLAGS) -c $^
	@echo "$(CC) $(CFLAGS) -c $^"

.PHONY: clean
clean:
	@$(RM) -f $(OBJS) 
	@$(RM) -f $(BINS)
