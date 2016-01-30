#include <stdio.h>
#include <stdlib.h>
char  *kr;             /* tek bir karakter için */
int   *x;              /* bir tamsayý için */
float *deger, sonuc;   /* deger gösterici tipinde, sonuc sýradan bir gerçel deðiþkenler */

int main()
{
int *pnumber, number = 33;
pnumber = &number;

printf("number:   content = %d\n", number);
printf("number:   adress = %p\n",&number);
printf("pnumber:  adress = %p\n",pnumber);

printf("----second example -----\n");

   int *ptam, tam = 33;

   ptam = &tam;    /* ptam -> tam */

   printf("&tam  = %p\n",&tam);
   printf("ptam  = %p\n",ptam);
   printf("\n");

   printf("tam   = %d\n",tam);
   printf("*ptam = %d\n",*ptam);
   printf("\n");

   *ptam = 44;     /* tam = 44 anlamında */

   printf("tam   = %d\n",tam);
   printf("*ptam = %d\n",*ptam);

return 0;
}
