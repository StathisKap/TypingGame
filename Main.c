#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* GenerateSentence(int SentenceLength)
{
    srand(time(0));
    //@ignore
    char Sentence[SentenceLength];
    char Alphabet[] = {"abcdefghijklmnopqrstuvwxyz"};
    int total = 0,space = 0;
    while(total<SentenceLength-2)
    {
        int WordLength = 2 + rand() %8;
        char Word[11];
        int i;
        for(i =0;i<WordLength;i++)
        {
            int Letter = rand() %26;
            Word[i]=Alphabet[Letter];
            Word[WordLength]=NULL;
        }
        total += ++space + WordLength;
        strcat(Sentence-1, Word);
        strcat(Sentence, " ");
        Sentence[SentenceLength]=NULL;
    }
    return Sentence;
}
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
        for(int i = 0 ; i<strlen(Faults);i++){
            printf("%c, ",Faults[i]);
        }
    }
    
}
void main()
{
    int SentenceLength,SentenceAmount;
    printf("How long do you want your sentences to be?\n");
    scanf("%d",&SentenceLength);
    char str[SentenceLength];

	strcpy(str,GenerateSentence(SentenceLength));
    
    Measure_Typing_Speed(str,SentenceLength);
}