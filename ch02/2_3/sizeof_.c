#include <stdio.h>

/* strlen_: return sizeof s */
int sizeof_(char s[])
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return ++i;
}
main()
{ 
    printf("sizeof_ of hello is %i\n", sizeof_("hello"));
}