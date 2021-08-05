#include<stdio.h>
#include<string.h>

#define max_length 1000

int main()
{
   char str[max_length];

   scanf("%[^\n]s",str);

   int arr[10];
   for(int i= 0;i<=9;i++)
   {
      arr[i]=0; // assigning all the elements as 0
   }

   // counting the values of string 
 
   for(int i=0; i<strlen(str);i++)
   {   
      if(str[i] >= '0' && str[i]<='9')
    {

      arr[(int)(str[i] - '0')]++; // main thing it changes array count value 
    }
      
   }

   for(int i=0;i<=9;i++)
   {
      printf("%d",arr[i]);
   }

   return 0;
}