/*
Write a program that prints the alphabet in lowercase, followed by a new line.

* Print all the letters except q and e
* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar twice in your code
*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	char new_line = '\n';
    for(char alphabet ='a';alphabet<='z';alphabet++)
    {
        if (alphabet == 'q' || alphabet == 'e')
           continue;
        putchar(alphabet);
        
    }
    putchar(new_line);
	return (0);
}
