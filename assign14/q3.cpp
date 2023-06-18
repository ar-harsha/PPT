/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
Node* merge(Node *h2,Node *h1){
    if(h1==NULL) return h2;
    if(h2==NULL) return h1;
    
    Node *ans = NULL;
    if(h1->data < h2->data){
        ans = h1;
        ans->bottom = merge(h1->bottom,h2);
    }
    else{
        ans = h2;
        ans->bottom = merge(h1,h2->bottom);
    }
    return ans;
    
}
Node *flatten(Node *root)
{
   // Your code here
   if(!root || !root->next) return root;
   root->next = flatten(root->next);
   root = merge(root,root->next);
   return root;
   
}