#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
void main()
{
    int num;
    scanf("%d",&num);
    int a=sqrt(num);
    //printf("%d",a);
    int b =a%2;
    if(b==0)
    {
        printf("yes");
    }
    else
    {
         printf("no");
    }
}
