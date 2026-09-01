//
//  main.c
//  12.6
//
//  Created by Aleksandar on 1. 9. 2026..
//

/**********************************************************
 * Chapter 12, Project  6                                 *
 *                                                        *
 * Modified version of qsort.c (Section 9.6). The low,    *
 * high, and middle variables are now pointers to array   *
 * elements rather than integers, and the split function  *
 * returns a pointer instead of an integer. Sorts an      *
 * array of integers entered by the user using the        *
 * Quicksort algorithm.                                   *
 **********************************************************/

#include <stdlib.h>
#include <stdio.h>

#define N 10

void quicksort(int a[], int *low, int *high);
int *split(int a[], int *low, int *high);


int main(int argc, const char * argv[]) {
    
    int a[N],i;
    int *low=a,*high=a+N-1;
    
    
    
    printf("Entr %d numbers to be sorted: ",N);
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    
    quicksort(a,low,high);
    
    printf("In sorted order: ");
    for(i=0;i<N;i++)
        printf("%d ", a[i]);
    
    printf("\n");
    
    return EXIT_SUCCESS;
}


void quicksort(int a[],int *low, int *high)
{
    int *middle;
    
    if(low>=high) return;
    middle=split(a,low,high);
    quicksort(a,low,middle-1);
    quicksort(a,middle+1,high);
    
}

int *split(int a[], int *low,int *high)
{
    int part_element=*low;
    
    for(;;)
    {
        while(low<high && part_element<=*high)
            high--;
        if(low>=high) break;
        *low++=*high;
        
        
        while(low<high && *low<=part_element)
            low++;
        if(low>=high) break;
        *high--=*low;
    
    }
    
    *high=part_element;
    return high;
    
}
