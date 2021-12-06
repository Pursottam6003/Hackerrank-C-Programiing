//https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=false\

#include <stdio.h>

int main()
{
    size_t s,t,a,b,m,n;

    scanf("%zu",&s);
    getchar();
    scanf("%zu",&t);

    scanf("%zu",&a);
    getchar();

    scanf("%zu",&b);
    getchar();

    scanf("%zu",&m);
    getchar();
    scanf("%zu",&n);
    size_t arr1[m];
    size_t arr2[n];

    // now for the input from the user
    int ct_a=0;
    int ct_o=0;

    for(size_t i=0;i<m;i++)
    {
        scanf("%zu",&arr1[i]);

        if((arr1[i]+a>=s) && (arr1[i]+a<=t))
        {
            ct_a++;
        }
    }

    for(size_t j=0;j<n;j++)
    {
        scanf("%zu",&arr2[j]);
        if(((arr2[j]+b)>=s) &&  ((arr2[j]+b)<=t))
        {
            ct_o++;
        }
    }
    
    printf("%d\n",ct_a);
    printf("%d\n",ct_o);

}