#include <stdio.h>
#include<ctype.h>

int main() 
{
    int c,prev='\0';
    printf("Enter the text:");
    while ((c = getchar()) != EOF) 
	{
        if (!(isspace(c) && isspace(prev))&& c != '\n' && c != '\t') 
		{
            putchar(c);
        }
        prev = c;
    }
}
