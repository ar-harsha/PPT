#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node* next;
	//constrctor
	node(int x){
		this->data = x;
		this->next =NULL;
	}
};

node* array2ll(vector<int> &arr){
	node* head = new node(arr[0]);
	node* temp = head;
	for(int i=1;i<arr.size();i++){
		node* n = new node(arr[i]);
		temp->next = n;
		temp = temp->next;
	}
	return head;
}

void display(node *head){
	node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<endl;
}

//////////////  ANSWER /////////////////

void alternate(node *p, node **q)
{
    node *p_curr = p, *q_curr = *q;
    node *p_next, *q_next;
 
    while (p_curr != NULL && q_curr != NULL)
    {
        p_next = p_curr->next;
        q_next = q_curr->next;

        q_curr->next = p_next;
        p_curr->next = q_curr;
 
        p_curr = p_next;
        q_curr = q_next;
    }
    *q = q_curr;
}

int main(){
	vector<int> v1{1,3,5,7,9};
	vector<int> v2{2,4,6,8,10};
	node* head1 = array2ll(v1);
	node* head2 = array2ll(v2);

	display(head1);
	display(head2);

	alternate(head1,&head2);
	display(head1); 
	display(head2);


	return 0;
}