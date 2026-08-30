//
//  main.c
//  6.2
//
//  Created by Aleksandar on 15. 4. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a,b,reminder;
    
    printf("Enter two integers:");
    scanf("%d%d",&a,&b);
    
    
    
    while(b!=0)
    {
        reminder=a%b;
        a=b;
        b=reminder;
    }
    
  
    
    printf("Greatest common divisor: %d\n",a);
    
    
    
    
    return EXIT_SUCCESS;
}
