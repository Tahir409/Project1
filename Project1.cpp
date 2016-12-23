//EC-204 DS & OOP
//PC Tahir Mahmood
//MTS 37-B
//Project: Implementation of Splay Trees

/* Instructions 
 For my own convenenience, I have put the whole code into a single .cpp
 file. The code so far is of binary Trees and only add function is added so
 far. As I am studying more about rotations so, as soon as I'll study 
 those rules I'll be able to add the remaining two fuctions as well.
*/

#include <iostream>

using namespace std;

struct node{
	
	int item;
	node*left,*right;
};

class tree{
private:
       node *root;
public:
	  tree()
	  {
	  	root=NULL;
	  	left=NULL;
	  	right=NULL;
	  }		
	void insert(int a);
	void find();
	void remove();  
	
};


void class::insert(int a)
{
	if(root==NULL)
	{
		
			node *p= new node;
			p->item=a;
			p->left=p->right=NULL;
			root=p;
	}
	else
	{
		node *n=new node;
		n->left=n->right=NULL;
		node *temp1=root;
		node* temp2=NULL;
		
		while(temp1!=NULL)
		{
			if(temp1->item>a)   //Go to Left Side
			{
				temp2=temp1;
				temp1=temp1->left;
			}
			else                   //Go to Right       
			{
				temp2=temp1;
				temp1=temp1->right;
			}
			if(temp2->item<a)       //if a is less than parent then go to right
			{
				temp2->right=n;
			}
			else                   //if a is greater than parent then go to left
			{
				temp2->left=n;
			}
		}
	}
	
}


