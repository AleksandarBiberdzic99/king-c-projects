//
//  main.c
//  12.7
//
//  Created by Aleksandar on 1. 9. 2026..
//

/**********************************************************
 * Chapter 12, Project  7                                 *
 *                                                        *
 * Modified version of maxmin.c (Section 11.4). The       *
 * max_min function now uses a pointer instead of an      *
 * integer to keep track of the current position in the   *
 * array. Finds the largest and smallest elements of an   *
 * array of n integers, returning them through the max    *
 * and min parameters.                                    *
 **********************************************************/


#include <stdlib.h>
#include <stdio.h>

#define N 10

void max_min(int a[], int n,int *max,int *min);

int main(int argc, const char * argv[]) {
    
    int b[N],i,big,small;
    
    printf("Enter %d numbers: ",N);
    for(i=0;i<N;i++)
        scanf("%d",&b[i]);
    
    max_min(b,N,&big,&small);
    
    printf("Largest: %d\n",big);
    printf("Smallest: %d\n",small);
    

    
    return EXIT_SUCCESS;
}


void max_min(int *a, int n, int *max, int *min)
{
    int *p;
    
    *max=*min=*a;
    
    for(p=a+1;p<a+n;p++)
    {
        if(*p>*max)
            *max=*p;
        else if(*p<*min)
            *min=*p;
    }
    
}
