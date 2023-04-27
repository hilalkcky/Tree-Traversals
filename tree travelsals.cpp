#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct node{
	int data;
	node*left;
	node*right;
};

node*tree=NULL;
node*add(node*tree,int x) //add elemnt
{
	if (tree==NULL)
	{
		node*root=(node*)malloc(sizeof(node));
		root->left=NULL;
		root->right=NULL;
		root->data=x;
		return root;
		
	}
	if(tree->data<x)
	{
		tree->right=add(tree->right,x);
		return tree;
	}
	tree->left=add(tree->left,x);
	return tree;
}
void inorder(node*tree) //print tree(inorder)
{
	if (tree==NULL)
	return ;
	inorder(tree->left);
	cout<<tree->data<<endl;
	inorder(tree->right);
	
}
void preorder(node*tree) //print tree (preorder)
{
	if (tree==NULL)
	return;
	cout<<tree->data<<endl;
	preorder(tree->left);
	preorder(tree->right);
}
void postorder(node*tree)
{
	if(tree==NULL)
	return;
	postorder(tree->left);
	postorder(tree->right);
	cout<<tree->data<<endl;
	
}

int main()
{
	node*tree=NULL;
	tree=add(tree,12);
	tree=add(tree,200);
	tree=add(tree,5);
	tree=add(tree,4);
	tree=add(tree,96);
	tree=add(tree,100);
	inorder(tree);
	cout<<"********"<<endl;
	preorder(tree);
	cout<<"**********"<<endl;
	postorder(tree);
	cout<<"**********"<<endl;
	
}
