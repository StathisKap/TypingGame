/* Made by StathisKap
* Version 1.0
* TypingSpeedGame - generates a sentence, you type it, and it times you.
*Date Created: 2/10/2020 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int Measure_Typing_Speed(char Sentence[],int SentenceLength)
{
    char UserSentence[SentenceLength];
    int time;
    printf("Start typing this Sentence as fast as you can:\n\n %s\n",Sentence);
    getch();
    clock_t begin = clock();
    scanf("%s",UserSentence);
    clock_t end = clock();
    time = (int)(end-begin)/CLOCKS_PER_SEC;
    Find_Faults(Sentence,UserSentence,SentenceLength);
    printf("it took you, %d seconds",time);
    return time;
}
void Find_Faults(char Sentence[], char UserSentence[],int SentenceLength)
{
    char Faults[SentenceLength];
    if(strcmp(Sentence, UserSentence)==0)
        printf( "You did all of them right!!");
    else
    {
        for(int i = 0 ; i<SentenceLength;i++)
        {
            if(Sentence[i]!=UserSentence[i]){
                strcat(Faults,Sentence[i]);
            }
        }
        printf("Your mistakes were:\n");
        for(int j = 0 ; j<strlen(Faults);j++){
            printf("%c, ",Faults[j]);
        }
    }
    
}
void main()
{
    int SentenceLength,SentenceAmount;
    printf("How long do you want your sentences to be?\n");
    scanf("%d",&SentenceLength);
    char str[SentenceLength];

	strcpy(str,Generate_Sentence(SentenceLength));
    
    Measure_Typing_Speed(str,SentenceLength);
}