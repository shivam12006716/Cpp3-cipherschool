#include <bits/stdc++.h>
using namespace std;

int power(int base,int pow){
    
    if(pow == 0)return 1;
     
    int smlAns = power(base,pow-1); //smlAns - > 2^2 
    
    return smlAns*base;
}
int main() {
    
  cout<<power(2,3);
    
	return 0;
}