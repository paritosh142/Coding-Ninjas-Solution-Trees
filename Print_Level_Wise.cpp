void printLevelWise(TreeNode<int> *root)
{
    // Write your code here
    if (root->data == NULL)
        return;

    queue<TreeNode<int> *> newNodes;
    
    newNodes.push(root);

    while (newNodes.size() != 0)
    {
        TreeNode<int> *front = newNodes.front();
        newNodes.pop();
        cout << front->data << ":";
        for (int i = 0; i < front->children.size(); i++)
        {
            newNodes.push(front->children[i]);
            if (i == front->children.size() - 1)
                cout << front->children[i]->data;

            else
                cout << front->children[i]->data << ",";
        }

        cout << endl;
    }
}