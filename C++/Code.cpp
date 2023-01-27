#include <bits/stdc++.h>
using namespace std;

int maxi(int n1,int n2){
  if(n1>n2)return n1;
  return n2;
}

int maxi(int n1,int n2, int n3){
  if(n1>n2){
      if(n1>n3)return n1;
  return n3;
}else{
    if(n2>n3)return n2;
    return n3;
 }
}

int maxi(int n1,int n2, int n3, int n4){
    int a = maxi(n1,n2,n3);
    return maxi(a,n4);
}

int main() {
    
    cout<<maxi(2,5);
    cout<<maxi(2,5,3);
    cout<<maxi(2,5,3,5);


	return 0;
}