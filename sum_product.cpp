#include<iostream>
using namespace std;
int sum(int a,int b, int c){
  int s =  a + b + c;
  return s;
}
// product function
int product (int a , int b , int c){
  int p=a*b*c;
  return p;
}
int main(){
  int i,j,k;
  cout<<"enter a value "<<endl;
  cin>>i;
  cout<<"enter a value "<<endl;
  cin>>j;
  cout<<"enter a value "<<endl;
  cin>>k;

  cout<<"the sum of "<<i<<" "<<j<<" " <<k<<" "<<"is : "<<sum(i,j,k)<<endl;
  cout<<"the product of "<<i<<" "<<j<<" "<<k<<" "<<"is : "<<product(i,j,k)<<endl;
  return 0;
}