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

vector<int> arr;

int main() {
    #ifdef partho222
        freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif
    int test,f=1;
    scan(test);
    if(f){
        getchar(); f=0;
    }
    while(test--){
        string iput;
        getline(cin,iput);
        int l = iput.length(),val=0,i=0;
        arr.clear();
        while(i<l){
            while( (iput[i]-'0')>=0 && (iput[i]-'0')<=9 ){
                val = (val*10)+(iput[i]-'0');
                i++;
            }
            if(val > 0){
                arr.pb(val); //cout << val << endl;
            }
            val=0; i++;
        }
        l = arr.size();
        int res=0;
        for(int i=0 ; i<l-1 ; i++){
            for(int j=i+1 ; j<l ; j++){
                res = maxt( res, gcd( arr[i] , arr[j] ) );
            }
        }
        pf("%d\n",res);
    }
    return 0;
}
