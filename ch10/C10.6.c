//
//  main.c
//  10.6
//
//  Created by Aleksandar on 5. 7. 2026..
//

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top=0;

void evaluate_expression(void);
void push(int ch);
int pop(void);
bool isFull(void);
bool isEmpty(void);


int main(int argc, const char * argv[]) {
    
    
    for(;;)
    {
        printf("Enter an RPN expression:");
        evaluate_expression();
        
    }
    
    return EXIT_SUCCESS;
}
/************************************************************************************************
 *                                                                                              *
 *      evaluate_expression:Evaluates the value of post-fix expression and prints it's value.                                                               *
 *                                                                                              *
 *                                                                                              *
 *                                                                                              *
 ************************************************************************************************/

void evaluate_expression(void)
{
    char ch;
    int value=0,left_operand,right_operand;
    
    scanf(" %c",&ch);
    while(ch!='=')
    {
        
            if(ch>='0' && ch<='9')
            {
                push(ch-'0');
            }
            else
            {
                switch(ch)
                {
                    case '+':right_operand=pop();left_operand=pop();value=left_operand + right_operand;break;
                    case '-':right_operand=pop();left_operand=pop();value=left_operand - right_operand;break;
                    case '*':right_operand=pop();left_operand=pop();value=left_operand * right_operand;break;
                    case '/':right_operand=pop();left_operand=pop();value=left_operand / right_operand;break;
                    case '=':value=pop();break;
                    default:printf("Expression is not valid. Please try again:");return;
                }
                
                push(value);
            }
            scanf(" %c",&ch);
        
        
    }
    
    printf("Value of expression: %d\n",value);
    
}

/**************************************************
 *                                                *
 *   push: Pushes value on the top of the stack.                                *
 *                                                *
 *                                                *
 **************************************************/

void push(int ch)
{
    if(isFull())
    {
        printf("Expression is too complex\n");
        exit(EXIT_FAILURE);
    }
    stack[top++]=ch;
}

/**************************************************
 *                                                *
 *   pop: Pops value from the top of the stack and returns it            *
 *       as value.                                                                             *
 *                                                *
 **************************************************/

int pop(void)
{
    if(isEmpty())
    {
        printf("Not enough operands in expression\n");
        exit(EXIT_FAILURE);
    }
    
    return stack[--top];
}

/************************************************************************
 *                                                                      *
 *   isFull: Returns true if stack is full and false if it isn't.                                                                    *
 *                                                                      *
 *                                                                      *
 *                                                                      *
 ************************************************************************/


bool isFull(void)
{
    return top==STACK_SIZE-1;
}

/************************************************************************
 *                                                                      *
 *   isEmpty: Returns true if stack is empty and false if it isn't.                                                          *
 *                                                                      *
 *                                                                      *
 *                                                                      *
 ************************************************************************/

bool isEmpty(void)
{
    return top==0;
}

