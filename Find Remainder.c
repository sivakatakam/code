#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,r;
        scanf("%d%d",&a,&b);
        r=a%b;
        printf("%d\n",r);
    }
}
