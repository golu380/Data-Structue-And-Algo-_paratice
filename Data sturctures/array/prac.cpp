#include<iostream>
using namespace std;
class complex{
    int real,imag;
    public:
    void set(){
        cout<<"Enter real and image part";
        cin>>real>>imag;
    }
    friend complexSum(complex,complex);
}
int main(){


    return 0;
}