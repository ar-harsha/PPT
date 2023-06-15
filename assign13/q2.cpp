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

void duplicates(node* &h){
	node* temp = h;
	while(temp->next!=NULL){
		int cur = temp->data;
		while(temp->next->data == cur){
			temp->next = temp->next->next;
		}
		temp = temp->next;
	}
	// return h;
}

int main(){
	vector<int> v1{11,11,11,21,43,43,60};

	node* head1 = array2ll(v1);

	display(head1);

	duplicates(head1);
	display(head1);
	return 0;
}