#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,a;
        scanf("%d%d",&x,&y);
        if(x>y)
        {
            a=x-y;
            printf("%d\n",a);
        }
        else
        printf("0\n");
    }
}
