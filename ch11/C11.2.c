//
//  main.c
//  11.2
//
//  Created by Aleksandar on 30. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>


void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(int argc, const char * argv[]) {
    
    int desired_hours,desired_minutes,minutes_since_midnight;
    int departure_time,arrival_time;
    int departure_hours,departure_minutes,arrival_hours,arrival_minutes;
    
    while(1)
    {
        printf("Enter a 24-hour time: ");
        
        
        if(scanf("%d:%d",&desired_hours,&desired_minutes)==2 && desired_hours>=0 && desired_hours<24 && desired_minutes>=0 && desired_minutes<60) break;
        
        while(getchar()!='\n')
            ;
        
        printf("Invalid input.Please try again.\n");
    }
    
    
    minutes_since_midnight = (desired_hours * 60) + desired_minutes;
    
    find_closest_flight(minutes_since_midnight,&departure_time,&arrival_time);
    
    departure_hours = departure_time / 60 ;
    departure_minutes = departure_time % 60;
    arrival_hours = arrival_time / 60;
    arrival_minutes = arrival_time % 60;
    
    printf("Closest departure time is %.2d:%.2d ",departure_hours,departure_minutes);
    
    if(departure_hours<12)
        printf("a.m.");
    else
        printf("p.m.");
    
    printf(",arriving at %.2d:%.2d ",arrival_hours,arrival_minutes);
    
    if(arrival_hours<12)
        printf("a.m.");
    else
        printf("p.m");
    
    printf("\n");
    
    
    return EXIT_SUCCESS;
}


void find_closest_flight(int desired_time, int *departure_time,int *arrival_time)
{
    int flights_departure[8]={480,583,679,767,840,945,1140,1305};
    int flights_arrival[8]={616,712,811,900,968,1075,1280,1438};
    int i;
    
    for(i=0;i<7;i++)
        if(desired_time<=flights_departure[i]) break;
    
    if(i>0 && (desired_time - flights_departure[i-1])<(flights_departure[i]-desired_time))
        i--;
    
    *departure_time=flights_departure[i];
    *arrival_time=flights_arrival[i];
        
}
