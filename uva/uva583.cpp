/* Tariq ahmed khan - Daffodil */

#include <bits/stdc++.h>



#define pi 2*acos(0.0)
#define scan(x) scanf("%d",&x)
#define sf scanf
#define pf printf
#define pb push_back
#define memoclr(n,x) memset(n,x,sizeof(n) )
#define INF 1 << 30
#define foo(i,j,k) for(int (x)=(i);(x)<(j);(x)+=(k))
#define ffoo(i,j,k) for(int (x)=(i);(x)<=(j);(x)+=(k))


typedef long long LLI;
typedef unsigned long long LLU;

template<class T> T gcd(T x, T y){if (y==0) return x; return gcd(y,x%y);}
template<class T> T lcm(T x, T y){return ((x/gcd(x,y))*y);}
template<class T> T maxt(T x, T y){if (x > y) return x; else return y;}
template<class T> T mint(T x, T y){if (x < y) return x; else return y;}
template<class T> T power(T x, T y){T res=1,a = x; while(y){if(y&1){res*=a;}a*=a;y>>=1;}return res;}
template<class T> T bigmod(T x,T y,T mod){T res=1,a=x; while(y){if(y&1){res=(res*a)%mod;}a=((a%mod)*(a%mod))%mod;y>>=1;}return res;}


int dir[8][2]={{-1,0}
              ,{1,0}
              ,{0,-1}
              ,{0,1}
              ,{-1,-1}
              ,{-1,1}
              ,{1,-1}
              ,{1,1}};


using namespace std;

vector<int > prime;
vector<int > lists;

bool chk(int num) {
	if(num<=1)
		return false;
	if(num==2)
		return true;
	if(num%2==0)
		return false;
	int sRoot = sqrt(num*1.0);
	for(int i=3; i<=sRoot; i+=2){
		if(num%i==0)
			return false;
	}
	return true;
}

void prime_gen(){
    for(int i=2 ; i < 47000 ; i++ ) // change with needed limit
    {
        if( chk(i) )
            prime.pb(i) ;
    }
}

void primeFac( int n ) {
    lists.clear();
    int sqrtN = int( sqrt(n*1.0) );
    for( int i = 0; prime[i] <= sqrtN; i++ ) {
        if( n % prime[i] == 0 ) {

            while( n % prime[i] == 0 ) {
                n /= prime[i];
                lists.push_back(prime[i]);  // to make list with prime repetation
            }
	// lists.push_back(prime[i]);
	  //	( use to list prime factors only no repetation )
        }
    }

    if( n > 1 ) {
        lists.push_back(n);
    }
}


int main() {
    prime.clear(); lists.clear();
    prime_gen();
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif
    int n,f;
    while(1){
        scan(n); f=0;
        if(n == 0) break;
        if(n < 0){
            f = 1;
        }
        n = abs(n);
        primeFac(n);
        int l = lists.size();
        if(f == 1) pf("-");
        pf("%d = ",n);

        int i;
        if(f == 1){
                pf("-1"); i=0;
        }
        else{
            pf("%d",lists[0]); i=1;
        }
        for( ; i<l ; i++){
            pf(" x %d",lists[i]);
        }
        pf("\n");
    }

    return 0;
}
