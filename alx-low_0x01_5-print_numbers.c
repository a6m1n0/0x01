/*
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

* All your code should be in the main function
*/
#include <stdio.h>
int main()
{
    for(int numbers = 0;numbers <= 9; numbers++)
    {
    printf("%d",numbers);
    }
    putchar('\n');
    return 0;
