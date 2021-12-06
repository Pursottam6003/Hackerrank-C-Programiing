#include <stdio.h>
void absolute(int a ,int b);

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];

    int diag_s1=0;
    int diag_s2=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j)
            {
                diag_s1=diag_s1+arr[i][j];
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        int j=n-i;
        diag_s2=diag_s2+arr[i][j-1];
    }

     
    absolute(diag_s1,diag_s2);

}

void absolute(int a ,int b)
{   
    int value= a-b;
    
    
    if( value < 0)
    {
        printf("%d",-value);
    }

    else 
    {
        printf("%d",value);
    }
    
    
}
