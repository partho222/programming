/* Tariq ahmed khan - Daffodil */

#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0); // I/O optimization


#define pi 2*acos(0.0)
#define scan(x) scanf("%d",&x)
#define sf scanf
#define pf printf
#define pb push_back
#define memoclr(n,x) memset(n,x,sizeof(n) )
#define INF 1 << 30


typedef long long LLI;
typedef unsigned long long LLU;

template<class T> T gcd(T x, T y){if (y==0) return x; return gcd(y,x%y);}
template<class T> T lcm(T x, T y){return ((x/gcd(x,y))*y);}
template<class T> T maxt(T x, T y){if (x > y) return x; else return y;}
template<class T> T mint(T x, T y){if (x < y) return x; else return y;}
template<class T> T power(T x, T y){T res=1,a = x; while(y){if(y&1){res*=a;}a*=a;y>>=1;}return res;}
template<class T> T bigmod(T x,T y,T mod){T res=1,a=x; while(y){if(y&1){res=(res*a)%mod;}a=(a*a)%mod;y>>=1;}return res;}


int dir[8][2]={{-1,0}
              ,{1,0}
              ,{0,-1}
              ,{0,1}
              ,{-1,-1}
              ,{-1,1}
              ,{1,-1}
              ,{1,1}};


using namespace std;

int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    string iput;
    int sum[1000010],kase=0;
    while(cin >> iput){
        sum[0]=0;
        int len = iput.length();
        for(int i=1 ; i<len ;i++){
            if(iput[i] == iput[i-1]){
                sum[i] = sum[i-1]+1;
            }
            else{
                sum[i] = 0;
            }
        }

        pf("Case %d:\n",++kase);
        int qur; scan(qur);
        for(int i=0 ; i<qur ;i++){
            int s,e,t1,t2;
            scan(t1); scan(t2);
            s = mint(t1,t2); e = maxt(t1,t2);

            if(e-s <= sum[e]){
                pf("Yes\n");
            }
            else{
                pf("No\n");
            }
        }
    }

    return 0;
}
