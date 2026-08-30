//
//  main.c
//  C5.2
//
//  Created by Aleksandar on 6/5/25.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int hours,minutes;
    
    printf("Enter a 24-hour time:");
    scanf("%d:%d",&hours,&minutes);
    
    printf("Equivalent 12-hour time:");
    
    if(hours==0)
        printf("12:%.2d AM\n",minutes);
    else if(hours<12)
        printf("%.2d:%.2d AM\n",hours,minutes);
    else if(hours==12)
        printf("12:%.2d PM\n",minutes);
    else
        printf("%.2d:%.2d PM\n",hours%12,minutes);
    
        
}
