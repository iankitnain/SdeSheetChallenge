#include <bits/stdc++.h> 
long long int modularExponentiation(long long int x,long long int n, int m) {
    x=x%m;
    if(n==0 || x==1)
        return 1%m;
    if(n==1)
        return x%m ;
    if(n&1)
        return ((modularExponentiation(x*x,n/2,m)%m)*(x%m))%m ;
    else
        return (modularExponentiation(x*x,n/2,m)%m);
	// Write your code here.
}
