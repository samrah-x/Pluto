#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "prompts.h"

// Function for Timer
void timer (void)
{
    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j <60 ; j++)
        {
            for (int k = 0; k < 60 ; k++)
            {
                system("cls");
                printf("%02d:%02d:%02d\n", i, j, k);
                Sleep(1000);
            }
        }
    }
}

// Pomodoro
void pomodoro (void)
{
    for (int i = 50; i >= 0 ; i--)
    {
        for (int j = 59; j >= 0; j--)
        {
            system("cls");
            printf("%02d:%02d\n", i, j);
            Sleep(1000);
        }
    }
    for (int i = 10; i >= 0 ; i--)
    {
        for (int j = 59; j >= 0; j--)
        {
            system("cls");
            printf("%02d:%02d\n", i, j);
            Sleep(1000);
        }
    }
}

// Function for prompts 
void prompts (void)
{
    while (1)
    {
        system("cls");
        generatePrompt();
        Sleep(900000);    
    }
}

int main()
{
    timer ();
    prompts();
    return 0;
}
