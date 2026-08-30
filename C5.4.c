//
//  main.c
//  C5.4
//
//  Created by Aleksandar on 6/5/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int wind_speed;
    
    printf("Enter the speed of the wind in knots:");
    scanf("%d",&wind_speed);
    
    if(wind_speed<1)
        printf("Calm\n");
    else if(wind_speed<4)
        printf("Light air\n");
    else if(wind_speed<28)
        printf("Breeze\n");
    else if(wind_speed<48)
        printf("Gale\n");
    else if(wind_speed<64)
        printf("Storm\n");
    else
        printf("Hurricane\n");
    
    return 0;
}
