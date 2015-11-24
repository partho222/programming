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


struct data{
    int val,id;
};

data iput[400000];

bool comp(const data &a , const data &b){
    if(a.val < b.val)
        return true;
    return false;
}

bool cmp(const data &a , const data &b){
    if(a.id < b.id)
        return true;
    return false;
}

int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;

    for(int i=0 ;i <n ; i++)
    {
        cin >> iput[i].val;
        iput[i].id = i;
    }

    sort(iput,iput+n,comp);

    int res = 0;
    for(int i=1 ;i <n ; i++)
    {
        if(iput[i-1].val == iput[i].val)
        {
            iput[i].val++;
            res = iput[i].val;
        }
        else if(iput[i-1].val > iput[i].val)
        {
            iput[i].val = ++res;
        }
    }

    sort(iput,iput+n,cmp);

    for(int i=0 ;i <n ; i++)
    {
        pf("%d ",iput[ i ].val);
    }
    pf("\n");

    return 0;
}
