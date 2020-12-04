//
//  laba.c
//  laba3
//
//  Created by HasP on 12/4/20.
//  Copyright © 2020 HasP. All rights reserved.
//

#include "laba.h"
#include <stdio.h>
#define N 20

int main(int argc, char* argv[])
{
    int sieve[N] = {0};
    for(int i = 2; i*i < N ; ++i)
       if(sieve[i] == 0)
        for(int k = i*i; k < N; k += i)
            sieve[k] = 1;
    
    for(int i = 0; i < N; ++i)
        printf("%3d", i);
    printf("\n");
    for(int i = 0; i < N; ++i)
        printf("%3d", sieve[i]);
    printf("\n");
    
    return 0;
}

