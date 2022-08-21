#include<bits/stdc++.h>

int getHeight(TreeNode<int>* root)
{
    // Write your code here
    
    // initilly
    
    int temp_height = 1 ;
    
    if(root -> children.size() == 0)
    {
        return temp_height;
    }
    
    int arr[root -> children.size()];
    
    for(int i  = 0 ; i < root -> children.size() ; i++)
    {
        arr[i] =  getHeight(root -> children[i]);
    }
    
    sort(arr, arr+ root -> children.size() ,greater<int>());
    
    temp_height += arr[0] ; 
    
    
    return temp_height;
}