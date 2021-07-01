#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool visited[1000] ={false};
map<int,vector<int>>vi;
int counter = 0;


long long my_pow(long long n,long long p,long long a)
{
     if(p==0) return 1;
      long long x = my_pow(n,p/2,a);
      x=((x%a)*(x%a));
      if(p%2==1)
      {
          x=(x*n)%a;

      }
      return x%a;

      // x = (x* x * (x*n)->(if odd) )% a -> (x%a * x%a * (x*n)%a)%a
}

int main()
{ long long n,p,a;

  while(cin>>n>>p>>a)
  {
     cout<< my_pow(n,p,a)<<endl;

  }
    return 0;
}
