//
//  main.c
//  C13.6
//
//  Created by Aleksandar on 22. 9. 2026..
//

/*********************************************************
 * Chapter 13, Project 6                                                                                     *
 *                                                       *
 * Improved version of planet.c (Section 13.7). Ignores                                  *
 * case when comparing command-line arguments with                               *
 * strings in the planets array.                                                                           *
 *********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int my_strcmp(const char *str1,const char *str2);

int main(int argc, char *argv[])
{
  char *planets[] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranus", "Neptune", "Pluto"};
  int i, j;

  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++)
      if (my_strcmp(argv[i], planets[j]) == 1) {
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    if (j == NUM_PLANETS)
      printf("%s is not a planet\n", argv[i]);
  }

  return 0;
}

/* This function returns 1 if the strings are equal regardless of letters case and 0 if they're not  */

int my_strcmp(const char *str1, const char *str2)
{
    while(*str1)
    {
       if(tolower((unsigned char)*str1)!=tolower((unsigned char)*str2))
           break;
        str1++;
        str2++;
    }
    
    return *str1=='\0' && *str2=='\0';
}
