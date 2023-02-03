#include<bits/stdc++.h>
using namespace std;
bool binary_search_rec(vector<int> &arr,int a,int b,int ele)
{
    // if(a>b) return false;
    // if(a==b) return ele==arr[a];
    int m=(a+b)/2;
    if(arr[m]==ele) return true;
    if(ele<arr[m]) return binary_search_rec(arr,a,m-1,ele);
      return binary_search_rec(arr,m+1,b,ele);

}
bool binary_search_itr(vector<int> &arr, int a,int b,int ele){
    int m;

    while(a<=b){  // it must be a<=b;
        m = (a+b)/2;
        if(arr[m]==ele) return true;
        if(ele < arr[m]) b = m-1;
        else a = m+1;
    }

    return false;
}

int main()
{
    vector<int>arr={1,2,3,4,5,6,7};
     sort(arr.begin(), arr.end());
     int ele=7;
    if(binary_search_rec(arr,0,arr.size()-1,ele))
    {
        cout<<ele << " is present in array";
    }
    else
    {
        cout<<ele<<" is not present ";
    }

}