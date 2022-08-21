int sumOfNodes(TreeNode<int>* root) {
    // Write your code here
    
    int sum  = root->data;
    
    for(int i = 0 ; i < root -> children.size() ; i++)
    {
        sum = sum + sumOfNodes(root -> children[i]);
    }
    
    return sum ;
}