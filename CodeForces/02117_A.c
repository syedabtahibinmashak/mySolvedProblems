#include<stdio.h>

int main()
{
    int t; scanf("%d",&t);
    for(int f=0; f<t; f++)
    {
        int n,fc,lc,x; scanf("%d %d",&n,&x); int arr[n];
        for(int i=0; i<n; i++) scanf("%d",&arr[i]);
        
        for(int i=0; i<n; i++) 
        {
            if(arr[i]==1) 
            {
                fc=i; break;
            }
        }
        for(int i=n-1; i>-1; i--)
        {
            if(arr[i]==1)
            {
                lc=i; break;
            }
        }
        if(x<lc-fc+1) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
