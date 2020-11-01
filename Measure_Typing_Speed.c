#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Measure_Typing_Speed.h"
#include "Find_Faults.h"


int Measure_Typing_Speed(char Sentence[],int SentenceLength,float * Words_Count)
{
    char *UserSentence = malloc(SentenceLength);
    int time;
    printf("Start typing this Sentence as fast as you can:\n\n %s\n",Sentence);
    getchar();
    clock_t begin = clock();
    scanf("%s",UserSentence);
    clock_t end = clock();
    time = (int)(end-begin)/CLOCKS_PER_SEC;
    Find_Faults(SentenceLength,Sentence,UserSentence);
    printf("it took you, %d seconds\nWPM: %.1f",time,(*Words_Count*60)/time);
    return time;
}