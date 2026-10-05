//
//  main.c
//  C13.18
//
//  Created by Aleksandar on 4. 10. 2026..
//


/*********************************************************
 * Chapter 13, Project 18                                *
 *                                                       *
 * Accepts a date in the form mm/dd/yyyy and displays it *
 * in the form "month dd, yyyy" (e.g. 2/17/2011 becomes  *
 * February 17, 2011). Month names are stored in an      *
 * array of pointers to strings.                         *
 *********************************************************/


#include <stdlib.h>
#include <stdio.h>



int main(int argc, const char * argv[]) {
    
    char *months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};

    int day,month,year;
    int ch;
    
    for(;;)
    {
        printf("Enter a date (mm//dd/yyyy): ");
        if(scanf("%2d/%2d/%4d",&month,&day,&year)!=3 || month<1 || month>12 || day<1 || day>31)
        {
            printf("Invalid input.");
            while((ch=getchar())!='\n' && ch!=EOF)
                ;
        }
        else
        {
            printf("You entered the date %s %d, %d",months[month-1],day,year);
        }
        
        printf("\n");
        
    }
    return EXIT_SUCCESS;
}


