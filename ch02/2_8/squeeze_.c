#include <stdio.h>

/* squeeze: delete all c from s */
void squeeze(char s[], int c) 
{
    int i, j;
    
    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
            s[j++] = s[i];
    }
    s[j] = '\0';
}

int main()
{ 
    char s[] = "english is the most popular language in the world!";
    int c = 'l';
    printf("char s[] is: %s\n", s);
    squeeze(s, c);
    printf("after squeeze char s[] is: %s\n", s);
}