//
//  main.c
//  C13.10
//
//  Created by Aleksandar on 23. 9. 2026..
//

/********************************************************
 * Chapter 13, Project 10                                                                                  *
 *                                                      *
 * Modified version of Chapter 7, Project 11. Uses the                                   *
 * function reverse_name, which modifies a string                                        *
 * containing a first and last name so that the last                                         *
 * name comes first, followed by a comma, a space, the                               *
 * first initial, and a period (e.g. "Lloyd Fosdick"                                             *
 * becomes "Fosdick, L."). Extra spaces before, between,                             *
 * and after the names are allowed.                                                                  *
 *********************************************************/

#include <stdlib.h>
#include <stdio.h>

#define MAX_LEN 50

void reverse_name(char *name);
void read_line(char *string);

int main(int argc, const char * argv[]) {
    
    char text[MAX_LEN+3];
    
    printf("Enter a first and last name: ");
    read_line(text);
    reverse_name(text);
    
    printf("%s\n",text);
    
    return EXIT_SUCCESS;
}


void read_line(char *string)
{
    int ch;
    int i=0;
    
    while(i++<MAX_LEN && (ch=getchar())!='\n' && ch!=EOF)
        *string++=ch;
     
    *string='\0';
    
}


void reverse_name(char *name)
{
    char *p=name;
    char first_initial;
    
    while(*p==' ')
        p++;
    
    first_initial=*p;
    
    while(*p!=' ' && *p!='\0')
        p++;
    
    while(*p==' ')
        p++;
    
    while(*p!='\0' && *p!=' ')
    {
        *name=*p;
        name++;
        p++;
    }
    
    *name++=',';
    *name++=' ';
    *name++=first_initial;
    *name++='.';
    *name='\0';


}
