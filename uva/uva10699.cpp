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

const int maxn = 1000000;
vector<int> prime,lists;
bool sieve[maxn];

void sieveOfAtkin(){
   int N = sqrt(maxn);
   memset(sieve, 0, sizeof(sieve));
   for (int x = 1; x <= N; x++){
      for (int y = 1; y <= N; y++){
         int n = (4*x*x)+(y*y);
         if (n <= maxn && (n % 12 == 1 || n % 12 == 5))
            sieve[n] ^= true;
         n = (3*x*x)+(y*y);
         if (n <= maxn && n % 12 == 7)
            sieve[n] ^= true;
         n = (3*x*x)-(y*y);
         if (x > y && n <= maxn && n % 12 == 11)
            sieve[n] ^= true;
      }
   }
   sieve[2] = sieve[3] = true;
   prime.push_back(2);
   prime.push_back(3);
   int a;
   for (a = 5; a <= N; a+=2){
      if (sieve[a]){
         for (int i = a*a; i < maxn; i += a*a)
            sieve[i] = false;
         prime.push_back(a);
      }
   }
   for (; a < maxn; a+=2) if (sieve[a])
      prime.push_back(a);
}

void primeFactorize( int n ) {
	lists.clear();
    int sqrtN = int( sqrt(n) );
	int l = prime.size();
    for( int i = 0; prime[i] <= sqrtN && i < l ; i++ ) {
        if( n % prime[i] == 0 ) {

            while( n % prime[i] == 0 ) {
                n /= prime[i];
                //lists.push_back(prime[i]);  // to make list with prime repetation
            }
			//sqrtN = LLI( sqrt(n*1.0) ); /*not sure about working or not*/
	 lists.push_back(prime[i]);
	  //	( use to list prime factors only no repetation )
        }
    }

    if( n > 1 ) {
        lists.push_back(n);
    }
}

int main() {
    sieveOfAtkin();
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    int n;
    while(1){
        scan(n);
        if(n == 0) break;
        primeFactorize(n);
        pf("%d : %d\n",n,lists.size());
    }

    return 0;
}
