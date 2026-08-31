//
//  main.c
//  10.6
//
//  Created by Aleksandar on 5. 7. 2026..
//

/*******************************************************************
 *  Chapter 10, Project 6                                          *
 *                                                                 *
 *  Evaluates expressions written in Reverse Polish Notation,      *
 *  where each operator follows its operands: 1 + 2 * 3 is written *
 *  1 2 3 * +.                                                     *
 *                                                                 *
 *  Operands are single digits; the operators are +, -, *, / and   *
 *  =. Reading left to right, an operand is pushed onto a stack,   *
 *  and an operator pops its operands, applies itself, and pushes  *
 *  the result back. The = operator prints the value on top,       *
 *  clears the stack and prompts for another expression; any       *
 *  character that is neither operator nor operand ends the run.   *
 *                                                                 *
 *  Enter an RPN expression: 1 2 3 * + =                           *
 *  Value of expression: 7                                         *
 *  Enter an RPN expression: 5 8 * 4 9 - / =                       *
 *  Value of expression: -8                                        *
 *  Enter an RPN expression: q                                     *
 *                                                                 *
 *  Stack overflow prints "Expression is too complex" and stops;   *
 *  underflow — as in 1 2 + + — prints "Not enough operands in     *
 *  expression" and stops. The stack code comes from Section 10.2  *
 *  and characters are read with scanf(" %c", &ch).                *
 *******************************************************************/

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
 *      evaluate_expression:Evaluates the value of post-fix expression and prints it's value.   *
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
 *   push: Pushes value on the top of the stack.  *
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

/*****************************************************************
 *                                                               *
 *   pop: Pops value from the top of the stack and returns it    *
 *       as value.                                               *
 *                                                               *
 *****************************************************************/

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
 *   isFull: Returns true if stack is full and false if it isn't.       *
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
 *   isEmpty: Returns true if stack is empty and false if it isn't.     *
 *                                                                      *
 *                                                                      *
 *                                                                      *
 ************************************************************************/

bool isEmpty(void)
{
    return top==0;
}

