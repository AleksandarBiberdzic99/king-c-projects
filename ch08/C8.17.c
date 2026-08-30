//
//  main.c
//  8.17
//
//  Created by Aleksandar on 18. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n,magic_square[99][99]={0};
    int i,j,number=1,next_i,next_j;
    
    printf("This program creates a magic square of a specified size.\nThis size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square:");
    
    scanf("%d",&n);
    
    
    
    
    while(n%2==0)
    {
        printf("You entered an even number.\n");
        printf("Please enter an odd number:");
        scanf("%d",&n);
    }
    
    while(n>99 || n<1)
    {
        printf("You entered number that is not between 1 and 99.\n");
        printf("Please enter the number between 1 and 99:");
        scanf("%d",&n);
    }
    
    i=0;
    j=n/2;
    magic_square[i][j]=number;
    number++;
    
    while(number<=n*n)
    {
         
        next_i=i-1;
        next_j=j+1;
        
        if(next_i<0)
            next_i=n-1;
        if(next_j>n-1)
            next_j=0;
        
        if(magic_square[next_i][next_j]!=0)
        {
            next_i=i+1;
            next_j=j;
        }
        
        
        magic_square[next_i][next_j]=number;
        number++;
        i=next_i;
        j=next_j;
        
    }
    
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",magic_square[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    
    return EXIT_SUCCESS;
}



