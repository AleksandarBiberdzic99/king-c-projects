//
//  main.c
//  9.1
//
//  Created by Aleksandar on 26. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>

void selection_sort(int [],int);

int main(int argc, const char * argv[]) {
    
    int n,i;
    
    printf("Enter n:");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter array elements:");
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    selection_sort(a,n);
    
    printf("Array after sorrting:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    printf("\n");
    
    
    
    return EXIT_SUCCESS;
}



void selection_sort(int a[],int n)
{
    int max_index;
    int i,j,temp;
    
    for(i=0;i<n-1;i++)
    {
        max_index=0;
        for(j=1;j<n-i;j++)
        {
            if(a[j]>a[max_index])
            {
                max_index=j;
                
            }
                
        }
        temp=a[n-1-i];
        a[n-1-i]=a[max_index];
        a[max_index]=temp;
    }
}
