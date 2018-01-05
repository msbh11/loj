   #include<bits/stdc++.h>
    using namespace std;
     
     
    int main()
    {
        int t, cs=1;
        double ab,bc,ac,r;
       scanf("%d\n",&t);
        while(t--){
         scanf("%lf%lf%lf%lf",&ab,&ac,&bc,&r);
         
        double  rat = (r/(r+1)) ;
        double s =((ab+bc+ac)/2)
        ;
        double area_ade = sqrt(s*(s-ab)*(s-bc)*(s-ac)) ;
       
        double p=ac/ab;
        double q=bc/ab;
       
        double area1 = (area_ade*rat)*4;
         
         double z = sqrt ( (p+q+1)*(p+q-1)*(p+1-q)*(q+1-p) );  
       
            printf("Case %d: %.10lf\n",cs++,sqrt(area1 /z));
    }
    return 0;
    }
