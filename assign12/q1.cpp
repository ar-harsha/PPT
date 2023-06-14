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

//////////////  ANSWER ???????????????
void deletemid(node* &head,int size){
	int count=0;
	if(head==NULL || head->next==NULL) return;
	node* temp =head;
	while(temp!=NULL && temp->next!=NULL){
		count++;
		if(count==size/2){
			temp->next=temp->next->next;
		}
		temp = temp->next;
	}
}

int main(){
	vector<int> v1{1,2,3,4,5};
	node* head = array2ll(v1);
	// display(head);
	deletemid(head,v1.size());
	display(head);
	cout<<endl;
	vector<int> v2{2,4,6,7,5,1};
	node* head1 = array2ll(v2);
	deletemid(head1,v2.size());
	display(head1);
	return 0;
}