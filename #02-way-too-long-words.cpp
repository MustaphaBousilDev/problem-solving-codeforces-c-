#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
  int n;
  string  word;
  cin>>n;
  string list_words[n];
  for(int i=0;i<n;i++){
    cin>>word;
    if(word.length() > 10){
      string first = string(1, word[0]);
      string last =  string(1, word[word.length() - 1]);
      string numb = to_string(word.length() - 2);
      list_words[i] = first + numb + last;
    } else{
      list_words[i] = word;
    }
 }
 for (int i=0; i < n;i++){
    cout<<list_words[i]<<endl;
 }
 return 0;
}
