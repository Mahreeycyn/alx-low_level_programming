#include "main.h"
/**
 * flip_bits - counts the number of bits to be changed
 * in order to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to be changed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int f, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (f = 63; f >= 0; f--;
{
current = exclusive >> i;
if (current & 1)
count++;
}
return (count);
}
