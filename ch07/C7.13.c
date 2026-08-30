//
//  main.c
//  7.13
//
//  Created by Aleksandar on 9. 6. 2026..
//

/*******************************************************************
 *  Chapter 7, Project 13                                          *
 *                                                                 *
 *  Calculates the average word length in a sentence and prints    *
 *  it to one decimal place. Punctuation counts as part of the     *
 *  word it is attached to.                                        *
 *                                                                 *
 *  Enter a sentence: It was deja vu all over again.               *
 *  Average word length: 3.4                                       *
 *******************************************************************/


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
