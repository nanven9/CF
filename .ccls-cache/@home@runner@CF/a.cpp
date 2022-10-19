#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
 
//Vector:
#define pb push_back
#define pf push_front
#define vc vector<char>
#define vl vector<long long>
#define vvl vector<vector<long long>>
#define vs vector<string>
 
/*-----------------------------------------------------------------------------*/
template<typename T> 
istream& operator >>(istream& istream, vector<T>& v) {
  for(auto& element : v) {
    cin >> element;
  }
  return istream;
}
 
template<typename T>
ostream& operator <<(ostream& ostream, vector<T>& v) {
  for(auto& element : v) {
    cout << element << " ";
  }
  return ostream;
}
 
template<typename T> 
istream &operator >>(istream &istream, vector<vector<T>> &v){
  for(auto &row : v) {
    for(auto &cell : row) {
      cin >> cell;
    }
  }
  return istream;
}
 
template<typename T> 
ostream& operator <<(ostream& ostream, vector<vector<T>>& v) {
  for(auto& row : v) {
    for(auto& cell : row) {
      cout << cell;
    }
    cout << "\n";
  }
  return ostream;
}
/*----------------------------------------------------------------------------------*/
 
//FastIO:
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
 
//Macros:
#define FOR(i,a,b) for (long long i = (a); i < (b); ++i)
#define all(c) (c).begin(), (c).end()
const ll mod = 1e9 + 7;
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif    
    fio;
  
    ll t;
    cin >> t;
    //t = 1;
    while (t--)
    {
      ll t;
      cin>>t;
      
    }
    return 0;
}