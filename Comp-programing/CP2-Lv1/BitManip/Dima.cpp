Copy
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#include <functional> 
#define MOD  (int)(1e9+7)
#define SIZE (int)(1e5+5)
#define all(x) x.begin(),x.end()
#define lb     lower_bound
#define ub     upper_bound
#define pb     push_back
#define F      first
#define S      second
#define cnt_set1(x) __builtin_popcountll(x)  
#define trailing_0(x) __builtin_ctz(x)
#define prDouble(x) cout<<fixed<<setprecision(10)<<x;
#define IOfast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define get_element_by_key(x) find_by_order(x) 
#define get_key(x)   order_of_key(x)
#define debug(x) cout<<#x<<" = "<<x<<"\n";
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
using namespace std;
using namespace __gnu_pbds; 
//less_int<int>
 
typedef tree<int64_t, null_type,less<int64_t>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
 
typedef tree<int64_t, null_type, less_equal<int64_t>, rb_tree_tag,tree_order_statistics_node_update> indexed_multiset;
//find_by_order(x) -> returns an iterator to the element at a given position
//order_of_key(x) -> returns the position of a given element
 
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args){
  cerr << *it << " = " << a << endl;
  err(++it, args...);
}
 
///pair cout
template<typename T,typename G> print(pair<T,G> p){ cout<<"{"<<p.F<<","<<p.S<<"},";  }
///vector cout 
template<typename T> print(vector <T> v){ for(auto item:v)cout<<item<<" ";cout<<"\n";} 
///set cout
template<typename T> print(set <T> v){ for(auto item:v)cout<<item<<" ";cout<<"\n";} 
///multiset cout
template<typename T> print(multiset <T> v){ for(auto item:v)cout<<item<<" ";cout<<"\n";} 
//map cout
template<typename T,typename G> print(map <T,G> v){ for(auto item:v) cout<<"{"<<item.first<<"=>"<<item.second<<"},"<<" ";cout<<"\n";} 
 
int64_t power(int64_t base,int exp)
{
    if (exp == 0)
        return 1;
    if (exp == 1)
        return base;
    int64_t t = power(base, exp / 2);
    t = (t * t);
    if (exp % 2 == 0)
        return t;
    else
        return base * t;
}
 
//void seiveErath(int n)
vector<int64_t> seiveErath(int n)
{
  vector<int64_t> prime;
  int mark[n+1]={0};
  for(int i=2;i<=n;i++)
  {
    if(!mark[i])
    { 
      prime.pb(i);
      int temp=2*i;
      while(temp<=n){ mark[temp] = 1;temp+=i;} 
    }  
  }
  return prime;    
}
 
//int dp[(int)4e8];
//int dp[5002];
//int visited[(int)3e5 + 1];
//vector <int> graph[(int)2e5 + 1];
vector<int> track;
map<pair<int,int>,int> mp; 
 
bool solve(set<int> * my_set,int i,int n,int XOR,vector<int> move,int prev)
{ 
  move.pb(prev);
  
  if(i == n)
  {
    if(XOR > 0)
    {
      track=move;
      return true;
    }
    return false; 
  }
 
  for(auto &item:my_set[i])
  {
    if(solve(my_set,i+1,n,XOR^item,move,mp[{i,item}]) == true)
      return true;
  }
  return false;   
}
 
int main()
{
  //IOfast;
  
  int q=1;
  //seiveErath((int)2e7);
  //cin>>q;
  //memset(dp,-1,sizeof(dp));
  while(q--)
  {
    int n,k;
    cin>>n>>k;
    set<int> my_set[n];
    for(int i=0;i<n;i++)
    {
      for (int j = 0; j<k; ++j)
      {
        int temp;
        cin>>temp;
        my_set[i].insert(temp);
        mp[{i,temp}] = j+1; 
      }
    }
    vector<int> move;
    if(solve(my_set,0,n,0,move,-1) == false)
      cout<<"NIE";
    
    else
    {
      cout<<"TAK\n";
      for(auto &item:track) if(item>0) cout<<item<<" ";
    }       
  }
  
  return 0;
}