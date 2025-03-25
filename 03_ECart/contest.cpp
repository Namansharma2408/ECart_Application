// 8
// 21 100 10
// 9 -420 42
// 5 -7 2
// 13 37 7
// 10 0 49
// 1 10 9
// 7 -7 7
// 20 31 1
#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string str;
      cin>>str;
      int no = 0;
      int nf = 0;
      for(char ch : str){
        if(ch == '-') no++;
        if(ch == '_') nf++;
      }
      int ans = 0;
      if(no < 2 || nf < 1) ans = 0;
      else ans = (no+1)/2 * (nf) * (no/2);
      cout<<ans<<endl;
    }
    return 0;
}