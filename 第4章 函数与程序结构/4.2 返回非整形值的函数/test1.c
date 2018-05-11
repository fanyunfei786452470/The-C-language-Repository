#include <stdio.h>
#include <ctype.h>

#define MAXLINE 100

/* getLine: get line into s, return length */
int getLine(char s[], int lim)
{
	int c, i;
	i = 0;
	while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
	{
		s[i++] = c;
	}
	if (c == '\n')
	{
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}

/* rudimentary calculator */
int main(int argc, char const *argv[])
{
	double sum, atof(char []);
	char line[MAXLINE];
	int getLine(char line[], int max);

	sum = 0;
	while(getLine(line, MAXLINE)){
		printf("\t%g\n", sum += atof(line));
	}
	return 0;
}