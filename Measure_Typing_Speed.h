#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int Measure_Typing_Speed(char Sentence[],int SentenceLength,float * Words_Count)
{
    char UserSentence[SentenceLength];
    int time;
    printf("Start typing this Sentence as fast as you can:\n\n %s\n",Sentence);
    getchar();
    clock_t begin = clock();
    scanf("%s",UserSentence);
    clock_t end = clock();
    time = (int)(end-begin)/CLOCKS_PER_SEC;
    //Find_Faults(Sentence,UserSentence,SentenceLength);
    printf("it took you, %d seconds\nWPM: %f",time,(*Words_Count*60)/time);
    return time;
}