#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);
    for(int f=0; f<t; f++)
    {
        int l,r,d,u; 
        scanf("%d %d %d %d",&l,&r,&d,&u);
        if ((l==r)&&(r==d)&&(d==u))
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
