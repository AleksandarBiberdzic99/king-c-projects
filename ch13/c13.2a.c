//
//  main.c
//  C13.2a
//
//  Created by Aleksandar on 11. 9. 2026..
//

/*********************************************************
 * Chapter 13, Project 2 (a)                                                                                *
 *                                                       *
 * Improved version of remind.c (Section 13.5). Prints                                    *
 * an error message and ignores a reminder if the                                          *
 * corresponding day is negative or larger than 31.                                         *
 * corresponding day is negative or larger than 31.                                         *
 *********************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */

int read_line(char str[], int n);

int main(int argc, const char * argv[]) {
    
    char reminders[MAX_REMIND][MSG_LEN+3];
    char day_str[3], msg_str[MSG_LEN+1];
    int day,i,j,num_remind = 0;
    
    for(;;){
        if(num_remind==MAX_REMIND){
            printf("-- No space left -- \n");
            break;
        }
        
        printf("Enter day and reminder: ");
        scanf("%2d",&day);
        if(day == 0)
            break;
        else if(day < 0 || day > 31){
            printf("Wrong day value.Enter the value from 0 to 31.\n");
            read_line(msg_str, MSG_LEN);
            continue;
        }
        sprintf(day_str,"%2d",day);
        read_line(msg_str, MSG_LEN);
        
        for(i=0; i<num_remind; i++)
            if(strcmp(day_str,reminders[i])<0)
                break;
        for(j= num_remind; j > i;j--)
            strcpy(reminders[j],reminders[j-1]);
        
        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);
        
        num_remind++;
    }
    
    printf("\nDay Reminder\n");
    for(i=0;i<num_remind;i++)
        printf("%s\n",reminders[i]);
    
    
    return EXIT_SUCCESS;
}


int read_line(char str[], int n)
{
    int ch,i=0;
    
    while((ch=getchar())!='\n')
        if(i<n)
            str[i++]=ch;
    str[i]='\0';
    return i;
}
