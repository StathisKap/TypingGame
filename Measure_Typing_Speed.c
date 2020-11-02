#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "Measure_Typing_Speed.h"
#include "Find_Faults.h"


int Measure_Typing_Speed(char * Sentence,int SentenceLength,int* Words_Count)
{
    fflush(stdout);
    char *UserSentence = (char *)malloc(SentenceLength*sizeof(char *));
    printf("Start typing this Sentence as fast as you can:\n\n%s\n",Sentence);
    struct timeval begin, end;
    gettimeofday(&begin, 0);
    fgets(UserSentence,SentenceLength,stdin);
    gettimeofday(&end, 0);
    long seconds = end.tv_sec - begin.tv_sec;
    long microseconds = end.tv_usec - begin.tv_usec;
    double time = seconds + microseconds*1e-6;
    Find_Faults(SentenceLength,Sentence,UserSentence);
    printf("it took you, %.1f seconds\nWPM: %.1f\n",time,(float)(*Words_Count*60)/time);
    return time;
}