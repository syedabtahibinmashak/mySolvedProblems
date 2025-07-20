#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);
    for(int f=0; f<t; f++)
    {
        int n,min=9; scanf("%d",&n);
        while(n!=0)
        {
            if(n%10<min) min=n%10;
            n/=10;
        }
        printf("%d\n",min);
    }
    return 0;
}
