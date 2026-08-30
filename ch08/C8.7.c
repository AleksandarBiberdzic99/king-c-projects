//
//  main.c
//  8.7
//
//  Created by Aleksandar on 14. 6. 2026..
//

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
