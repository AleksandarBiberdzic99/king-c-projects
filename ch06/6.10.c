
/*******************************************************************
 *  Chapter 6, Project 10                                          *
 *                                                                 *
 *  Generalizes Chapter 5, Project 9 from two dates to any number  *
 *  of them. Dates are read in a loop until the user enters        *
 *  0/0/0, then the earliest one is printed.                       *
 *                                                                 *
 *  Enter a date (mm/dd/yy): 3/6/08                                *
 *  Enter a date (mm/dd/yy): 5/17/07                               *
 *  Enter a date (mm/dd/yy): 6/3/07                                *
 *  Enter a date (mm/dd/yy): 0/0/0                                 *
 *  5/17/07 is the earliest date                                   *
 *******************************************************************/


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int time,min,month,day,year,min_month,min_day,min_year;
    
    printf("Enter a date (mm/dd/yy) :");
    scanf("%2d/%2d/%2d",&month,&day,&year);
    time=(year*1000 + month*100 +day);
    min=time;
    min_day=day;
    min_month=month;
    min_year=year;
    
    while(1)
    {
        printf("Enter a date (mm/dd/yy) :");
        scanf("%2d/%2d/%2d",&month,&day,&year);
        if(month==0 && day==0 && year==0)
            break;
        
        time=(year*1000 + month*100 +day);
        
        if(time<min)
        {
            min=time;
            min_day=day;
            min_month=month;
            min_year=year;
        }
    }
    
    printf("%.2d/%.2d/%.2d is the earliest date\n",min_month,min_day,min_year);
    
    return 0;
}
