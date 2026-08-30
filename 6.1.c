//
//  main.c
//  6.1
//
//  Created by Aleksandar on 15. 4. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float input,max;
    
    printf("Enter a number:");
    scanf("%f",&input);
    max=input;
    
    while(input>0)
    {
        printf("Enter a number:");
        scanf("%f",&input);
        if(input>max)
            max=input;
    }
    
    printf("\nThe largerst number entered is %f\n",max);
    
    
    return EXIT_SUCCESS;
}

