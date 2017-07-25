#include <stdio.h>

/* strcopy_:  */
void strcopy_(char s[], char d[])
{
    int i = 0;
    while ((d[i] = s[i]) != '\0')
        i++;
    //return 0;
}
main()
{ 
    char s[] = "source string!";
    char d[] = "destination string!";
    printf("char s[]: %s\n", s);
    printf("char d[]: %s\n", d);
    printf("after call strcopy_ on char s[], char d[]: \n");
    strcopy_(s, d);
    printf("char s[]: %s\n", s);
    printf("char d[]: %s\n", d);
}