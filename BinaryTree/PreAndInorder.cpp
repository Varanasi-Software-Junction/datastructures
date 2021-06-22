#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct mynode{
    int data;
    mynode* left;
    mynode* right;
} node;
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
void buildTree(node** root,int in[],int pre[],int l, int r,int size)
{
    //if(l>r)
    //return;
    
    static int i=0;
    if(i>=size)
    return;
   // if((*node)==NULL)
    int temp= pre[i];
    i++;
    //{
        node* newnode= (node*)malloc(sizeof(node));
        newnode->data= temp;
        newnode->left=newnode->right=NULL;
        (*root)=newnode;
       
   // }
    int pos =search(in,l,r,pre[i]);
    //int pos2 = search(in,l,r,pre[i+1]);
   
        buildTree(&((*root)->left),in, pre,l,pos-1,size);
    
       buildTree(&((*root)->right),in, pre,pos+1,r,size);

     //  return newnode;
    

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

    int in[]={3,4,6,9};
    int size=sizeof(in)/sizeof(int);
    int pre[]={6,4,3,9};
    node*root;
    int i=0;
    buildTree(&root,in,pre,0,4,size);
    preorder(root);

    return 0;
}