#include<iostream>
#include<string>
using namespace std;
int main(){
  int counter = 0;
  int n;
  string expression;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>expression;
    if(expression == "X++"){
       counter++;
    } else if (expression == "++X"){
       ++counter;
    } else if (expression == "X--"){
       counter--;
    } else if (expression == "--X"){
      --counter;
    }
  }


  cout<<counter<<endl;
  return 0;
}
