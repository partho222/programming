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

string iput;

string solve(LLI mid)
{
    LLI left = 0 , right = 0 , l = iput.length() ,cnt=1;
    for(LLI i=mid-1 ; i>= 0 ; i--)
    {
        if(iput[i]>='1' && iput[i] <= '9')
        {
            left += (cnt)*(iput[i] - '0');
        }
        cnt++;
    }

    cnt = 1;
    for(LLI i=mid+1 ; i<l ; i++)
    {
        if(iput[i]>='1' && iput[i] <= '9')
        {
            right += (cnt)*(iput[i] - '0');
        }
        cnt++;
    }

    //cout << left << " " << right << endl;

    if(left == right)
        return "balance";
    else if(left > right )
        return "left";
    else if(left < right )
        return "right";

}

int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    cin >> iput;
    LLI len = iput.length();
    for(LLI i=0 ; i<len ; i++)
    {
        if(iput[i] == '^')
        {
            cout << solve(i) << endl;
            break;
        }
    }


    return 0;
}
