#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t, l=0;
    double ox,oy, bx, by,ax,ay, s, r, a,b,c,d, angle;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&ox,&oy,&ax,&ay,&bx,&by );

        b = sqrt ((ox-ax)*(ox-ax) +(oy-ay)*(oy-ay)) ;
        a = sqrt ((ox-bx)*(ox-bx) + (oy-by)*(oy-by) );
        c = sqrt ((ax-bx)*(ax-bx) + (ay-by)*(ay-by) );

        d = (b*b + a*a - c*c) /( 2*b*a );

        angle = acos(d) ;

        s = b*angle ;


       printf("Case %d: %lf\n", ++l, s);
    }


return 0;
}
