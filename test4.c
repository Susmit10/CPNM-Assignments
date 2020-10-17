#include <stdio.h>
 void sub(unsigned char j);
 void main()
 {
   unsigned char i;
   for(i=0; i<=10; i++)
   sub(i);
   printf("\n");
 }
 void sub(unsigned char j)
 {
   unsigned char i;
   i=j*j;
   printf("%d,", i);
 }
