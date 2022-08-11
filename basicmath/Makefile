FILE1 = basicmath_small.c   rad2deg.c  cubic.c   isqrt.c
FILE2 = basicmath_large.c   rad2deg.c  cubic.c   isqrt.c

TARGET_ISA=x86

GEM5_HOME=..
$(info   GEM5_HOME is $(GEM5_HOME))

CXX=g++

CFLAGS=-std=c++14 -static -O3 -I$(GEM5_HOME)/include

LDFLAGS=-L$(GEM5_HOME)/out -lm5

OBJECTS1= basicmath_small
OBJECTS2= basicmath_large
all: basicmath_small basicmath_large

basicmath_small: 
	$(CXX) -o $(OBJECTS1) ${FILE1} $(CFLAGS) $(LDFLAGS)
basicmath_large: 
	$(CXX) -o $(OBJECTS2) ${FILE2} $(CFLAGS) $(LDFLAGS)

clean:
	rm -rf basicmath_small basicmath_large output*
