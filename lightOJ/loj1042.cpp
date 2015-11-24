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

char bval[200];
int chk=0;

void clr(){
    for(int i=0 ; i<200 ; i++)
        bval[i] = 0;
}

void binary(int x){
    if(x == 0)
        return;
    bval[chk++] = (x%2)+'0';
    x = x/2;
    binary(x);
}

void next(){
    int one = 0,tmp=0,f=1;
    for(int i=1 ; i<chk ; i++)
    {
        if(bval[i-1] == '1' && bval[i] == '0' )
        {
            swap(bval[i-1] , bval[i]);
            f = 0;
            break;
        }
        else if(bval[i-1] == '1')
        {
            one++;
        }
        tmp++;
    }

    if(f){
        bval[chk] = '1';
        chk++;
    }
    //cout << tmp ;

    for(int j = tmp; j>=0 ; j--){
        if(j == (one-1) ){
            bval[j] = '1';
            one--;
        }
        else
        {
            bval[j] = '0';
        }
    }


}

int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif
    int test,kase=0;
    scan(test);
    while(test--)
    {
        int n,res=0;
        scan(n);
        chk = 0;
        clr();
        binary(n);
        //cout << bval << endl;
        next();
        //cout << bval << endl;

        for(int i=0 ; i<chk ; i++){
            int tmp = (bval[i]-'0');
            tmp = tmp*(power(2,i));
            res += tmp;
        }
        pf("Case %d: %d\n",++kase,res);
    }


    return 0;
}
