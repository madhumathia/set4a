#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[10],str2[10];
    int i;
    scanf("%s%s",&str1,&str2);
   int a=strlen(str1);
   int b=strlen(str2);
    if(a>b)
    {
        printf("greater String = %s",str1);
    }
    else if(a==b)
    {
        printf("greater String = %s",str2);
    }else
    {
        printf("greater String = %s",str2);
    }
}
