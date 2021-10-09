#include <iostream>
using namespace std;
int n,sum=0,r;

int main() {
    cin>>n;
    while(n){
        r=n%10,n=n/10;
        sum=sum*10+r;
    }
    cout<<sum;
    
	return 0;
}
