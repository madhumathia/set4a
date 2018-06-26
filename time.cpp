#include<iostream>
using namespace std;
int main()
{
    int min;
    cin>>min;
    int hr=min/60;
    int minutes =min%60;
    cout<<hr<<"\thour\t"<<minutes<<"\tminutes";
    return 0;
}
