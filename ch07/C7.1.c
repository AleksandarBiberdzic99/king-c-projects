//
//  main.c
//  7.1
//
//  Created by Aleksandar on 7. 6. 2026..
//

/*******************************************************************
 *  Chapter 7, Project 1                                           *
 *                                                                 *
 *  square2.c from Section 6.3 breaks down once i * i grows past   *
 *  the largest value an int can hold. The task is to find the     *
 *  smallest n where that happens, then repeat the experiment      *
 *  with i declared as short and as long (adjusting the printf     *
 *  conversion specifications each time) and draw a conclusion     *
 *  about how many bits each integer type uses on this machine.    *
 *******************************************************************/


#include <stdio.h>

int main(void)
{
   long i,n;
    char ch;
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%ld", &n);
    getchar();
    
    
  for (i = 1; i <= n; i++)
  {
      printf("%10ld% 10ld\n", i, i * i);
      if(i%24==0)
      {
          printf("Press Enter to continue...");
          getchar();
          
      }
      
  }

  return 0;
}
