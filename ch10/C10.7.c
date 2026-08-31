//
//  main.c
//  10.7
//
//  Created by Aleksandar on 5. 7. 2026..
//

/*******************************************************************
 *  Chapter 10, Project 7                                          *
 *                                                                 *
 *  Displays a number the way a seven-segment display would,       *
 *  drawing each digit out of ordinary characters.                 *
 *                                                                 *
 *  Enter a number: 491-9014                                       *
 *                                                                 *
 *  Anything that is not a digit is skipped. A macro MAX_DIGITS,   *
 *  set to 10, caps how many digits are shown; anything beyond     *
 *  that is dropped.                                               *
 *                                                                 *
 *  Two external arrays do the work. The segments array records    *
 *  which segments each digit lights up (see Chapter 8,            *
 *  Exercise 6). The digits array is the canvas: 4 rows, since a   *
 *  segmented digit is four characters tall, and MAX_DIGITS * 4    *
 *  columns, since each digit is three characters wide plus a      *
 *  space between them.                                            *
 *                                                                 *
 *  Four functions:                                                *
 *      void clear_digits_array(void);                             *
 *      void process_digit(int digit, int position);               *
 *      void print_digits_array(void);                             *
 *                                                                 *
 *  clear_digits_array blanks the canvas, process_digit draws one  *
 *  digit at a given position (0 to MAX_DIGITS - 1), and           *
 *  print_digits_array prints the four rows, one per line.         *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

#define MAX_DIGITS 10
#define SEGMENTS_NUMBER 7
#define ROWS_NUMBER 4
#define COLUMNS_NUMBER (4*MAX_DIGITS)

int segments[10][7]={{1,1,1,1,1,1,0} , {[1]=1,1} , {1,1,[3]=1,1,0,1},{1,1,1,1,[6]=1} , {[1]=1,1,[5]=1,[6]=1},{1,[2]=1,1,[5]=1,1} , {1,[2]=1,1,1,1,1} , {1,1,1} , {1,1,1,1,1,1,1} , {1,1,1,1,[5]=1,1} };
int number[MAX_DIGITS];
char digits[4][MAX_DIGITS*10];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);




int main(int argc, const char * argv[]) {
    
    int digit,position=0;
    
    
    clear_digits_array();
    
    printf("Enter a number:");
    
    while((digit=getchar())!='\n' && digit!=EOF)
    {
        if(digit>='0' && digit<='9' && position<MAX_DIGITS)
        {
            process_digit((digit-'0'),position++);
        }
    }
     
    
    print_digits_array();
    
    
    return EXIT_SUCCESS;
}



/******************************************************************************************
 *                                                                                        *
 *                                                                                        *
 *                                                                                        *
 *  clear_digits_array: Stores blank charachters into all elements ot the digits array.   *
 *                                                                                        *
 *                                                                                        *
 *                                                                                        *
 ******************************************************************************************/

void clear_digits_array(void)
{
    int i,j;
    
    for(i=0;i<ROWS_NUMBER;i++)
        for(j=0;j<COLUMNS_NUMBER;j++)
            digits[i][j]=' ';
}


void process_digit(int digit, int position)
{
    
    
   
    if(segments[digit][0])digits[0][1+4*position]='_';
    if(segments[digit][1])digits[1][2+4*position]='|';
    if(segments[digit][2])digits[2][2+4*position]='|';
    if(segments[digit][3])digits[2][1+4*position]='_';
    if(segments[digit][4])digits[2][4*position]='|';
    if(segments[digit][5])digits[1][4*position]='|';
    if(segments[digit][6])digits[1][1+4*position]='_';
            
        
}

void print_digits_array(void)
{
    int i,j;
    
    for(i=0;i<ROWS_NUMBER;i++)
    {
        for(j=0;j<COLUMNS_NUMBER;j++)
        {
            putchar(digits[i][j]);
        }
        printf("\n");
    }
}
