//
//  main.c
//  8.8
//
//  Created by Aleksandar on 14. 6. 2026..
//

/*******************************************************************
 *  Chapter 8, Project 8                                           *
 *                                                                 *
 *  Variant of Project 7 applied to grades: reads five quiz        *
 *  scores for each of five students, then reports the total and   *
 *  average per student, and the average, highest and lowest       *
 *  score per quiz.                                                *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a[5][5];
    int row_sum[5]={0};
    int column_sum[5]={0};
    int average_score[5];
    int i,j;
    int min[5],max[5];
    
    
    
    for(i=0;i<5;i++)
    {
        printf("Enter Student number %d:",i+1);
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            row_sum[i]+=a[i][j];
    
        }
        average_score[i]=row_sum[i]/5;
        
    }
    
    for(i=0;i<5;i++)
    {
        max[i]=a[0][i];
        min[i]=a[0][i];
        
        for(j=0;j<5;j++)
        {
            column_sum[i]+=a[j][i];
            if(a[j][i]>max[i])
                max[i]=a[j][i];
            if(a[j][i]<min[i])
                min[i]=a[j][i];
        }
    }
    

    
   
    for(i=0;i<5;i++)
    {
        printf("Student number %d quizzes total score: %d , average score: %d\n",i+1,row_sum[i],average_score[i]);
        
    }
    
    
    for(i=0;i<5;i++)
    {
        printf("Quizz number %d total score: %d , highest score:%d , lowest score:%d \n",i,column_sum[i],max[i],min[i]);
    }
    
    printf("\n");
    
    return EXIT_SUCCESS;
}
