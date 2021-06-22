#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct mynode{
    int data;
    mynode* left;
    mynode* right;
    
}node;
int search(int in[],int l, int r, int val)
{
    for(int i=l; i<=r; i++)
    {
        if(val==in[i])
        {
            return i;
        }
    }
}

void buildTree(node** root, int in[],int post[], int l, int r, int size)
{
    if(l>r)
    return;

    static int i= size-1;
    if(i<0)
    return;
    int temp=post[i];
    i--;
    

    node* newnode= (node*)malloc(sizeof(node));
    newnode->data= temp;
    newnode->left=newnode->right=NULL;
    (*root)=newnode;
    int pos= search(in,l,r,temp);
     buildTree(&((*root)->right),in, post,pos+1,r,size);
     buildTree(&((*root)->left),in, post, l, pos-1,size);
}

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

int main()
{
    int post[]={1,2,4,5,3,7,9,8,6};
    int in[]={1,2,3,5,4,6,7,8,9};
    int size=sizeof(post)/sizeof(int);
    node* root;
    buildTree(&root,in, post,0,size-1,size);
    preorder(root);

    return 0;
}