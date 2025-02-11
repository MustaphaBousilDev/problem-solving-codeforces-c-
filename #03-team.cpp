#include<iostream>
using namespace std;
int main(){
  int n;
  int m;
  int sum = 0;
  int counter = 0;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
     cin>>m;
     sum += m;
    }
    sum >= 2 ? counter++ : counter;
    sum = 0;
  }
  cout<<counter<<endl;
  return 0;
}
