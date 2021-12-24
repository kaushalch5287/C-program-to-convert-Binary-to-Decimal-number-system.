/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#define BASE 2
int main()
{
 long long binary, decimal=0, tempBinary;
 int N=0;
 printf("Enter any binary number: ");
 scanf("%lld", &binary);
 tempBinary = binary;
 while(tempBinary!=0)
 {
 if(tempBinary % 10 == 1)
 {
 decimal += pow(BASE, N);
 }
 N++;
 tempBinary /= 10;
 }
 printf("Binary number = %lld\n", binary);
 printf("Decimal number= %lld", decimal);
 return 0;
}
