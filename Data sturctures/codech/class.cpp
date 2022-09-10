#include<bits/stdc++.h>
using namespace std;
class gre{
public:
int a,b,c;
};
void great(gre g){
     if (g.a >= g.b && g.a >= g.c)
    printf("%d is the largest number.", g.a);

  if (g.b >= g.a && g.b >= g.c)
    printf("%d is the largest number.", g.b);

  if (g.c >= g.a && g.c >= g.b)
    printf("%d is the largest number.", g.c);
}
int main(){
   gre g ;
   cin>>g.a;
   cin>>g.b;
   cin>>g.c; 
   great(g);
}