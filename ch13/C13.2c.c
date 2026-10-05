//
//  main.c
//  C13.2c
//
//  Created by Aleksandar on 11. 9. 2026..
//

/*********************************************************
 * Chapter 13, Project 2 (c)                             *
 *                                                       *
 * Improved version of remind.c (Section 13.5). Prints   *
 * a one-year reminder list. Days are entered in the     *
 * form month/day.                                       *
 *********************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */
#define DATE_LEN 5      /*max length of month and day MM/DD */

int read_line(char str[], int n);

int main(int argc, const char * argv[]) {
    
    char reminders[MAX_REMIND][MSG_LEN+DATE_LEN+1];
    char  msg_str[MSG_LEN+1],date_str[DATE_LEN+1];
    int i,j,month=0,day=0,num_remind = 0;
    int ch,n;
    
    for(;;){
        if(num_remind==MAX_REMIND){
            printf("-- No space left -- \n");
            break;
        }
        
        printf("Enter month/day and reminder: ");
        n=scanf("%2d/%2d",&month,&day);
        
        if(n==EOF || (n==1 && month==0))
            break;
        
        if(n!=2 || month<1 || month>12 || day<1 || day>31)
        {
            printf("Invalid date input. Please try again.\n");
            
            while((ch=getchar())!='\n' && ch!=EOF)
                ;
            
            continue;
        }
        
        sprintf(date_str,"%.2d/%.2d",month,day);

        read_line(msg_str, MSG_LEN);
        
        for(i=0; i<num_remind; i++)
            if(strncmp(date_str,reminders[i],DATE_LEN)<0)
                break;
        
        for(j= num_remind; j > i;j--)
            strcpy(reminders[j],reminders[j-1]);
        
       
        strcpy(reminders[i],date_str);
        strcat(reminders[i], msg_str);
        
        num_remind++;
    }
    
    printf("\nMonth/Day  Reminder\n");
    for(i=0;i<num_remind;i++)
        printf("%s\n",reminders[i]);
    
    
    return EXIT_SUCCESS;
}


int read_line(char str[], int n)
{
    int ch,i=0;
    
    while((ch=getchar())!='\n' && ch!=EOF)
        if(i<n)
            str[i++]=ch;
    str[i]='\0';
    return i;
}

