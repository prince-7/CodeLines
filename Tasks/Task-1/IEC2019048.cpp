#include <bits/stdc++.h>
using namespace std;

int mex=100000001;
long long int arr[100000001]={0};

int main()
{
    int l,r;
   
    cin>>l>>r;
   
    int cnt=0;
   
    arr[0]=1;
   
    arr[1]=1;
   
    for(int i=2;i*i<=r;i++)
    {
        if(arr[i]==0)
            for(int j=2;i*j<=r;j++)
                arr[i*j]=1;
    }
   
    for(int i=l;i<=r;i++)
    {
        if(arr[i]==0) cnt++;
    }
   
    cout<<cnt<<endl;
}