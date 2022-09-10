#include<iostream>
using namespace std;
class B

{

   int x, y, z;

   public:

   void getdata(int xx, int yy, int zz)

   {

       x = ++xx;

       y = ++yy;

       z = ++zz;

   }

   void Show()

   {

       cout<< "" << x++ << " " << y++ << " " << z++;

   }

};

int main()

{

   B obj;

 obj.getdata(1,2,3);

   obj.Show();

   return 0;

}