#include <bits/stdc++.h>
using namespace std;

int main() {
    
    double  s,a,b,c,d,e, area1,h,f,g, area2 ;
    int t;
    cin>>t ;
   for(int i=1; i<=t; i++){
	cin >> a>>b>>c>>d;
	
    e = (a-c) ;
    f = ( b*b - d*d + e*e )/(e*2);
	
    h = sqrt(b*b - f*f) ;
    area1 = (a+c) * h  * .5 ;
    
    printf("Case %d: %lf\n", i,area1 );    
    }	
	return 0;
}



