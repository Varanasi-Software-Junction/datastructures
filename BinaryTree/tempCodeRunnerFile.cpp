void preorder(node* root)
{
    if(root==NULL)
    {
        //cout<<"endl";
        return;
    }

    cout<<root->data<<",";
    preorder(root->left);
    preorder(root->right);
}