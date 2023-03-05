/*
Author : Anik Podder
CF Handle : anikpodder
============================
          _oo0oo_
         o8888888o
         88" . "88
         (| -_- |)
         0\  =  /0
       ___/`---'\___
     .' \\|     |// '.
    / \\|||  :  |||// \
   / _||||| -:- |||||- \
  |   | \\\  -  /// |   |
  | \_|  ''\---/''  |_/ |
  \  .-\__  '-'  ___/-. /
___'. .'  /--.--\  `. .'___
. "" '<  `.___\_<|>_/___.' >' "".
| | :  `- \`.;`\ _ /`;.`/ - ` : | |
\  \ `_.   \_ __\ /__ _/   .-` /  /
=====`-.____`.___ \_____/___.-`___.-'======
               `=---='
============================
*/
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>
#include<unordered_set>
#include<list>
#include<iterator>
#include<deque>
#include<queue>
#include<stack>
#include<set>
#include<bitset>
#include<random>
#include<map>
#include<unordered_map>
#include<stdio.h>
#include<complex>
#include<math.h>
#include<cstring>
#include<chrono>
#include<string>
//Header Files End Here

using namespace std;

#define Anik ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl "\n"
#define ll long long
#define ld long double
#define lb lower_bound
#define ub upper_bound
#define un(s) unique((s).begin(), (s).end()) - (s).begin()
#define all(v) (v).begin(),(v).end()
#define srt(v) sort((v).begin(), (v).end())
#define sortrev(v) sort((v).begin(), (v).end(),greater<int>())
#define rev(v) reverse((v).begin(), (v).end())
#define rall(v) (v).rbegin(),(v).rend()
#define sz(x) (ll)x.size()
#define printvnl(v) for (const auto& elem : v) { cout << elem << endl; }
#define printv(v) for (const auto& elem : v) { cout << elem; }
#define printvsp(v) for (const auto& elem : v) { cout << elem << " "; }
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vst;
#define input_vec(vec, n) for (int i = 0; i < n; i++) { int x; cin >> x; vec.push_back(x); }
#define tolowerstr(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define toupperstr(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define CHAR_TO_INT(str, index) stoi(str.substr(index, 1))
#define toString(x) static_cast<ostringstream&>((ostringstream() << dec << x)).str()
#define toInt(s) static_cast<ll>(stoi(s))
#define toDouble(s) static_cast<ld>(stod(s))
#define PI 3.1415926535897932384626433832795l
const double pi = acos(-1.0);
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    int n, k;
    
    cin >> n >> k;
    
    if(k==1) cout << n << endl;
    else cout << (n/k) * 2 + ((n % k) > 0) << endl;
}

int main()
{

    Anik

   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
   #endif
         
     


    int tc;

    cin >> tc;

    for (int t = 1; t <= tc; t++)
    {

         // cout << "Case " << t << ": ";

         solve();
    }
   
}
