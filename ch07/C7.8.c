//
//  main.c
//  7.8
//
//  Created by Aleksandar on 7. 6. 2026..
//

#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    
    int departure_hours,departure_minutes,minutes_since_midnight;
    int flight1,flight2,flight3,flight4,flight5,flight6,flight7,flight8,a,b,c,d,e,f,g,h;
    char ch;
    
    flight1=8 * 60;
    flight2=9 * 60 + 43;
    flight3=11 * 60 + 19;
    flight4=12 * 60 + 47;
    flight5=14 * 60;
    flight6=15 * 60 + 45;
    flight7=19 * 60;
    flight8=21 * 60 + 45;
    
    
    printf("Enter a 12-hour time(hours:minutes followed by am/pm indicator,white space and upper case is allowed):");
    scanf("%d:%d %c",&departure_hours,&departure_minutes,&ch);
    
    if(toupper(ch)=='P' && departure_hours!=12)
        departure_hours+=12;
    else if(toupper(ch)=='A' && departure_hours==12)
        departure_hours=0;
    
    
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
