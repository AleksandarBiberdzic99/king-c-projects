//
//  main.c
//  7.12
//
//  Created by Aleksandar on 8. 6. 2026..
//

/*******************************************************************
 *  Chapter 7, Project 12                                          *
 *                                                                 *
 *  Evaluates an arithmetic expression made of floating-point      *
 *  operands and the operators +, -, * and /. Evaluation runs      *
 *  strictly left to right — no operator has precedence over       *
 *  another.                                                       *
 *                                                                 *
 *  Enter an expression: 1+2.5*3                                   *
 *  Value of expression: 10.5                                      *
 *******************************************************************/


#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
            char operator;
            float left_operand,right_operand,result;
    
            printf("Enter an expression:");
            scanf("%f",&left_operand);
            result=left_operand;
            

            while((operator=getchar())!='\n')
             {
            
            scanf("%f",&right_operand);
            switch(operator)
            {
                case '+':
                    result=left_operand+right_operand;
                    break;
                case '-':
                    result=left_operand-right_operand;
                    break;
                case '*':
                    result=left_operand*right_operand;
                    break;
                case '/':
                    result=left_operand/right_operand;
                    break;
            }
             left_operand=result;
           }
    
    
    
    printf("Value of expression: %.2f\n",result);
    
    return EXIT_SUCCESS;
}
