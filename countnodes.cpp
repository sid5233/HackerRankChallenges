#include<iostream>
using namespace std;

int i=1;

struct node
{
	int data;
	node* left;
	node* right;
};

struct node* addnode(int data)
{
	node* newNode=new node();
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

struct node* add(struct node* root, int data)
{
	if (root == NULL)
		return addnode(data);
	
	if (data < root->data)
		root->left  = add(root->left, data);
	else if (data > root->data)
		root->right = add(root->right, data);

	return root;
}


int count(node*root)
{
	if(root==NULL)
		return 0;
	if(root->left!=NULL)
	{
		i=i+1;
		i=count(root->left);
	}
	if(root->right!=NULL)
	{
		i=i+1;
		i=count(root->right);
	}
	return i;
}

int main()
{
    int temp,a=0;
    struct node *ptr =NULL;

    do{
        scanf("%d", &temp);
        ptr = add( ptr, temp);
        a++;
    }while(a<5);
    printf("Total No. of Nodes in the BST = %d ",count(ptr));

    return 0;
}