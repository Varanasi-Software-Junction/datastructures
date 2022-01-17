#include<stdio.h>
#include<stdlib.h>
#define size 20//Max Size of Queue



typedef struct mynode{//Typedef for TreeNode
    int data;//Data of the node
  struct  mynode* left;//Left subtree
  struct  mynode* right;//Right subtree


} TreeNode;//define struct name

typedef struct stacknode
{
    int top;
    TreeNode* data[30];//data of the treenode
}Stack;
void sInit(Stack* st);
void push(Stack* st,TreeNode* root);
TreeNode* pop(Stack* st);
int sempty(Stack st);

typedef struct {//typedef for queue
    TreeNode* data[30];//data of the treenode
    int front;//first element in node
    int back;//second element in node
    int count;//count of total element
}Queue;//define struct name
void addNode(TreeNode** root,int data);
//Add a new node
void preOrder(TreeNode* root);
void preOrderStack(TreeNode* root);
//Pre Order traversal
void inOrder(TreeNode* root);
//In Order traversal
void postOrder(TreeNode* root);
//Post Order traversal
void deleteNode(TreeNode** root,int data);
//Delete Node
void init(Queue* root);
// this function is part of queue.
void enque(Queue* q,TreeNode* data);
//enque= Ensert the new Node in satack.
TreeNode* deque(Queue* q);
// deque= Exert the Node in stack.
int treeHeight(TreeNode* root);
//Find the tree height
int breathHeight(TreeNode* root);
// find the tree breath
int maxfind(int x,int y);
//find the max value in tree
int search(TreeNode* root,int data);
//serch element in Node
int count(TreeNode* root);
//count element in Node
int empty(Queue q);
// this function calld is Node iis NULL
void bfs(TreeNode* root);
// this function called is breeath first side
int main()
{
   TreeNode* root=NULL;
int choice,value;
int i=1;
Queue q;
init(&q);
while (1)
{
    printf("0-EXIT.1-INSERT,2-PRE,3-IN,4-POST,5-HEIGHT,6-DELETE,7-Search Node,8-count,9-BFS,10-Width,11-Stack Pre Order\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 0://this case use for end  proram
        return 0;
        break;
    case 1://this case use for creat insert case
        printf("Enter value to insert\n");
        scanf("%d",&value);
        addNode(&root,value);//function calling
        break;
    case 2://this case use for creat preorder case
        printf("\n");//creat new line
        preOrder(root);//fuction calling
        printf("\n");
        break;
    case 3://this case use for creat inorder case
        printf("\n");//create new line
        inOrder(root);//fuction calling
        printf("\n");
        break;
    case  4://this case use for creat postorder case 
        printf("\n");
        postOrder(root);//function calling
        printf("\n");
        break;
    case  5://this function use for creat TreeHeight
        printf("\n");
        printf("Height=%d",treeHeight(root));//fuction calling
        printf("\n");
        break;
    case  6://this function use for deletNode
        printf("\nEnter value to delete\n");
        scanf("%d",&value);
        deleteNode(&root,value);//fuction calling
        break;
    case 7://this function use for serch node 
        printf("\nEntre the search Node\n");
        scanf("%d",&value);
        printf("Search=%d\n",search (root,value));
        break;
    case 8://this function use for count node
        printf("count=%d\n",count(root));
        break;
    case 9:
        bfs(root);//function calling
        break;
    case 10://this function use for create maxbreadth in Tree graph
        printf("Breadth=%d\n",breathHeight(root));
        break;

    case 11://Stack Preorder
        preOrderStack(root);
        break;
//1,10,5,20,4,30,6

    
    default:
        break;
    }
}

    return 0;
}


void sInit(Stack* st)
{
    st->top=-1;
}
void push(Stack* st,TreeNode* root)
{
    if( st->top>=size-1)
    {
        printf("Stack is full\n");
        return;

    }
    st->top++;
    st->data[st->top]=root;

}
TreeNode* pop(Stack* st)
{
    TreeNode* root;
    if(st->top<0)
    {
        printf("Stack is empty\n");
        return NULL;
    }
    root=st->data[st->top];
    st->top--;
    return root;

}
int sempty(Stack st)
{
    if(st.top<0)
    return 1;
    return 0;
}









void inOrderStack(TreeNode* root)
{
    Stack st;
 if(root==NULL)
 return;
sInit(&st);
push(&st,root);
printf("\n");
while (1)
{
    if(sempty(st))
    break;
    root=pop(&st);
    printf("%d,",root->data);
    while (root!=NULL)
    {
        
        if(root!=NULL)
        push(&st,root);
        root=root->left;
    }
    }
printf("\n");
}






