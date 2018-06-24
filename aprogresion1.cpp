#include <iostream>
using namespace std;
int main()
{
    int N,A,D,i,sum=0;
    cin>>N>>A>>D;
    for(i=N;i>1;i--)
    {
        sum=sum+(A+(N-1)*D);
    }
    cout<<sum;
    return 0;
}
