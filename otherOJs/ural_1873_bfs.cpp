/* Tariq ahmed khan - Daffodil */

#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <iomanip>


#define pi 2*acos(0.0)
#define scan(x) scanf("%d",&x)
#define sf scanf
#define pf printf
#define pb push_back
#define memoclr(n,x) memset(n,x,sizeof(n) )


typedef long long LLI;
typedef unsigned long long LLU;

template<class T> T gcd(T x, T y){if (y==0) return x; return gcd(y,x%y);}
template<class T> T lcm(T x, T y){return ((x/gcd(x,y))*y);}
template<class T> T max(T x, T y){if (x > y) return x; else return y;}
template<class T> T min(T x, T y){if (x < y) return x; else return y;}


int dir[8][2]={{-1,0}
              ,{1,0}
              ,{0,-1}
              ,{0,1}
              ,{-1,-1}
              ,{-1,1}
              ,{1,-1}
              ,{1,1}};


using namespace std;

map<string,int > name;
vector<int > adj[500]; vector<string> srt;
int vis[500],assi,tim[500];
queue<int> lst;
map<string , int>::iterator itr;


void bfs(int n)
{
    lst.push(n);
    int x;

    while(!(lst.empty() ) )
    {
        x = lst.front(); lst.pop();
        for(int i=0 ; i<adj[x].size() ; i++)
        {
            if(vis[adj[x][i]] == -1)
            {
                vis[adj[x][i]] = 0;
                tim[adj[x][i]] = tim[x]+1;
                lst.push(adj[x][i] );
            }
        }
    }
}


int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif // partho222

    name.clear();
    //name["Isenbaev"] = 1;

    memoclr(vis,-1);

    int test,f=0;

    assi = 1;
    string nm1,nm2,nm3;
    sf("%d",&test);
    while(test--)
    {
        cin >> nm1 >> nm2 >> nm3;

        if(name[nm1] == 0)
        {
            srt.pb(nm1);
            name[nm1] = assi++;
        }
        if(name[nm2] == 0)
        {
            srt.pb(nm2);
            name[nm2] = assi++;
        }
        if(name[nm3] == 0)
        {
            srt.pb(nm3);
            name[nm3] = assi++;
        }

        if( (f==0) && (nm1=="Isenbaev" || nm2 == "Isenbaev" || nm3 == "Isenbaev") )
        {
            f=1;
        }

        adj[name[nm1]].pb(name[nm2]); adj[name[nm1]].pb(name[nm3]);
        adj[name[nm2]].pb(name[nm1]); adj[name[nm2]].pb(name[nm3]);
        adj[name[nm3]].pb(name[nm1]); adj[name[nm3]].pb(name[nm2]);

    }

    if(f)
    bfs(name["Isenbaev"]);
    //cout << assi;

    tim[name["Isenbaev"]] = 0;

     // srt.pb("Isenbaev");
    sort(srt.begin(),srt.end());

    for(int i = 0 ; i < srt.size() ; i++)
    {
        cout << srt[i] <<" ";
        if(tim[name[srt[i]] ] <= 0  && srt[i] != "Isenbaev")
        {
            pf("undefined\n");
        }
        else if(f)
        {
            pf("%d\n",tim[name[srt[i]] ]);
        }
        else
        {
            pf("undefined\n");
        }
    }


    return 0;
}
