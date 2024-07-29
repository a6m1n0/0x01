/*
Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

* You can only use the putchar function (every other function (printf, puts, etcā€¦) is forbidden)
* All your code should be in the main function
* You can only use putchar three times in your code
*/
#include <stdio.h>
#include <unistd.h>
int main()
{
    char new_line='\n';
    for(int hex_num = 0; hex_num <= 9;hex_num++)
    {
        putchar(hex_num + '0');
        
    }
     for(char hex_ch = 'a'; hex_ch <= 'f';hex_ch++)
    {
        putchar(hex_ch);
        
    }
    putchar('\n');
    return 0;
