#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(i+j==n)
            c++;
        }
    }
    printf("%d\n",c);
}
