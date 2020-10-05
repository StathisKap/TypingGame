/* Made by StathisKap
* Version 1.0
* TypingSpeedGame - generates a sentence, you type it, and it times you.
*Date Created: 2/10/2020 
*/

#include "Generate_Sentence.h"
#include "Measure_Typing_Speed.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void main()
{
    int SentenceLength,SentenceAmount;
    float Word_Count;
    float * Word_Count_ptr;
    Word_Count_ptr =&Word_Count;
    printf("How long do you want your sentences to be?\n");
    scanf("%d",&SentenceLength);
    char str[SentenceLength];
    strcpy(str,Generate_Sentence(SentenceLength,Word_Count_ptr));
    Measure_Typing_Speed(str,SentenceLength,Word_Count_ptr);
}