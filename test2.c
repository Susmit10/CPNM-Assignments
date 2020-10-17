#include <stdio.h>
void sub(unsigned char k)
 {
   unsigned char i=5;
   if(i>k)
      printf("%d,", (i-k));
   else
      printf("%d,", (k-i));
 }
 void main()
 {
     sub(10);
     sub(4);
     sub(0);
     sub(5);
 }
