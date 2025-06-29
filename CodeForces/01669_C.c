#include<stdio.h>
#include<stdbool.h>

int main()
{
    int t; scanf("%d",&t);
    for(int f=0; f<t; f++)
    {
        int n; scanf("%d",&n); int arr[n];
        for(int i=0; i<n; i++) scanf("%d",&arr[i]);
        bool ans = true;

        if(arr[0]%2==0) 
        {
            for(int i=2; i<n; i+=2)
            {
                if(arr[i]%2!=0) 
                {
                    ans = false;
                    break;
                }
            }
        }
        else
        {
            for(int i=2; i<n; i+=2)
            {
                if(arr[i]%2==0) 
                {
                    ans = false;
                    break;
                }
            }

        }
        if(ans==true)
        {
            if(arr[1]%2==0)
            {
                for(int i=3; i<n; i+=2)
                {
                    if(arr[i]%2!=0) 
                    {
                        ans = false;
                        break;
                    }
                }

            }
            else 
            {
                for(int i=3; i<n; i+=2)
                {
                    if(arr[i]%2==0) 
                    {
                        ans = false;
                        break;
                    }
                }
            }
        }

        if(ans==true) printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}
