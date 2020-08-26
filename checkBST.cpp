#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int n=1;

class node
{
    public:
    int data;
    node * left;
    node * right;
};

 node *createnode(int input)
{
    node *temp=new node();
    temp->data=input;
    temp->left=NULL;
    temp->right=NULL;
    return temp;

}

node *insertnode(struct node *root,int input)
{
    if(root == NULL)
    {
        return createnode(input);
    }
    if(input < root->data)
    {
        root->left = insertnode(root->left ,input);
    }
    if(input > root->data)
    {
        root->right = insertnode(root->right ,input);
    }
    return root;
}
int CheckBst(node* root,int &prev){

    if(root==NULL)
        return 1;
    if(!(CheckBst(root->left,prev)))
        return 0;
    if(root->data<prev)
        return 0;

    prev=root->data;

    return CheckBst(root->right,prev);
}
int main()
{
    int i;
    int tmp,a=0;
    int prev=INT_MIN;
    node *ptr =NULL;
    

   do{
       // cout << " Enter Number to be inserted : ";
        scanf("%d",&tmp);
        ptr=insertnode(ptr,tmp);
        a++;
    }while(a<5);
    printf("Tree is built like the example 1 aforesaid \n");
    printf("builting the binary tree like example 1......\n");
    i=CheckBst(ptr,prev);
    if(i)
    printf("This binary tree is binary search tree \n");
    else
    printf("This is not a binary search tree");
    return 0;
}