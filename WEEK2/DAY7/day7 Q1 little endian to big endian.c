// Online C compiler to run C program online
/*
LITTLE ENDEN TO BIG ENDEN ALGORITHM

*/
STEP 1:
1.checking whether the system fallows little or big endian
2.converting nibble ordering 
3.print resultafter converting
#include <stdio.h>

int main() {
    // Write C code here
   char num=1;
   printf("enter a number:\n");
   scanf("%d",&num);
   char *ptr=&num;
   if(*ptr==num){
   printf("LITTILE ENDIAN\n");
    printf("%d\n",(num>>4|num<<4));
   }
   printf("we can't convert CPU byte order from littile endian to big endian");
    return 0;
}
