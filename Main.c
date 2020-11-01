/* Made by StathisKap
* Version 1.0
* TypingSpeedGame - generates a sentence, you type it, and it times you.
*Date Created: 2/10/2020 
*/

#include "Generate_Sentence.h"
#include "Measure_Typing_Speed.h"
#include "Find_Faults.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int SentenceLength;
    char Length[4];
    float Word_Count;
    printf("How long do you want your sentences to be?\n");
    fgets(Length,3,stdin);
    SentenceLength = atoi(Length);
    char *str = malloc(SentenceLength);
    strcpy(str,Generate_Sentence(SentenceLength,&Word_Count));
    Measure_Typing_Speed(str,SentenceLength,&Word_Count);
    return 0;
}