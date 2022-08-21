TreeNode<int>* maxDataNode(TreeNode<int>* root)
{
    
     TreeNode<int>* max = new TreeNode<int>(root->data);
    
    for(int i = 0 ; i < root -> children.size() ; i++)
    {
        TreeNode<int>* child =  maxDataNode(root -> children[i] );
        
        
        if(child->data > max -> data)
        {
            max = child;
        }
    }
    
    return max;
}
