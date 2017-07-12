#include <stdio.h>

/* count characters in input: 2st version*/
main()
{
    long nc;
    
    nc = 0;
    while (getchar() != EOF) {
        ++nc;
        printf("%ld\n", nc);
    }
    
}