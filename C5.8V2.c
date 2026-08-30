//
//  main.c
//  C5.8 v2
//
//  Created by Aleksandar on 6/6/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int departure_hours,departure_minutes,minutes_since_midnight;
    int flight1,flight2,flight3,flight4,flight5,flight6,flight7,flight8,a,b,c,d,e,f,g,h,mid;
    
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

    mid=d;
    if(mid<e)
    {
        
    }


    return 0;
}
