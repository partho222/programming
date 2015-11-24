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

struct player{
    int tm,id;
};

struct chk{
    int tm,x,y;
};

player ply1[100010],ply2[100010];
char res[2][100010];
chk ch[300030];

bool comp(const player &a , const player &b)
{
    if(a.tm < b.tm)
        return true;

    return false;
}

bool cmp(const chk &a , const chk &b)
{
    if(a.tm < b.tm)
        return true;

    return false;
}


int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    int n,scr,scr2;
    cin >> n;

    for(int i =0 ; i<n; i++)
    {
            cin >> scr >> scr2;
            ply1[i].tm = scr; ply2[i].tm = scr2;
            ply1[i].id = i; ply2[i].id = i;


            ch[i].tm = scr ; ch[i+n].tm = scr2;
            ch[i].x = 0 ; ch[i+n].x = 1;
            ch[i].y = i ; ch[i+n].y = i;
    }

    sort(ply1,ply1+n,comp);
    sort(ply2,ply2+n,comp);
    sort(ch,ch+(2*n),cmp);


    for(int i=0 ; i<n ; i++)
    {
        res[0][i] = 48; res[1][i] = 48;
    }

    for(int i=0 ; i<n ; i++)
    {
        res[ch[i].x][ch[i].y] = 49;
    }

    int a = 0;
    for(int i = 1 ; 2*i <= n ; i++ )
    {
        res[0][ply1[a].id] = '1';
        res[1][ply2[a].id] = '1';

        a++;
    }
    res[0][n] = 0; res[1][n] = 0;


    cout << res[0] << endl << res[1] << endl;

    return 0;
}
