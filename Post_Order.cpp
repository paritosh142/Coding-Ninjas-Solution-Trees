// void printPostOrder(TreeNode<int>* root) {
//     // Write your code here
    
//     if(root  ==  NULL)
//     {
//         return;
//     }
    
// //     if(root -> children.size() == 0)
// //     {
// // //         
// //     }
    
    
//     for(int i = 0 ; i < root -> children.size() ; i++)
//     {
        
//         if(root -> children.size() == 0)
//         {
//             cout<<root -> children[i] -> data <<" ";
//         }
        
//         printPostOrder(root -> children[i]);
//     }
// }

void printPostOrder(TreeNode<int>* root) {
    // Write your code here
    
    
    for(int i=0;i<root->children.size();i++)
    {
        printPostOrder(root->children[i]);
        
    }
    cout<<root->data<<" ";

}