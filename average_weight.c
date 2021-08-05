#include<stdio.h>

int main()
{   
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    
    float arr[n]; // creating an array of desired size 1000 //
    
    //getting the numbers //
    for(int i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    } 
    
    float sum=0.0;
    
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    } 
    
    printf(" The sim of %d elements is %f\n",n,sum);

    float average;
    average= sum/n;

    printf("And their average is %f\n",average);   
     
    return 0;
}