//
//  main.c
//  9.5
//
//  Created by Aleksandar on 1. 7. 2026..
//

/*******************************************************************
 *  Chapter 9, Project 5                                           *
 *                                                                 *
 *  Splits the magic square of Chapter 8, Project 17 into two      *
 *  functions:                                                     *
 *                                                                 *
 *      void create_magic_square(int n, char magic_square[n][n]);  *
 *      void print_magic_square(int n, char magic_square[n][n]);   *
 *                                                                 *
 *  main reads n, declares the n x n array, and passes it to       *
 *  create_magic_square, which fills it with 1 through n^2 by the  *
 *  same method as the original project. print_magic_square then   *
 *  displays it.                                                   *
 *                                                                 *
 *  Without variable-length array support the array would be       *
 *  declared 99 x 99 and the parameters written [99][99].          *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

void create_magic_square(int n,char magic_square[][n]);
void print_magic_square(int n,char magic_square[][n]);


int main(int argc, const char * argv[]) {
    
    int n,i,j;
    
    printf("This program creates a magic square of a specified size.\nThis size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square:");
    
    scanf("%d",&n);
    
    char magic_square[n][n];
    
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
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            magic_square[i][j]=0;
    }
    
    
    
    
    
    create_magic_square(n,magic_square);
    
    print_magic_square(n,magic_square);
    
    
    
    return EXIT_SUCCESS;
}

void create_magic_square(int n,char magic_square[][n])
{
    int i,j,number=1,next_i,next_j;
    
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
    
}

void print_magic_square(int n,char magic_square[][n])
{
    int i,j;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",magic_square[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
}
