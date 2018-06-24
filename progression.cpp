#include <iostream.h>
#include <conio.h>
using namspace std;
{
    int N,A,D,i,sum=0;
    cin>>N>>A>>D;
    for(i=1;i<=N;i++)
    {
      sum=sum+(A+(N-1)*D);
    }
    cout<<sum;
 }
