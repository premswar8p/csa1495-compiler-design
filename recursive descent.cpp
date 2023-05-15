#include<stdio.h>
int c=0;
char p[20];
void s();
void l();
void lprime();
	int main()
	{
		printf("implementation of recursive descent");
		printf("\n enter the expresion");
		scanf("%s",p);
		s();
		if(p[c]=='$')
		printf("\n the string is accepted");
		else
		printf("string is not accepted");
	}
	void s()
	{
		if(p[c]=='a')
		c++;
		else if(p[c]=='(')
		{
			c++;
			l();
			if(p[c]==')')
			c++;
			else
			c--;
		}
		else{
		printf("invalid expression");
	}
}
	void l()
	{
		s();
		lprime();
	}
	void lprime()
	{
		if(p[c]==',')
		{
			c++;
			s();
			lprime();
		}
	}
