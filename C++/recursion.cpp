#include <bits/stdc++.h>
using namespace std;

int power(int base,int pow){
    int num = 1;
    for(int i =0 ;i<pow;i++){
        num*=base;
    }
    
    return num;
}

int main() {
    
  cout<<power(2,3);
    
	return 0;
}
