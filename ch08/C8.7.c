//
//  main.c
//  8.7
//
//  Created by Aleksandar on 14. 6. 2026..
//

/*******************************************************************
 *  Chapter 8, Project 7                                           *
 *                                                                 *
 *  Reads a 5 x 5 array of integers one row at a time, then        *
 *  prints the sum of each row and the sum of each column.         *
 *                                                                 *
 *  Enter row 1: 8 3 9 0 10                                        *
 *  Enter row 2: 3 5 17 1 1                                        *
 *  Enter row 3: 2 8 6 23 1                                        *
 *  Enter row 4: 15 7 3 2 9                                        *
 *  Enter row 5: 6 14 2 6 0                                        *
 *                                                                 *
 *  Row totals: 30 27 40 36 28                                     *
 *  Column totals: 34 37 37 32 21                                  *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a[5][5];
    int row_sum[5]={0};
    int column_sum[5]={0};
    int i,j;
    
    
    
    for(i=0;i<5;i++)
    {
        printf("Enter row %d:",i+1);
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            row_sum[i]+=a[i][j];
            
        }
    }
    
    for(i=0;i<5;i++)
    {
        
        for(j=0;j<5;j++)
        {
            column_sum[i]+=a[j][i];
        }
    }
    

    
    printf("Row totals:");
    for(i=0;i<5;i++)
    {
        printf(" %d",row_sum[i]);
    }
    printf("\nColumn totals:");
    
    for(i=0;i<5;i++)
    {
        printf(" %d",column_sum[i]);
    }
    
    printf("\n");
    
    return EXIT_SUCCESS;
}
