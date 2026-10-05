//
//  main.c
//  C13.15
//
//  Created by Aleksandar on 3. 10. 2026..
//


/*********************************************************
 * Chapter 13, Project 15                                                                                    *
 *                                                       *
 * Modified version of Chapter 10, Project 6. Evaluates                                  *
 * Reverse Polish Notation (RPN) expressions using the                                *
 * function evaluate_RPN_expression, which returns the                               *
 * value of the RPN expression pointed to by expression.                              *
 *********************************************************/


#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int top=0;

bool read_expression(char *expression);
void push(int ch);
int pop(void);
bool isFull(void);
bool isEmpty(void);
int evaluate_RPN_expression(const char *expression);

int main(int argc, const char * argv[]) {
    
    char expression[STACK_SIZE];
    int result;
    
    for(;;)
    {
        printf("Enter an RPN expression:");
        if(!read_expression(expression))
            continue;
        
        result=evaluate_RPN_expression(expression);
        printf("Value of expression: %d\n",result);
        
    }
    
    return EXIT_SUCCESS;
}
/************************************************************************************************
 *                                                                                              *
 *      evaluate_expression:Evaluates the value of post-fix expression and prints it's value.                                                         *
 *                                                                                              *
 *                                                                                              *
 *                                                                                              *
 ************************************************************************************************/

bool read_expression(char *expression)
{
    int ch;
    int length=0;
    bool is_valid=true;
    
    while((ch=getchar())!='\n' && ch!=EOF)
    {
        
        
        if((ch>='0' && ch<='9') || ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='=')
        {
            *expression++=ch;
            length++;
        }
        else if( !isspace((unsigned char)ch) )
        {
            while((ch=getchar())!='\n' && ch!=EOF)
                ;
            exit(1);
        }
        
    }
    *expression='\0';
    
    if(length==0 || *(expression-1)!='=')
        is_valid=false;
    
    return is_valid;
}


int evaluate_RPN_expression(const char *expression)
{
    int value=0,left_operand,right_operand;
    
    
     while(*expression)
     {
         if(isdigit((unsigned char)*expression))
             push(*expression-'0');
         else if(*expression!='=')
         {
             right_operand=pop();
             left_operand=pop();
             switch(*expression)
             {
                 case '+': value=left_operand+right_operand;break;
                 case '-': value=left_operand-right_operand;break;
                 case '*': value=left_operand*right_operand;break;
                 case '/': value=left_operand/right_operand;break;
             }
             push(value);
         }
         else
         {
             value=pop();
             return value;
         }
         expression++;
     }
    return EXIT_FAILURE;
}
    
    
    


/**************************************************
 *                                                *
 *   push: Pushes value on the top of the stack.                            *
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
 *   pop: Pops value from the top of the stack and returns it        *
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
 *   isFull: Returns true if stack is full and false if it isn't.                                                                *
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
 *   isEmpty: Returns true if stack is empty and false if it isn't.                                                      *
 *                                                                      *
 *                                                                      *
 *                                                                      *
 ************************************************************************/

bool isEmpty(void)
{
    return top==0;
}

