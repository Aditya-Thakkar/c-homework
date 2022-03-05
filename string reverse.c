#include<stdio.h>
#include<string.h>
 
int main()
{
   char a[40],b[40];
   int i;
   gets(a);
   for(i=0;i<strlen(a);i++)
   {
       printf("%c",a[i]);
   }
   printf("\n");
   
   int j = strlen(a) - 1;
   char temp;
    for (int i = 0; i < j; i++) 
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }
    for(i=0;i<strlen(a);i++)
   {
       printf("%c",a[i]);
   }
   return 0;
}
