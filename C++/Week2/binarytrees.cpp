#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int ele)
    {
        left = right = nullptr;
        data = ele;
    }
};
void verticalTransverse(Node *root , int hdis , map<int,vector<int>>&map)
{
    if(root == nullptr)return;
    map[hdis].push_back(root->data);
    verticalTransverse(root->left,hdis-1,map);
    verticalTransverse(root->right,hdis+1,map);

}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(11);

    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->left->left = new Node(10);
    root->right->right = new Node(5);

    root->right->right->left = new Node(6);
    root->right->right->left->left = new Node(8);
    root->right->right->left->right = new Node(9);

    int hdis=0;
    map<int,vector<int>>map;    // this map will store hdis and vector of nodes 
    verticalTransverse(root,hdis,map);
    for(auto it=map.begin(); it!=map.end(); it++)
    {
        for(int i=0; i<(it->second).size(); i++)
        {
            cout<<(it->second)[i]<<" ";
        }
    }
    return 0;
}