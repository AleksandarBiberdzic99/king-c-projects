//
//  main.c
//  8.3
//
//  Created by Aleksandar on 14. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int main(int argc, const char * argv[]) {
    
    int n,m,digit,i;
    bool digit_seen[10]={false};
    
    printf("Enter numbers:");
    scanf("%d",&n);
    
    while(n>0)
    {
        m=n;
        
        while(m>0)
        {
            digit=m%10;
            if(digit_seen[digit])
            {
                printf("Repeated digit in number %d .",n);
                break;
            }
            else
                digit_seen[digit]=true;
            
            m=m/10;
            
        }
        if(m==0)
            printf("No repeated digits in number %d .",n);
        for(i=0;i<10;i++)
        {
            digit_seen[i]=false;
        }
        printf("\n");
        scanf("%d",&n);
    }
    
    
    printf("\n");
    
    return EXIT_SUCCESS;
}
