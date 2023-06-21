   
                            /***********En el nombre de Dios***********/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define                ll  long long int
#define                llu unsigned long long int
#define                dl long double
#define                scll(x) scanf("%lld",&x)
#define                scull(x) scanf("%llu",&x)
#define                scld(x) scanf("%Lf",&x)
#define                scch(x) scanf(" %c",&x)
#define                eb(x)  emplace_back(x)
#define                pb(x) push_back(x)
#define                pf(x) push_front(x)
#define                ppb() pop_back()
#define                ppf() pop_front()
#define                rev(v) reverse(v.begin(),v.end())
#define                all(v) v.begin(),v.end()
#define                Pi acos(-1.0)
#define                inf   (1LL << 61)
#define                mod 1000000007
#define                ff first
#define                ss second
#define                mpr make_pair
#define                debug(x) cout<<x<<'\n';
#define                eps 1e-8
#define                nl  cout<<'\n'
#define                ump unordered_map
#define                mp  map
#define                CASE(a) printf("Case %lld: ",a)
#define                mem(a,b) memset(a,b,sizeof(a))

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> indexed_multiset;

/*********Taking input by EOF*********/
// while(scanf("%lld",&x)!=-1){ } 

/*******Creates a min heap******/
//priority_queue <int, vector<int>, greater<int> > pq

/**********x in degree*********/
//sin((x*pi)/180.0)

/**********x in radian*********/
//sin(x)

/**********radian*********/
//asin(x)

/**********degree*********/
//(asin(x)*180)/pi

/******
or(|)
and(&)
xor(^)
not(~)
******/

/************Give the position of x*************/
//S.order_of_key(x)

/***********Give the x th element in set********/
//S.find_by_order(x)

#define Fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/*******theory******/

//***********graph*********//

//euler path : An Euler path is a path that uses every edge in a graph with no repeats. 
//             Being a path, it does not have to return to the starting vertex.

//euler circuit: An Euler circuit is a circuit that uses every edge in a graph with no repeats.
//               Being a circuit, it must start and end at the same vertex.

//In case of undirected graph if every node has even degree the graph has euler circuit

//In case of directed graph if every node's in and out degree is same then the graph has euler circuit

//In case of euler path if the graph has atleast 2 nodes with odd degree then the graph has euler path

//In case of euler path in directed graph:
///a) There should be a single vertex in graph which has (indegree+1==outdegree), lets call this vertex 'an'
///b) There should be a single vertex in graph which has (indegree==outdegree+1), lets call this vertex 'bn'
///c) Rest all vertices should have (indegree==outdegree)
///If either of the above condition fails Euler Path can't exist.

//**********end***********//

//**********number theory*********//

//Every number that is not power of two can be expressed as a sum of consecutive integer

//***********end**********//

/*****************Knight moves****************/
ll dx[8] = { -2, -2, 2, 2, -1, -1, 1, 1};
ll dy[8] = {1, -1, 1, -1, 2, -2, 2, -2};

/******************str->num****************/
/*
stringstream st;
st<<str
st>>num;

*/

/******************num->str****************/
/*

stringstream st;
st<<num;
st>>str;

*/

/**********sscanf*********/
/*

for retrieving data from array of character
sscanf(str,"%lld,%c,%lf...",&c,&ch,&fr)[str is array of character]
sscanf(str.c_str(),"%lld,%c,%lf...",&c,&ch,&fr)[str is object of string class]
sscanf(str,"%*s%*lld",....)[for ignoring string and long long value from input string]

*/

//ll ncr(ll n,ll r){if(n==r || r == 0)return 1;if(r==1)return n;if(dp[n][r]!=-1)return dp[n][r];return dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);}

// checkbit mask & (1LL<<bit)
// setbit return mask | (1LL<<bit) 
// clearbit mask & ~(1LL<<bit);
// togglebit mask ^ (1LL<<bit);}

//For key as pair in unordered_map

//format : unordered_map< pair , value , hash_pair > map name;

struct hash_pair 
{
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};

void solve()
{

ll a, b, d, c, e, f, g, h, i, j, k, l,m, n, o, p ,q, r, s, t, u, v, w, x, y, z;
ll sum,mn,mx,cum;
string str,str1,str2,str3;

cin>>str;
str1=str+'a';
str2='a'+str;
str3=str1;
string str4=str2;
reverse(str3.begin(),str3.end());
reverse(str4.begin(),str4.end());
if(str3!=str1){
	cout<<"YES";
	nl;
	cout<<str1;
}
else if(str4!=str2)
{
	cout<<"YES";
	nl;
	cout<<str2;
}
else
cout<<"NO";

nl;
}

int main()
{
    #ifndef Ilovemo
                 freopen("input.txt", "r", stdin);
                  freopen("output.txt", "w", stdout);
        #endif
    
 ll t=1;

  scll(t);

while(t--)
{
  solve();
}

return 0;
}