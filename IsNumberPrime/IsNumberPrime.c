// IsNumberPrime.c : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    unsigned long ulNumber;
    unsigned int nDividers = 0;
    printf("Input an integer positive number\r\n");
    scanf("%lu", &ulNumber);
    printf("The number %lu has the following divisors:\r\n", ulNumber);
    for (unsigned long i = 1; i <= ulNumber; i++)
    {
        if (ulNumber % i == 0)
        {
            printf("%lu ", i);
            nDividers++;
        }
    }
    printf("\r\n");
    switch (nDividers)
    {
    case 0:
    case 1:
        printf("The number %lu is neither composite nor prime\r\n", ulNumber);
        break;
    case 2:
        printf("The number %lu is prime\r\n", ulNumber);
        break;
    default:
        printf("The number %lu is composite\r\n", ulNumber);
        break;
    }
    getchar();
    getc(stdin);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
