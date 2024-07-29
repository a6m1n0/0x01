/*
Write a program that prints all possible combinations of single-digit numbers.

* Numbers must be separated by ,, followed by a space
* Numbers should be printed in ascending order
* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar four times maximum in your code
* You are not allowed to use any variable of type char
*/
#include <stdio.h>

int main()
{
    for(int digit_num = 0;digit_num <=9 ;digit_num++)
    {
        putchar(digit_num + '0');
        if (digit_num !=9)
        {
            putchar(',');
            
        }
        putchar(' ');
    }
    
    return 0;
}
