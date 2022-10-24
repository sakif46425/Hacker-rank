#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,d,i;

    cin>> n >> d;
    int start = n-d;
    int *arr = new int[n];
    for(i=0;i<n;++i)
    {
        if(start == n)start = 0;
        cin>> arr[start++];

    }
    for(i=0; i<n; ++i)
        cout<< arr[i] <<" ";
    return 0;
}
