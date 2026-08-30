//
//  main.c
//  7.13
//
//  Created by Aleksandar on 9. 6. 2026..
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int repeat=0;
    float word_length=0.0f,average_length=0.0f,number_of_words=0.0f;
    char ch;
    
    printf("Enter a sentence:");
    
    while((ch=getchar())==' ')
        ;
    
    while(ch!='\n')
    {
        if(ch!=' ')
           {
            word_length++;
               repeat=0;
           }
        else if(ch==' ' && repeat==0)
        {
            average_length+=word_length;
            number_of_words++;
            word_length=0;
            repeat++;
        }
        ch=getchar();
    }
    if(word_length>0)
    {
        number_of_words++;
        average_length+=word_length;
    }
    if(number_of_words>0)
    {
        average_length=average_length/number_of_words;
    }
    printf("Average word length: %.1f\n",average_length);
    
    return EXIT_SUCCESS;
}
