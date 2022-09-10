#include<iostream>

using namespace std;

      int main()

      {

             int b,i,j,w,lr=0,lc=0,n,m;

             int a[10][10];

             cout<<"enter the no. of rows in matrix";

             cin>>m;

             cout<<"enter no. of columns in matrix";

             cin>>n;

             cout<<"enter the elements in matrix";

             for(i=0;i<m;i++)

             {

                      for(j=0;j<n;j++)

                      {

                                  cin>>a[i][j];

                                                }

                                    }

                                    cout<<"enter the base address";

                                    cin>>b;

                                    cout<<"enter the storage size of one element stored in array";

                                    cin>>w;

                                    i=m-1;

                                    j=n-1;

                                    cout<<"address of A[i][j]"<<b + w*(n*(i-lr)+(j-lc));

                                             return 0;

}