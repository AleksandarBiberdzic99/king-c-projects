//
//  main.c
//  C13.5
//
//  Created by Aleksandar on 21. 9. 2026..
//

/*********************************************************
 * Chapter 13, Project 5                                 *
 *                                                       *
 * Adds up its command-line arguments, which are assumed *
 * to be integers. Example: "sum 8 24 62" prints         *
 * "Total: 94".                                          *
 *********************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_EXPONENT 100000000
#define LIMITS_ERROR 1000000000

long int my_atoi(const char *str);

int main(int argc, const char * argv[]) {
    
    int i;
    long int sum;

    for(i=1,sum=0;i<argc;i++)
    {
        sum+=my_atoi(argv[i]);
    }
    
    printf("Total: %ld\n",sum);
    
    return EXIT_SUCCESS;
}


long int my_atoi(const char *str)
{
    char sign='+';
    const char *start=str,*end,*p;
    long int exponent=1;
    long int sum=0;
    
    p=str;
    
    while(*p!='\0')
    {
        if(*p=='-')
            sign='-';
        
        if(*p>='0' && *p<='9')
        {
            start=p;
            break;
        }
        p++;
    }
    
    if(*p=='\0' || *start=='0')
        return 0;
    
    end=start;
    
    while(*end>='0' && *end<='9')
        end++;
    
    end=end-1;
    
    while(end>=start)
    {
        if(exponent>MAX_EXPONENT)
        {
            printf("\nWarning! Due to safety and possible overflow function doesn't return numbers bigger than 999 999 999\n");
            return LIMITS_ERROR;
        }
        sum+=(*end-'0')*exponent;
        exponent*=10;
        end--;
    }
    
    return sign=='+' ? sum : -sum ;
}

