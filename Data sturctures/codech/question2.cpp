#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
char str[14];
int x;

while (t--)
{
    int Ccount = 0;
int Ncount = 0;
int Dcount = 0;
    cin>>x;
    for(int i = 0;i<14;i++)
    cin>>str[i];
    
    for(int i = 0;i<14;i++){
        if(str[i] == 'C')
            Ccount++;
        else if(str[i] == 'N')
            Ncount++;
        else
            Dcount++;
    }
    
   cout<<Ccount<<" " <<Ncount<<" " <<Dcount<<endl;
  int cPoint = 2*Ccount + 0*Ncount + 1*Dcount;
  int chPoint = 0*Ccount + 2*Ncount + 1*Dcount;

  if(cPoint > chPoint){
      cout<<60*x<<endl;
  }else if(cPoint == chPoint){
      cout<<55*x<<endl;
  }else{
      cout<<40*x<<endl;
  }
}

return 0;

}