//https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=38)
        {
            int tm=(arr[i]/5)+1;
            int diff=arr[i]-5*tm;

            if(diff<3)
            {
                arr[i]=5*tm;
            }
        }
    }


    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}