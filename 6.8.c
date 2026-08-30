//
//  main.c
//  6.8
//
//  Created by Aleksandar on 18. 4. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int number_of_days,starting_day,i,j;
    
    printf("Enter number of days in month:");
    scanf("%d",&number_of_days);
    printf("Enter starting day of the week (1=Sun , 7=Sat):");
    scanf("%d",&starting_day);
    
    
    while(number_of_days<28 || number_of_days>31 || starting_day<1 || starting_day>7)
    {
        printf("\nInvalid input,please try again\n\n");
        printf("Enter number of days in month:");
        scanf("%d",&number_of_days);
        printf("Enter starting day of the week (1=Sun , 7=Sat):");
        scanf("%d",&starting_day);
    }
    
    
    
    
    for(j=1;j<starting_day;j++)
        printf("   ");
    
    for(i=1;i<=number_of_days;i++)
    {
        printf("%3d",i);
        
        if((starting_day-1+i)%7==0)
        {
            printf("\n");
        }
        
        
        
     }
    
    printf("\n");
    
    return EXIT_SUCCESS;
}
