/*
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

* You can only use the putchar function (every other function (printf, puts, etcā€¦) is forbidden)
* All your code should be in the main function
* You can only use putchar three times in your code
*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	
    for(char alphabet ='a';alphabet<='z';alphabet++)
    {
        putchar(alphabet);
        
    }
    for(char alphabet ='A';alphabet<='Z';alphabet++)
    {
        putchar(alphabet);
        
    }
    putchar('\n');
	return (0);
}
