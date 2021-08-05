#include <stdio.h>


int main()
{
   int size; //declering an number
   scanf("%d\n",&size);
   
   int arr[size]; //declearing an arrau of size 
   
   for(int i=0;i<size;i++)
   {
       scanf("%d\n",&arr[i]);
       
   }
   
   // printing the array in reversal order 
   
   for(int i=0;i<size;i++)
   {
       printf("%d ",arr[size-i-1]);
   }

   
   return 0;


} 
    
