#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void Find_Faults(int SentenceLength,char String[] ,char User_Sentence[])
{
    printf("\n");
    puts(String);
    
    for(int i = 2; i<SentenceLength;i++)
    {
        if(String[i]==User_Sentence[i])
        {
            printf("%c",User_Sentence[i]);
        }
        else 
        {
            printf("\033[1;31m");
            printf("%c",User_Sentence[i]);
            printf("\033[0m");
        }
    }
    printf("\n");
}