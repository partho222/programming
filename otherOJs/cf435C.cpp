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


typedef __int64 LLI;
typedef unsigned __int64 LLU;

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

int iput[1010],n,f=0,nx,ny;
queue<int> xs,ys;
char card[2020][2020];

void gen_seq(int lv){
    if(lv == 0){
        nx = 0; ny = 0;
    }
    else if(lv == 1){
        nx = iput[0]; ny = iput[0];
    }
    else{
        for(int i = 0 ; i<lv ; i++){
            nx += iput[i];
            if(f == 0){
                ny += iput[i]; f = 1;
            }
            else if(f == 1){
                ny -= iput[i]; f = 0;
            }
        }
    }
    xs.push(nx); ys.push(ny);
}

void print(int x,int y,int chk){
    if(chk == 0){
        card[x][y] = '/';
    }
    else{
        card[x][y] = '\\';
    }
}

int main() {
    #ifdef partho222
        freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif
    int ll=1,px,py;
    scan(n);
    for(int i=0 ; i<n ; i++){
        scan(iput[i]);
    }
    for(int i=0 ; i<=n ; i++){
        nx =0; ny =0; f=0;
        gen_seq(i);
    }
    memoclr(card,32);
    int sx = 1000 , sy =1000 , tchk = 0;
    int sty=0,edx=3000,edy=3000;
    int xx,yy;
/*------------------------------------------------------------------------------------*/
    while(!xs.empty() && !ys.empty()){
        int tx = xs.front(), ty = ys.front(),cx,cy; xs.pop(); ys.pop();
        //cout << tx << " " << ty << endl;
        xx = sx+tx; yy = sy+ty; // x & y value
        if(!xs.empty() && !ys.empty()){
            cx = xs.front() , cy = ys.front(); // x & y check value
            cx += sx; cy += sy;
        }
        else{
            break;
        }
        //cout << xx  << " " << yy << " -- > " << cx << " " << cy << endl;

        if(ll == 1){
            px = xx ; py = yy;
            ll =0;
        }

        do{
                sty = maxt(sty,py);
                edy = mint(edy,py);
           // cout << xx << " -> " << yy << " && " << px << " -> " << py << endl;
            print(py , px , tchk);
            if(tchk == 0){
                xx++; yy++;
                if( px+1 != cx && py+1 != cy){
                    px++; py++;
                }
                else{
                    px++;
                }
            }
            else{
                    //cout << px << " p-> " << py << endl;
                xx++; yy--;
                if( px+1 != cx && py-1 >= cy){
                    px++; py--;
                }
                else{
                    px++;
                }
            //cout << px << " pl-> " << py << endl;
            }
        }while(xx != cx && yy != cy);

        if(tchk == 0){
            tchk = 1;
        }
        else{
            tchk = 0;
        }
    }
/*-------------------------------------------------------------------------------------------*/
    for(int i=sty ; i >= edy ; i--){
        for(int j = 1000 ; j< px ; j++){
            pf("%c",card[i][j]);
        }
        pf("\n");
    }

    return 0;
}
