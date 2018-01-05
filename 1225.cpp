#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,x=1,j,k;
    char s[100];
    scanf("%d",&t);
    gets(s);
    for(i=1; i<=t; i++)
    {
        gets(s);
        x=1;
        int l=strlen(s);
        for(j=0,k=l-1; j<l/2; j++,k--)
        {
            if(s[j]!=s[k])
            {
 
                    x=0;
                    printf("Case %d: No\n",i);
                    break;
 
            }
        }
 
        if(x==1)
            printf("Case %d: Yes\n",i);
 
    }
    return 0;
}
