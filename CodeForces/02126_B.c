#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);
    for(int f=0; f<t; f++)
    {
        int n,k; scanf("%d %d",&n,&k); int arr[n];
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
 
        int con_zero_count=0,ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1) con_zero_count=0;
            else con_zero_count++;
 
            if(con_zero_count==k)
            {
                ans++;
                con_zero_count=0;
                i++;
            }
        }
        
        printf("%d\n",ans);
    }
    return 0;
}
