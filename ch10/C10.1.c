//
//  main.c
//  10.1
//
//  Created by Aleksandar on 4. 7. 2026..
//

/*******************************************************************
 *  Chapter 10, Project 1                                          *
 *                                                                 *
 *  Adapts the stack example of Section 10.2 to hold characters    *
 *  rather than integers, and uses it to check whether a line of   *
 *  parentheses and braces is properly nested.                     *
 *                                                                 *
 *  Enter parentheses and/or braces: ((){}{()})                    *
 *  Parentheses/braces are nested properly                         *
 *                                                                 *
 *  Every left parenthesis or brace is pushed; every right one     *
 *  pops the stack and must match what comes off. At the newline   *
 *  the stack has to be empty for the input to be balanced — a     *
 *  mismatch, a leftover item, or a call to stack_underflow means  *
 *  it is not. If stack_overflow is called the program prints      *
 *  "Stack overflow" and stops right away.                         *
 *******************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
int top=0;
char stack[STACK_SIZE];

/* function prototypes */
void push(int ch);
int pop(void);
bool isEmpty(void);
bool isFull(void);
void stackOverflow(void);
int stackUnderflow(void);
void readEntry(void);
void parenthesesCheck(void);

int main(int argc, const char * argv[]) {
    
    
    printf("Enter parentheses and/or braces:");
    
    parenthesesCheck();
    
    
    
    return EXIT_SUCCESS;
}


/*************************************************
 *                                               *
 * parenthesesCheck: Checks whather parenthes or *
 *               braces are properly nested,     *
 *               and prints the message.         *
 *                                               *
 *                                               *
 *                                               *
 *                                               *
 *************************************************/



void parenthesesCheck(void)
{
    int ch,opener;
    
    while((ch=getchar())!='\n')
    {
        if(ch=='(' || ch=='{')
        push(ch);
        if(ch==')' || ch=='}')
        {
            opener=pop();
            if(opener==-1 || (ch==')' && opener=='{') || (ch=='}' && opener=='('))
            {
                printf("Parentheses/braces are not nested properly\n");
                exit(EXIT_FAILURE);
            }
        }
        
    }
    if(top==0)
      printf("Parentheses/braces are nested properly\n");
    else
      printf("Parentheses/braces are not nested properly\n");
       
}







/************************************************************
 *                                                          *
 *   push: Pushes the charachter ch onto the stack.         *
 *   If the stack is full,calls function stackOverklow( )   *
 *                                                          *
 *                                                          *
 *                                                          *
 ************************************************************/

void push(int ch)
{
    if(isFull())
    {
        stackOverflow();
    }
    stack[top++]=ch;
}


/**************************************************************************************+*****
 *                                                                                          *
 *    pop: Pops the charachter from the top of the stack and decrements top variable.       *
 *        If the stack is empty,calls function stackUnderflow( )                            *                                       
 *                                                                                          *
 ********************************************************************************************/

int pop(void)
{
    if(isEmpty())
    {
        return stackUnderflow();
    }
    return stack[--top];
}


/*************************************************
 *                                               *
 *     isFull: Cheks if the stack is full.       *
 *     If it is it returns true,if not false     *
 *                                               *
 *                                               *
 *                                               *
 *                                               *
 *************************************************/


bool isFull(void)
{
    return top>=STACK_SIZE;
}


/*******************************************************************
 *                                                                 *
 *    isEmpty: Cheks if the stack is empty.                        *
 *           If it is it returns true,if it is't it returns false. *
 *                                                                 *
 *******************************************************************/

bool isEmpty(void)
{
    return top==0;
}

/******************************************************************************************************
 *                                                                                                    *
 *    stackOverflow: It's called when stack is full and function push is called.                      *
 *               It prints message that stack is full and terminates the program.                     *
 *                                                                                                    *
 *                                                                                                    *
 ******************************************************************************************************/


void stackOverflow(void)
{
    printf("Stack overflow!\n");
    exit(EXIT_FAILURE);
}

/***********************************************************************************************
 *                                                                                             *
 *   stackUndeflow: It's called when stack is empty and function pop is called.                *
 *    It prints message that stack is undeflow and terminates the program.                     *
 *                                                                                             *
 *                                                                                             *
 ***********************************************************************************************/


int stackUnderflow(void)
{
    printf("Stack underflow!\n");
    return -1;
}







