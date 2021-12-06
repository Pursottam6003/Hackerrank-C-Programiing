#include <stdio.h>

typedef long long int lli;

int main()
{
    lli n;
    scanf("%zu",&n);

    lli arr[n];
    lli sum=0;

    for(lli i=0;i<n;i++)
    {
        scanf("%zu",&arr[i]);
        sum=sum+arr[i];
    }

    printf("%zu",sum);
}