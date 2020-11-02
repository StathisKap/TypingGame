#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Generate_Sentence.h"



char* Generate_Sentence(int SentenceLength, int* Word_Count)
{
    srand(time(0));
    char *Sentence = malloc(SentenceLength);
    char Alphabet[] = {"abcdefghijklmnopqrstuvwxyz"};
    int total = 0,space = 0;
    
    do
    {
        int WordLength = 2 + rand() %8;
        char Word[11];
        int i;
        for(i =0;i<WordLength;i++)
        {
            int Letter = rand() %26;
            Word[i]=Alphabet[Letter];
            Word[WordLength]='\0';
        }
        if(strlen(Sentence))
            strcat(Sentence, Word);
        else
            strcpy(Sentence, Word); 
        ++*Word_Count;
        total += ++space + WordLength;
        strcat(Sentence, " ");
        Sentence[SentenceLength]='\0';
    } while(total<SentenceLength-10);

    return Sentence;
}