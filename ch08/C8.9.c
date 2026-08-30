//
//  main.c
//  8.9
//
//  Created by Aleksandar on 16. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(int argc, const char * argv[]) {
    
    char table[10][10];
    const char letters[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int i,j,next_i,next_j,next_letter=0,random_number;
    int not_allowed_position[4]={0};
    int out_of_scope_position[4]={0};
    
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            table[i][j]='.';
        }
    }
    
    srand((unsigned int)time(NULL));
    
    
    next_i=0;
    next_j=0;
    
    
    while(1)
    {
        
        
            table[next_i][next_j]=letters[next_letter];
            if(next_letter<25)
            {
                next_letter++;
            }
            else
            {break;}
           
        
            
            random_number=rand()%4;
            
            if(next_j+1>=10)
                out_of_scope_position[0]=1;
            if(next_j-1<0)
                out_of_scope_position[1]=1;
            if(next_i+1>=10)
                out_of_scope_position[2]=1;
            if(next_i-1<0)
                out_of_scope_position[3]=1;
            
            if(out_of_scope_position[0]!=1)
            {
                if(table[next_i][next_j+1]!='.')
                    not_allowed_position[0]=1;
            }
            
            else
                not_allowed_position[0]=1;
            
            
            if(out_of_scope_position[1]!=1)
            {
                if(table[next_i][next_j-1]!='.')
                    not_allowed_position[1]=1;
            }
            else
            not_allowed_position[1]=1;
            
            if(out_of_scope_position[2]!=1)
            {
                if(table[next_i+1][next_j]!='.')
                    not_allowed_position[2]=1;
            }
            
            else not_allowed_position[2]=1;
            
            if(out_of_scope_position[3]!=1)
            {
                if(table[next_i-1][next_j]!='.')
                    not_allowed_position[3]=1;
            }
            
            else not_allowed_position[3]=1;
        
            if(not_allowed_position[0] && not_allowed_position[1] && not_allowed_position[2] && not_allowed_position[3])
                break;
            
        while(not_allowed_position[random_number]!=0)
        {
            random_number=rand()%4;
        
        }
        
        switch(random_number)
        {
            case 0:
                next_j++;
                break;
            case 1:
                next_j--;
                break;
            case 2:
                next_i++;
                break;
            case 3:
                next_i--;
                break;
        }
        
        for(i=0;i<4;i++){
            not_allowed_position[i]=0;
            out_of_scope_position[i]=0;
        }
            
        
    }
    
    
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%c ",table[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    
    return EXIT_SUCCESS;
}
