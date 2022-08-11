all: print_this

TARGET_ISA=x86

GEM5_HOME=..
$(info   GEM5_HOME is $(GEM5_HOME))

CXX=g++

CFLAGS=-O0 -ggdb3 -std=c++14 -static -I$(GEM5_HOME)/include

LDFLAGS=-L$(GEM5_HOME)/out -lm5

print_this: print_this_src.c Makefile
	$(CXX) print_this_src.c $(CFLAGS) $(LDFLAGS) -o print_this


clean: 
	rm -rf print_this