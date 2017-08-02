#include <stdio.h>

/* bitcount: count 1 bit in x */
int bitcount(unsigned x) 
{
   int count;
   
   for (count = 0; x != 0; x >>= 1) {
       if (x & 01)
            count++;
       
   }
   return count; 
}

int main()
{ 
   for (int i = 0; i < 32; i++) {
       printf("bitcount(%i): %i\n", i, bitcount(i));
   }
}