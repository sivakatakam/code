#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
