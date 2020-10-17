
#include <stdio.h>
 void main()
 {
    unsigned char i, j=0;
    for(i=0; i<=10; i++)
    {
       if((i%3)!=0)
       {
           printf("%d,",i);
           j++;
       }
    }
    printf("\n");
    printf("%d \n", j);
  }
