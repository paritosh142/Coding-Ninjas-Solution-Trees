int getLeafNodeCount(TreeNode<int>* root) {
    // Write your code here
    
    if(root == NULL)
    {
        return 0;
    }
    
    int temp_sol = 0;
    
    if(root -> children.size() == 0)
    {
        return 1;
    }
    
    for(int i  = 0 ; i < root -> children.size() ; i++)
    {
        temp_sol += getLeafNodeCount(root -> children[i]);
    }
    
    
    return temp_sol;
}