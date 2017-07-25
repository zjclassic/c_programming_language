#include <stdio.h>

/* strlen_: return length of s */
int strlen_(char s[])
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}
main()
{ 
    printf("strlen_ of hello is %i\n", strlen_("hello"));
}