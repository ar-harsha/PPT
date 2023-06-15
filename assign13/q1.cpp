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

node* greater_ll(node* h1,node* h2){
	node* head= new node(max(h1->data,h2->data));
	h1 = h1->next;
	h2 = h2->next;
	node* temp = head;
	while(h1!=NULL && h2!=NULL){
		temp->next = new node(max(h1->data,h2->data));
		temp = temp->next;
		h1 = h1->next;
		h2 = h2->next;
	}
	return head;
}

int main(){
	vector<int> v1{5,2,3,8};
	vector<int> v2{1,7,4,9};

	node* head1 = array2ll(v1);
	node* head2 = array2ll(v2);

	display(head1);
	display(head2);

	node* newhead;
	newhead = greater_ll(head1,head2);
	display(newhead);
	return 0;
}