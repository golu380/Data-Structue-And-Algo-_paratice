#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t,i,n,h,j,sum;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>n;
	    h=0;
	    sum=0;
	    for(j=1;j<=n;j++){
	        if((sum+j)<=n){
	            sum=sum+j;
	            h++;
	        }
	        else{
	            break;
	        }
	    }
	    cout<<h<<endl;
	}
	return 0;
}