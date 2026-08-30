//
//  main.c
//  C5.7
//
//  Created by Aleksandar on 6/5/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num1,num2,num3,num4,max,min,max_of_the_first_group,max_of_the_second_group,min_of_the_first_group,min_of_the_second_group;
    
    printf("Enter four integers:");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    
    /*Searching for the largest and smallest value*/
    
    //Find max and min of the first pair of two adjacent elemnts
    
    if(num1>num2)
    {
        max_of_the_first_group=num1;
        min_of_the_first_group=num2;
    }
    else
    {
        max_of_the_first_group=num2;
        min_of_the_first_group=num1;
    }
    //End
    
    //Find max and min of the second pair of two adjacent elements
    if(num3>num4)
    {
        max_of_the_second_group=num3;
        min_of_the_second_group=num4;
    }
    else
    {
        max_of_the_second_group=num4;
        min_of_the_second_group=num3;
    }
    //End
    
    //Finding out which of the maximums of two groups is higher
    //Ternary operator is used to reduce even further number of if statments
    max=(max_of_the_first_group>max_of_the_second_group) ? max_of_the_first_group:max_of_the_second_group;
    //End
    
    //Finding out which of minimums of two groups is smaller
    min=(min_of_the_first_group<min_of_the_second_group) ? min_of_the_first_group:min_of_the_second_group;

    //End
    
    //End of search
    
   
    
    //Printing highest and smallest value
    printf("Largest: %d\n",max);
    printf("Smallest: %d\n",min);
    
    
        
    
    return 0;
}
