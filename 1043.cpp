    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
     int t;
     double ab,bc,ac, r, rat,p,q, ade, abc , s, s1,s2;
     scanf("%d",&t);
      for(int i=1; i<=t;i++){
      scanf("%lf%lf%lf%lf",&ab,&ac,&bc,&r);
         
      rat = 1/r ;
      s = (ab+bc+ac)/2;
      abc =  sqrt(s*(s-ab)*(s-bc)*(s-ac)) ;
     
     
      ade = abc / (rat+1)  ;
     
     
      p=ac/ab;
      q=bc/ab;
      s1= ((p + q + 1 )/2);
     
       s2 = sqrt (s1*(s1-1)*(s1-p)*(s1-q)) ;
     
    printf("Case %d: %lf\n",i, sqrt( ade/s2 ) );
    }
     
    }
