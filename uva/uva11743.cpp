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

    int test,kase=0;
    scan(test);
    while(test--){

        char ccard[5][10];

        sf("%s%s%s%s",ccard[0],ccard[1],ccard[2],ccard[3] );


        int res=0,tmp=0,tmp2 =0;
        //cout << l << endl;

        for(int i=0 ; i<4 ;i++){
            for(int j=0 ; j<4 ; j++){
                if(j==0 || j==2){
                    tmp = ccard[i][j]-'0';
                    tmp *= 2;

                    //cout << ccard[i] << " = " << tmp << endl;
                    while(tmp>0){
                        tmp2 = tmp%10;
                        tmp /= 10;

                        //cout << tmp2 << endl;
                        res += tmp2;
                    }
                }
                else if(ccard[i][j] != ' '){
                    res += ccard[i][j]-'0';
                }
            }
        }


        if(res%10 == 0){
            pf("Valid\n");
        }
        else{
            pf("Invalid\n");
        }
    }
    return 0;
}
