#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t, a1,a2,b1,b2,c1,c2,d1,d2, area1, area2 ;
    cin>>t;
    for(int i=1; i<=t; i++){
	cin >> a1>>a2>>b1>>b2>>c1>>c2;
	
	d1 = a1 + c1 - b1;
	d2 = a2 + c2 - b2 ;
	     //area1 = abs(a1*(b2-c2)+ b1*(c2-a2)+ c1*(a2-b2) );
	    
    area1 = abs((a1*b2 + b1*c2 + c1*d2 +d1*a2 )-( a2*b1 + b2*c1 + c2*d1 + d2*a1 ))*.5;
    
    printf("Case %d: %d %d %d\n", i,d1, d2, area1 );    
    }	
	return 0;
}
