#include<bits/stdc++.h>
using namespace std;
main()
{
    double a,b,c,r,sum,r1;
    int t,cnt=0;
    cin>>t;
    while(t--){
        cnt++;
        cin>>a>>b>>c>>r;
        r1=r+1;
        sum = sqrt(r/r1) * a;
        printf("Case %d: %.10lf\n",cnt,sum);
         }
    return 0;
    
}