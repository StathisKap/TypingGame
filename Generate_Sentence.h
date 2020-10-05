#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



char* Generate_Sentence(int SentenceLength)
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