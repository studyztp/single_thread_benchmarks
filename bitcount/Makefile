FILE = bitcnt_1.c bitcnt_2.c bitcnt_3.c bitcnt_4.c bitcnts.c bitfiles.c bitstrng.c bstr_i.c 

TARGET_ISA=x86

GEM5_HOME=../gem5
$(info   GEM5_HOME is $(GEM5_HOME))

CXX=g++

CFLAGS=-std=c++14 -static -O3 -I$(GEM5_HOME)/include

LDFLAGS=-L$(GEM5_HOME)/util/m5/build/$(TARGET_ISA)/out -lm5

OBJECTS=bitcnts

all: bitcnts

bitcnts: 
	$(CXX) -o $(OBJECTS) ${FILE} $(CFLAGS) $(LDFLAGS)

clean:
	rm -rf bitcnts output*
