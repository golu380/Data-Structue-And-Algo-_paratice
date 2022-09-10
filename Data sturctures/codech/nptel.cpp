#include<bits/stdc++.h>
using namespace std;
int main(){

int x = 0,y = 0;
char ch;
int du;
scanf("%c",ch);
while (ch != 'E')
{   cin>>du;
   switch (ch)
   {
   case 'R':
       x += du;
       break;
   case 'L':
       x -= du;
       break;
   case 'U':
       y += du;
       break;
   case 'D':
       y -= du;
       break;
   
   default:
       break;
   }
   cin>>ch;
}
cout<<x<<" "<<y<<endl;
    return 0;
}