#include <stdio.h>
#define MAXLINE 1000 /*maximuminputlinelength*/
int max;
char longest[1000];
char line[1000];
int getLine(void);
void copy(void);

/* print longest input line; specialized version */ 
 int main()
{
    int len;
    max = 0;
    while ((len = getLine()) > 0)
    {
    	if (len > max) 
    	{ 
    	    max = len;
            copy(); 
        }
    }
    if(max > 0) /*therewasaline*/
    {
       printf("%s", longest);
    }
    
    return 0; 
}

/* getline: specialized version */ 
int getLine(void)
{
    int c, i;
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
    	line[i] = c;
    } 
    if (c == '\n') 
    {
        line[i] = c;
         ++i; 
    }
    line[i] = '\0';
    return i;
}

/* copy: specialized version */ 
void copy(void)
{
    int i;
    i = 0;
    while ((longest[i] = line[i]) != '\0')
    {
    	++i;
    }
}
