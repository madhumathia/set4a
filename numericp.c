#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(isdigit(a))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
