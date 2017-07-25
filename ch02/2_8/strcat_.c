#include <stdio.h>

/* strcat_:  */
void strcat_(char s[], char t[])
{
    int i, j;
    i = j = 0;
    
    while (s[i] != '\0')
        i++;                /* find end of s */
    while ((s[i++] = t[j++]) != '\0')       /* copy t */
        ;
}
main()
{ 
    char s[] = "12345";
    char t[] = "6789";
    strcat_(s, t);
    printf("char s[]: %s", s);
}