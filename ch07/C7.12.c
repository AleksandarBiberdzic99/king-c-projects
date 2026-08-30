//
//  main.c
//  7.12
//
//  Created by Aleksandar on 8. 6. 2026..
//

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
