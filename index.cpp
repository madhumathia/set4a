#include <iostream>
using namespace std;
int main()
{
    int a[5],n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<a[i]<<"\t"<<i<<"\n";
    }
    return 0;
}

