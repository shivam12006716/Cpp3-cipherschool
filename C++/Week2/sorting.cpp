#include <bits/stdc++.h>
using namespace std;
void insert(vector<int> &v, int temp)
{
    if (v.size() == 0 || v[v.size() - 1] <= temp)
    {
        v.push_back(temp);
        return;
    }
    int res = v.back();
    v.pop_back();
    insert(v, temp);
    v.push_back(res);
}
void sort(vector<int> &v)
{
    if (v.size() == 1)
        return;
    int temp = v.back();
    v.pop_back();
    sort(v);
    // logic to insert the element at right place
    insert(v,temp);
}
int main()
{
    vector<int> v = {0, -1, 2,0};
    sort(v);
    for(int i: v)
    {
        cout<<i<<" ";
    }
}