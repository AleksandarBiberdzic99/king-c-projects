//
//  main.c
//  C13.2b
//
//  Created by Aleksandar on 11. 9. 2026..
//

/*********************************************************
 * Chapter 13, Project 2 (b)                             *
 *                                                       *
 * Improved version of remind.c (Section 13.5). Allows   *
 * the user to enter a day, a 24-hour time, and a        *
 * reminder. The printed reminder list is sorted first   *
 * by day, then by time.                                 *
 *********************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */

int read_line(char str[], int n);

int main(int argc, const char * argv[]) {
    
    char reminders[MAX_REMIND][MSG_LEN+9];
    char  msg_str[MSG_LEN+1],time_str[9];
    int day,i,j,hours,minutes,num_remind = 0;
    
    for(;;){
        if(num_remind==MAX_REMIND){
            printf("-- No space left -- \n");
            break;
        }
        
        printf("Enter day,time and reminder: ");
        scanf("%2d",&day);
        if(day == 0)
            break;
        
        scanf("%2d:%2d",&hours,&minutes);
        if(hours<0 || hours>23 || minutes<0 || minutes>59)
            break;
        sprintf(time_str,"%2d %.2d:%.2d",day,hours,minutes);
        read_line(msg_str, MSG_LEN);
        
        for(i=0; i<num_remind; i++)
            if(strncmp(time_str,reminders[i],8)<0)
                break;
        
        for(j= num_remind; j > i;j--)
            strcpy(reminders[j],reminders[j-1]);
        
       
        strcpy(reminders[i],time_str);
        strcat(reminders[i], msg_str);
        
        num_remind++;
    }
    
    printf("\nDay Time Reminder\n");
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
