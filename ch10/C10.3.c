//
//  main.c
//  10.3
//
//  Created by Aleksandar on 4. 7. 2026..
//

/*******************************************************************
 *  Chapter 10, Project 3                                          *
 *                                                                 *
 *  Reworks poker.c from Section 10.5 to drop the num_in_rank,     *
 *  num_in_suit and card_exists arrays entirely. The hand is kept  *
 *  in a single 5 x 2 array instead, one card per row: hand[i][0]  *
 *  holds the rank of card i and hand[i][1] holds its suit.        *
 *******************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define NUM_CARDS 5
#define RANK 0
#define SUIT 1

/* external variables */
int hand[5][2];
bool straight, flush, four, three;
int pairs;   /* can be 0, 1 or 2 */

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);
bool  find_duplicates(int rank,int suit,int cards_read);
void swap_hand_array_elements(int index1,int index2);
/**********************************************************
 * main: Calls read_cards, analyze_hand, and print_result *
 *       repeatedly.                                      *
 **********************************************************/
int main(int argc, const char * argv[])
{
    for (;;) {
        read_cards();
        analyze_hand();
        print_result();
    }
    return EXIT_SUCCESS;
}

/******************************************************************************************
 * read_cards: Reads the cards into the external  two dimensional array hand[ ][ ]        *
 *          by saving rank of a card in first row and suit in second column.              *
 *          Also checks for bad and duplicate cards.                                      *
 *                                                                                        *
 *                                                                                        *
 ******************************************************************************************/
void read_cards(void)
{
    
    char ch, rank_ch, suit_ch;
    int rank=0,suit=0;
    bool bad_card;
    int cards_read = 0;
    
    
  

    

    while (cards_read < NUM_CARDS) {
        bad_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch) {
            case '0':           exit(EXIT_SUCCESS);
            case '2':           rank = 0;  break;
            case '3':           rank = 1;  break;
            case '4':           rank = 2;  break;
            case '5':           rank = 3;  break;
            case '6':           rank = 4;  break;
            case '7':           rank = 5;  break;
            case '8':           rank = 6;  break;
            case '9':           rank = 7;  break;
            case 't': case 'T': rank = 8;  break;
            case 'j': case 'J': rank = 9;  break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            default:            bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch) {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true;
        }

        while ((ch = getchar()) != '\n')
            if (ch != ' ') bad_card = true;

        if (bad_card)
            printf("Bad card; ignored.\n");
        else if (find_duplicates(rank,suit,cards_read))
            printf("Duplicate card; ignored.\n");
        else {
            hand[cards_read][RANK]=rank;
            hand[cards_read][SUIT]=suit;
            cards_read++;
        }
    }
}

/**********************************************************
 * analyze_hand: Determines whether the hand contains a   *
 *               straight, a flush, four-of-a-kind,       *
 *               and/or three-of-a-kind; determines the   *
 *               number of pairs; stores the results into *
 *               the external variables straight, flush,  *
 *               four, three, and pairs.                  *
 **********************************************************/
void analyze_hand(void)
{
    int num_consec = 1;
    int rank, suit,i,j;
    bool swapped=true;
    straight = false;
    flush = true;
    four = false;
    three = false;
    pairs = 0;

    /* check for flush */
    for (i = 0; i < NUM_CARDS-1; i++)
        if (hand[i][SUIT]!=hand[i+1][SUIT])
            flush = false;

    /* sort array elements */
    for(i=0;i<NUM_CARDS-1 && swapped==true;i++)
    {
        swapped=false;
        for(j=0;j<NUM_CARDS-i-1;j++)
        {
            if(hand[j][RANK]>hand[j+1][RANK])
            {
                swap_hand_array_elements(j,j+1);
                swapped=true;
            }
        }
    }
    /* check for straight */
    rank = 0;
    while(rank<NUM_CARDS-1)
    {
        if(hand[rank+1][RANK]==hand[rank][RANK]+1)
            num_consec++;
        rank++;
    }
    if(num_consec==NUM_CARDS)
        straight=true;

    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    num_consec=1;
    for(i=0;i<NUM_CARDS-1;i++)
    {
        if(hand[i][RANK]==hand[i+1][RANK])
        {
            num_consec++;
        }
        else if(num_consec==4)
        {
            four=true;
            num_consec=1;
        }
        else if(num_consec==3)
        {
            three=true;
            num_consec=1;
        }
        else if(num_consec==2)
        {
            pairs++;
            num_consec=1;
            
        }
    }
    if(num_consec==4)four=true;
    else if(num_consec==3)three=true;
    else if(num_consec==2)pairs++;
    
}

/**********************************************************
 * print_result: Prints the classification of the hand,   *
 *               based on the values of the external      *
 *               variables straight, flush, four, three,  *
 *               and pairs.                               *
 **********************************************************/
void print_result(void)
{
    if (straight && flush)        printf("Straight flush");
    else if (four)                printf("Four of a kind");
    else if (three && pairs == 1) printf("Full house");
    else if (flush)               printf("Flush");
    else if (straight)            printf("Straight");
    else if (three)               printf("Three of a kind");
    else if (pairs == 2)          printf("Two pairs");
    else if (pairs == 1)          printf("Pair");
    else                          printf("High card");

    printf("\n\n");
}

/******************************************************************************************************
 *                                                                                                    *
 *                                                                                                    *
 *     find_duplicates:Function that returns true if it finds two equal elements inside hand array    *
 *                     and false if there are no equal elements inside hand array.                    *
 *                                                                                                    *
 *                                                                                                    *
 ******************************************************************************************************/



bool find_duplicates(int rank,int suit,int cards_read)
{
    int i;
    for(i=0;i<cards_read;i++)
    {
        if(hand[i][RANK]==rank && hand[i][SUIT]==suit)
            return true;
    }
    return false;
    
}

/************************************************************************************************
 *                                                                                              *
 *     swap_hand_array_elements: Swaps two rows in the hand array.                              *
 *                               Arguments:index of the first row and index of the second row   *
 *                                                                                              *
 ************************************************************************************************/


void swap_hand_array_elements(int index1,int index2)
{
    int temp;
    temp=hand[index1][RANK];
    hand[index1][RANK]=hand[index2][RANK];
    hand[index2][RANK]=temp;
    temp=hand[index1][SUIT];
    hand[index1][SUIT]=hand[index2][SUIT];
    hand[index2][SUIT]=temp;
}
