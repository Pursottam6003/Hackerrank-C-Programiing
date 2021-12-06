//https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    
    float ct_p=0;
    float ct_n=0;
    float ct_z=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0)
        {
            ct_n++;
        }
        
        else if(arr[i]==0)
        {
            ct_z++;
        }
        
        else  
        {
            ct_p++;
        }
    }
    
    float a=ct_p/n;
    float b=ct_n/n;
    float c=ct_z/n;
    
    printf("%f\n",a);
    printf("%f\n",b);
    printf("%f\n",c);
    
    
}