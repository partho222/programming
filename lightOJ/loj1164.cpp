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

struct X{
    LLU sum,lazy;
}tree[400005];

X res;

int x,y,val;


using namespace std;


void merge(X &root ,X &l ,X &r){
    root.sum = l.sum+r.sum;
}

void lazy_up(X &node){
    node.lazy += val;
}

void calculate(X &node, int len){
    node.sum = node.sum + (node.lazy*len);
}

void lazyreset(X &node){
    node.lazy = 0;
}

void propagate(X &lft, X &rht, X &node){
    lft.lazy += node.lazy;
    rht.lazy += node.lazy;
}

void init(LLI l ,LLI r ,LLI node){
    if(l == r){
        tree[node].sum = 0;
        tree[node].lazy = 0;
        return;
    }
    tree[node].lazy = 0;
    int mid,lft,rht;
    mid = (l+r)/2,lft = node*2 , rht = lft+1;

    init(l, mid, lft);
    init(mid+1, r, rht);

    merge(tree[node] ,tree[lft] ,tree[rht]);
}

void update(LLI l ,LLI r ,LLI node){
    int mid,lft,rht;
    mid = (l+r)/2,lft = node*2 , rht = lft+1;

    if(l > y || r < x){
        calculate(tree[node] ,(r-l)+1);
        if(l != r){
            propagate(tree[lft] ,tree[rht] ,tree[node]);
        }
        lazyreset(tree[node]);
        return;
    }
    if(l >= x && r <= y){
        lazy_up(tree[node]);
        calculate(tree[node],(r-l)+1);
        if(l != r){
            propagate(tree[lft] ,tree[rht] ,tree[node]);
        }
        lazyreset(tree[node]);
        return;
    }


        propagate(tree[lft], tree[rht], tree[node]);
        lazyreset(tree[node]);


    update(l ,mid ,lft);
    update(mid+1 ,r ,rht);

    merge(tree[node] ,tree[lft] ,tree[rht]);
}

void query(LLI l ,LLI r ,LLI node){
    int mid,lft,rht;
    mid = (l+r)/2,lft = node*2 , rht = lft+1;

    if(l > y || r < x){
        calculate(tree[node] ,r-l+1);
        if(l != r){
            propagate(tree[lft] ,tree[rht] ,tree[node]);
        }
        lazyreset(tree[node]);
        return;
    }
    if(l >= x && r <= y){
        calculate(tree[node],r-l+1);
        if(l != r){
            propagate(tree[lft] ,tree[rht] ,tree[node]);
        }
        lazyreset(tree[node]);
        merge(res ,res ,tree[node]);
        return;
    }


        propagate(tree[lft], tree[rht], tree[node]);
        lazyreset(tree[node]);


    query(l ,mid ,lft);
    query(mid+1 ,r ,rht);

    merge(tree[node] ,tree[lft] ,tree[rht]);
}

int main() {
    #ifdef partho222
        freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif
    int test,kase=0;
    scan(test);
    while(test--){
        int n,q;
        scan(n); scan(q);
        init(0 ,n-1 ,1);
        pf("Case %d:\n",++kase);
        for(int i=0 ;i<q ; i++){
            int typ;
            sf("%d%d%d",&typ,&x,&y);
            if(typ == 0){
                scan(val);
                update(0 ,n-1 ,1);
            }
            else{
                res.sum =0; res.lazy =0;
                query(0 ,n-1 ,1);
                pf("%lld\n",res.sum);
            }


        }
    }

    return 0;
}
