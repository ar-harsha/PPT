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
void mandndelete(node* &head,int m,int n) {
	node* cur = head,*temp;
	int count;
	while(cur){
		//skip
		for(count=1;count<m && cur!=NULL;count++){
			cur=cur->next;
		}
		if(cur==NULL) return;
		temp = cur->next;
		for(count=1;count<=n && temp!=NULL;count++){
			temp = temp->next;
		}
		cur->next = temp;
		cur = temp;
	}
}

int main(){
	vector<int> v1{1,2,3,4,5,6,7,8};
	node* head = array2ll(v1);
	display(head);
	mandndelete(head,2,2);
	display(head); 

	return 0;
}