void preOrderStack(TreeNode* root)
{
    Stack st;
 if(root==NULL)
 return;
sInit(&st);
push(&st,root);
printf("\n");
while (1)
{
    if(sempty(st))
    break;
    root=pop(&st);
    while (root!=NULL)
    {
        printf("%d,",root->data);
        if(root->right!=NULL)
        push(&st,root->right);
        root=root->left;
    }
    }
printf("\n");
}







void bfs(TreeNode* root)//function name
{//function body
    Queue q;    //deffination section
    if(root==NULL)
    return;
    init(&q);
    enque(&q,root);
    printf("\n");
    while (!empty(q))//condition  
    {
        root=deque(&q);
        printf("%d,",root->data);
        if(root->left!=NULL)//condition section
        enque(&q,root->left);//serch node left
        if(root->right!=NULL)//condition section
        enque(&q,root->right);//serch node right

    }
    printf("\n");//create new line
}

void init(Queue* q)
{
    q->back=0;
    q->count=0;
    q->front=0;
}
void enque(Queue* q,TreeNode* data)
{
    if(q->count>=size)//condition, queue is over flow
    {
        printf("Queue is full\n");//so print this
        return;
    }
    q->back=(q->back + 1) % size;//we inserting value in the back
    q->count++;
    q->data[q->back]=data;
}
TreeNode* deque(Queue* q)
{
    if(q->count<=0)//condition,queue is null
    {
        printf("Queue is Enpty\n");//so print this
        return NULL;
    }
    q->front=(q->front + 1) % size;//we simply decresing front value
    q->count--;
   return q->data[q->front];
}
int empty(Queue q)
{
    if(q.count<=0)
    return 1;
    return 0;

}
int treeHeight(TreeNode* root)
{
    if(root==NULL)
    return 0;
    else 
    return 1 + maxfind(treeHeight(root->left),treeHeight(root->right));//create a node
}
int breathHeight(TreeNode* root)
{
    Queue q;
    int max=0;
    if(root==NULL)
    return 0;
    init(&q);
    enque(&q,root);
    while (!empty(q))
    {
        if(q.count>max)
        max=q.count;
        root=deque(&q);
        if(root->left!=NULL)
        enque(&q,root->left);
        if(root->right!=NULL)
        enque(&q,root->right);

    }
    
    return max;
}
int maxfind(int x,int y)
{
    if(x>=y)
    return x;
    else 
    return y;

}
int search(TreeNode* root,int data)
{
    
    if(root==NULL)
    return 0;
    if(root->data==data)
    return 1;
    if(data<=root->data)
    return search(root->left,data);
    else 
    return search(root->right,data);
}
int count(TreeNode* root)
{
    if(root==NULL)
    return 0;
    else
    return 1 + count(root->left)+count(root->right);
    
    
}
void deleteNode(TreeNode** root,int data)
{
    
    TreeNode* rightnode;
    TreeNode* nodetodelete;
    if(*root==NULL)
    return;
    if(data<(*root)->data)
    {
        deleteNode(&(*root)->left,data);
        return;
    }
        if(data>(*root)->data)
    {
        deleteNode(&(*root)->right,data);
        return;
    }
    nodetodelete=*root;
    if(nodetodelete->left==NULL&& nodetodelete->right==NULL)
    {
        *root=NULL;
        free(nodetodelete);
        return;
    }
    if(nodetodelete->left==NULL)
    {

        *root=nodetodelete->right;
        free(nodetodelete);
        return;
    }
if(nodetodelete->right==NULL)
    {

        *root=nodetodelete->left;
        free(nodetodelete);
        return;
    }
rightnode=nodetodelete->right;
*root=nodetodelete->left;
TreeNode* temp=*root;
while (temp->right!=NULL)
{
    temp=temp->right;
}
temp->right=rightnode;
}
void postOrder(TreeNode* root)//Post order traversal.  Left, right and node
{
    if(root==NULL)
    return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d,",root->data); 
}
void inOrder(TreeNode* root)//In order traversal.  Left, node and right
{
    if(root==NULL)
    return;
    inOrder(root->left);
    printf("%d,",root->data);    
    inOrder(root->right);
}
void preOrder(TreeNode* root)//Pre order traversal. Node, left and right
{
    if(root==NULL)
    return;
    printf("%d,",root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void addNode(TreeNode** root,int data)
{
    TreeNode* temp;//Temp pointer to hold the new node
    if(*root==NULL)//Root aka current pointer is null. Insert here
    {
        temp=(TreeNode*)malloc(sizeof(TreeNode));//Allocate memory for the node. It will always be a leaf node. So, set left and right to null
        temp->left=NULL;
        temp->right=NULL;
        temp->data=data;//Assign the data
        *root=temp;
        return;//Task done. End the function
    }
    if(data<=(*root)->data)
    {
        addNode(&(*root)->left,data);//New data is less than data at root. Go left
    }
    else //New data is more than data at root. Go right
    {
        addNode(&(*root)->right,data);
    }

}