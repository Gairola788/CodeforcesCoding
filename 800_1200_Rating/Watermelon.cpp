#include<iostream>
using namespace std;

class Solution{

public:
  void equalParts(int n){
      
    if(n==2){
       cout<<"NO";
       return; 
    }
    if(n%2 == 0){
     cout<<"YES";
   }
   else{
    cout<<"NO";
   }

}
};


int main(){
    Solution sol;
   int n;
   cin>>n;
   sol.equalParts(n);
}