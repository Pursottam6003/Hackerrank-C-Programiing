//https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;

    lli arr[n];

    for(lli i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);
    lli min_s=0;
    lli max_sum=0;
    for(lli i=0;i<n-1;i++)
    {
        min_s=min_s+arr[i];
    }

    for(lli i=1;i<n;i++)
    {
        max_sum=max_sum+arr[i];
    }

    cout<<min_s<<" "<<max_sum<<endl;
}