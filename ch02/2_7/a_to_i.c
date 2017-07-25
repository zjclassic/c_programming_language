#include <stdio.h>

/* a_to_i: convert s to integer  */
int a_to_i(char s[])
{
    int i, n;
    
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) 
         n = 10 * n + (s[i] - '0');
    return n;
}

main()
{ 
    char s[] = "12398";
    printf("string s is: %s\n", s);
    printf("convert s to integer: %i\n", a_to_i(s));
}