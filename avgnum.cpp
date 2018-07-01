#include<iostream>
using namespace std;
int main()
{
    int num[5],sum=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        sum=sum+num[i];
    }
    int avg=sum/n;
    cout<<avg;
    return 0;
}
