#include <stdio.h>
#include <stdlib.h>

#include "m5_mmap.h"

#define GEM5

#ifdef GEM5
#include <gem5/m5ops.h>
#endif

int main(int argc, char *argv[]) {
#ifdef GEM5
    map_m5_mem();
#endif
#ifdef GEM5
  m5_work_begin(0, 0);
#endif
    if(argc<=2) {
        printf("please enter a string and an number\n ex. ['print this' 9]\n");
        exit(1);
     }  //otherwise continue on our merry way....
    int arg2 = atoi(argv[2]);  
    for(int i =0; i<arg2; i++){
        printf("%i %s\n",i+1,argv[1]);
    }
#ifdef GEM5
  m5_work_end(0, 0);
#endif
}