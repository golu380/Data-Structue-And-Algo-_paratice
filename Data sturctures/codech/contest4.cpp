#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int ans = INT_MAX;
        for(int i = 0;i<=ceil(n /100.0);i++){
            int cars = max((double)0,ceil((n- i*100)/4.0));
            int smoke = i*x + cars*y;
            ans = min(ans,smoke);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}