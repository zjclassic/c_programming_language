#include <stdio.h>

unsigned long int next = 1;

/* rand: return on pseudo-random integer on 0...32767  */
int rand(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65536) % 32768;
}

/* srand: set seed for rand() */
void srand(unsigned int seed)
{
    next = seed;    
}

int main()
{ 
    int i, j;
    for (i = 0; i < 10; i++) {
        printf("set seed = %i for rand()\n", i);
        srand(i);
        for (j = 0; j < 10; j++) {
            printf("seed = %i：pseudo-random integer is: %i\n", i, rand());
        }
        printf("\n");
        return 0;
    }
}