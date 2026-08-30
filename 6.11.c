//
//  main.c
//  6.11
//
//  Created by Aleksandar on 18. 4. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n,i,j,fact;
    float e=1.0f;
    
    printf("Enter n:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        fact=1;
        
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        
        e=e+1.0f/fact;
        
        
        
    }
    
    printf("The value of e with precision of %d is:%f\n",n,e);
    
    return EXIT_SUCCESS;
}
