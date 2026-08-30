//
//  main.c
//  C5.8
//
//  Created by Aleksandar on 6/5/25.
//

/*******************************************************************
 *  Chapter 5, Project 8                                           *
 *                                                                 *
 *  Reads a 24-hour time and prints the flight whose departure     *
 *  is closest to it, together with its arrival time.              *
 *                                                                 *
 *      Departure   Arrival                                        *
 *       8:00 am    10:16 am                                       *
 *       9:43 am    11:52 am                                       *
 *      11:19 am     1:31 pm                                       *
 *      12:47 pm     3:00 pm                                       *
 *       2:00 pm     4:08 pm                                       *
 *       3:45 pm     5:55 pm                                       *
 *       7:00 pm     9:20 pm                                       *
 *       9:45 pm    11:58 pm                                       *
 *                                                                 *
 *  Enter a 24-hour time: 13:15                                    *
 *  Closest departure time is 12:47 p.m., arriving at 3:00 p.m.    *
 *                                                                 *
 *  Both the input and the departure times are converted to        *
 *  minutes since midnight so they can be compared directly.       *
 *******************************************************************/


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int departure_hours,departure_minutes,minutes_since_midnight;
    int flight1,flight2,flight3,flight4,flight5,flight6,flight7,flight8,a,b,c,d,e,f,g,h;
    
    flight1=8 * 60;
    flight2=9 * 60 + 43;
    flight3=11 * 60 + 19;
    flight4=12 * 60 + 47;
    flight5=14 * 60;
    flight6=15 * 60 + 45;
    flight7=19 * 60;
    flight8=21 * 60 + 45;
    
    
    printf("Enter a 24-hour time:");
    scanf("%d:%d",&departure_hours,&departure_minutes);
    
    minutes_since_midnight=departure_hours * 60 + departure_minutes;
    
    a=(flight1-minutes_since_midnight)>=0 ? (flight1-minutes_since_midnight) : -(flight1-minutes_since_midnight);
    b=(flight2-minutes_since_midnight)>=0 ? (flight2-minutes_since_midnight) : -(flight2-minutes_since_midnight);
    c=(flight3-minutes_since_midnight)>=0 ? (flight3-minutes_since_midnight) : -(flight3-minutes_since_midnight);
    d=(flight4-minutes_since_midnight)>=0 ? (flight4-minutes_since_midnight) : -(flight4-minutes_since_midnight);
    e=(flight5-minutes_since_midnight)>=0 ? (flight5-minutes_since_midnight) : -(flight5-minutes_since_midnight);
    f=(flight6-minutes_since_midnight)>=0 ? (flight6-minutes_since_midnight) : -(flight6-minutes_since_midnight);
    g=(flight7-minutes_since_midnight)>=0 ? (flight7-minutes_since_midnight) : -(flight7-minutes_since_midnight);
    h=(flight8-minutes_since_midnight)>=0 ? (flight8-minutes_since_midnight) : -(flight8-minutes_since_midnight);
    
    if(minutes_since_midnight<flight1 )
    {
        if(a<h)
        printf("Closest depature time is 8:00 a.m. ,arriving at 10:16 a.m\n");
        else
            printf("Closest depature time is 9:45 p.m. ,arriving at 11:58 p.m\n");
    }
    else if(minutes_since_midnight<flight2)
    {
        if(a<b)
        printf("Closest depature time is 8:00 a.m. ,arriving at 10:16 a.m\n");
        else
            printf("Closest depature time is 9:43 a.m. ,arriving at 11:52 a.m\n");
    }
    else if (minutes_since_midnight<flight3)
    {
        if(b<c)
            printf("Closest depature time is 9:43 a.m. ,arriving at 11:52 a.m\n");
        else
            printf("Closest departure time is 11:19 a.m ,arriving at 1:31 p.m.\n");
    }
    else if(minutes_since_midnight<flight4)
    {
        if(c<d)
            printf("Closest departure time is 11:19 a.m ,arriving at 1:31 p.m.");
        else
            printf("Closest departure time is 12:47 p.m ,arriving at 3:00 p.m.");
    }
    else if(minutes_since_midnight<flight5)
    {
        if(d<e)
            printf("Closest departure time is 12:47 p.m ,arriving at 3:00 p.m.\n");
        else
            printf("Closest departure time is 2:00 p.m ,arriving at 4:08 p.m.\n");
    }
    else if(minutes_since_midnight<flight6)
    {
        if(e<f)
            printf("Closest departure time is 2:00 p.m ,arriving at 4:08 p.m.\n");
        else
            printf("Closest departure time is 3:45 p.m ,arriving at 5:55 p.m.\n");
    }
    else if(minutes_since_midnight<flight7)
    {
        if(f<g)
            printf("Closest departure time is 3:45 p.m ,arriving at 5:55 p.m.\n");
        else
            printf("Closest departure time is 7:00 p.m ,arriving at 9:20 p.m.\n");
    }
    else
    {
        if(g<h)
            printf("Closest departure time is 7:00 p.m ,arriving at 9:20 p.m.\n");
        else
            printf("Closest departure time is 9:45 p.m ,arriving at 11:58 p.m.\n");
    }
    
    
    
    
    return 0;
}
