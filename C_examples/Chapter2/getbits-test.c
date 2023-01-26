#include <stdio.h>
  
/* getbits: get n bits from position p */
unsigned int getbits(unsigned int x, int p, int n)
{
        return ((x >> (p+1-n)) & ~(~0 << n));
}

int main()
{
    printf("0x%.8x\n", getbits(0x40c585b3, 24, 5));

}
