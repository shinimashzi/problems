/* By: shinimashzi  */
#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <set>
#include <map>

//#pragma comment(linker,"/STACK:102400000,102400000")
#define IN freopen("D:\\in.txt","r",stdin)
#define OUT freopen("D:\\out.txt","w",stdout)
#define LL long long
const int inf = 0x3f3f3f3f;
using namespace std;
template<class T>
inline T Max(T a,T b) {return a > b ? a : b;}
template<class T>
inline T Min(T a,T b) {return a < b ? a : b;}

inline LL LAbs(LL x){ return x > 0 ? x : -x; }
inline int read()
{
    int x=0,f=1;char c = getchar();
    while(c < '0' || c > '9') {if(c=='-')f=-1; c=getchar();}
    while(c >= '0' && c <= '9') x = x*10+c-'0', c=getchar();
    return x*f;
}
// =========================== template ============================== //

int main() {
    return 0;
}
