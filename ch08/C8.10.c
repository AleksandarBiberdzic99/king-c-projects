//
//  main.c
//  8.10
//
//  Created by Aleksandar on 16. 6. 2026..
//

/*******************************************************************
 *  Chapter 8, Project 10                                          *
 *                                                                 *
 *  Reworks Chapter 5, Project 8 to use arrays: departure times    *
 *  go in one array and arrival times in another, both stored as   *
 *  integers counting minutes since midnight. A loop scans the     *
 *  departure array for the time closest to the one entered by     *
 *  the user, replacing the long chain of if statements.           *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define FLIGHTS_NUMBER 8
#define MIDNIGHT 24*3600
int main(int argc, const char * argv[]) {
    
    int input_hours,input_minutes,input_minutes_since_midnight;
    int i,closest_index=0,read_count=0;
    const int departure_time[FLIGHTS_NUMBER]={(8*60),(9*60+43),(11*60+19),(12*60+47),(14*60),(15*60+45),(19*60),(21*60+45)};
    const int arrival_time[FLIGHTS_NUMBER]={(10*60+16),(11*60+52),(13*60+31),(15*60),(16*60+8),(17*60+55),(21*60+20),(23*60+58)};
    
    printf("Enter a 24-hour time:");
    scanf("%d:%d",&input_hours,&input_minutes);
    
    while(read_count!=2 || input_hours<0 || input_hours>23 || input_minutes<0 || input_minutes>59)
    {
        printf("Entered time in not valid try again:");
        if(read_count==EOF) break;
        int c;
        while((c=getchar())!='\n' && c!=EOF);
        read_count=scanf("%d:%d",&input_hours,&input_minutes);
        
    }
    
    input_minutes_since_midnight=input_hours*60 + input_minutes;
    
    
    for(i=1;i<FLIGHTS_NUMBER;i++)
    {
        if(abs(input_minutes_since_midnight-departure_time[i])<abs(input_minutes_since_midnight-departure_time[closest_index]))
        {
            closest_index=i;
        }
    }
    
    printf("Closest departure time %d:%d ",departure_time[closest_index]/60,departure_time[closest_index]%60);
    if(departure_time[closest_index]%60>=12)
        printf("p.m.");
    else
        printf("a.m.");
    
    printf(" ,arriving at %d:%d ",arrival_time[closest_index]/60,arrival_time[closest_index]%60);
    if(arrival_time[closest_index]%60>=12)
        printf("p.m.\n");
    else
        printf("a.m.\n");
    
    return EXIT_SUCCESS;
}
