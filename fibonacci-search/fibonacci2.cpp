#include <iostream>
using namespace std;
int main(){
int n,i,a=0,b=1,c=0;
cout<<"enter length of fibonacci series";
cin>>n;
cout<<"Fibonacci series:";
cout<<a<<" ";
cout<<b<<" ";
for(i=0;i<=(n-2);i++){
    c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;

}
}

