//
//  main.c
//  C5.1
//
//  Created by Aleksandar on 6/5/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number;
    
    printf("Enter the number:");
    scanf("%d",&number);
    
    if(number<10)
        printf("Your number %d has 1 digit\n",number);
    else if(number<100)
        printf("Your number %d has 2 digits\n",number);
    else
        printf("Your number %d has 3 digits\n",number);
    
    
    
    
    return 0;
}
