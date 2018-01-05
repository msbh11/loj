#include<bits/stdc++.h>
using namespace std;
 
int binaryToDecimal(int n)
{
    int rem, i=1, bin =0;
     while( n!=0)
     {
         rem = n%2;
         n  = n/2;
         bin = bin + rem *i;
         i=i*10;
     }
    return bin;
}
int main()
{
    int  a[4] , t, c,d,e,f;
    int  b[4];
   
    scanf("%d",&t) ;
    for(int i=1; i<=t; i++){
       
    scanf("%d.%d.%d.%d", &a[0], &a[1], &a[2], &a[3]);
    scanf("%d.%d.%d.%d", &b[0], &b[1], &b[2], &b[3]);
    c = binaryToDecimal(a[0]);
    d = binaryToDecimal(a[1]);
    e = binaryToDecimal(a[2]);
    f = binaryToDecimal(a[3]);
   
    
   
   
 
    if( (c==b[0]) && (d==b[1]) && (e==b[2]) && (f==b[3]) )
    {
        printf("Case %d: Yes\n", i);
    }
    else{
         printf("Case %d: No\n", i);
    }
   
    }
    return 0;
}
