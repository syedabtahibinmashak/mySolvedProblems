#include<stdio.h>
#include<string.h>

int size(char s[51])
{
    if(strcmp(s,"M")==0) return 0;
    else
    {
        int ans=strlen(s);
        char last=s[ans-1];
        if(last=='S') ans*=-1;
        return ans;
    }
}

int main()
{
    int t; scanf("%d",&t);
    for(int f=0; f<t; f++)
    {
        char a[51],b[51]; scanf("%s %s",&a,&b);
        int as=size(a),bs=size(b);
        if(as>bs) printf(">\n");
        else if (as<bs) printf("<\n");
        else printf("=\n");
    }
    return 0;
}
