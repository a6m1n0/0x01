/*
Write a program that prints the lowercase alphabet in reverse, followed by a new line.

* You can only use the putchar function (every other function (printf, puts, etcā€¦) is forbidden)
* All your code should be in the main function
* You can only use putchar twice in your code
*/
#include <stdio.h>
#include <string.h>  

int main()
{
    char alphabet;
    for(char alphabet='z'; alphabet>='a';alphabet--)
    {
        putchar(alphabet);    
        
    }
    putchar('\n');
    return 0;
}
