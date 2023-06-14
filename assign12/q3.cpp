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
int findnth(node* &head,int x){
	int count=0;
	node* temp =head;
	while(temp->next!=NULL){
		count++;
		temp = temp->next;
	}
	count++; //size of LL
	temp = head;
	while(temp->next!=NULL){
		if(count==x) return temp->data;
		count--;
		temp = temp->next;
	}
	return -1;
}

int main(){
	vector<int> v1{1,2,3,4,5,6,7,8,9};
	node* head = array2ll(v1);
	display(head);
	cout<<findnth(head,2)<<endl;
	cout<<endl;
	vector<int> v2{2,4,6,7};
	node* head1 = array2ll(v2);
	display(head1);
	cout<<findnth(head1,5)<<endl;
	// display(head1);
	return 0;
}