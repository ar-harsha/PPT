#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node* next;
	node* prev;
	//constrctor
	node(int x){
		this->data = x;
		this->next =NULL;
		this->prev =NULL;
	}
};

node* array2ll(vector<int> &arr){
	node* head = new node(arr[0]);
	node* temp = head;
	for(int i=1;i<arr.size();i++){
		node* n = new node(arr[i]);
		temp->next = n;
		n->prev = temp;
		temp = temp->next;
	}
	return head;
}

void display(node *head){
	node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"<->";
		temp = temp->next;
	}
	cout<<endl;
}


void deletepos(node* &head,int pos){
	node* cur = head,*temp = NULL;
	int count = 1;
	while(cur->next!=NULL && count!=pos){
		cur = cur->next;
		count++;
	}

	cur->prev->next = cur->next;
	if(cur->next != NULL)
		cur->next->prev = cur->prev;	

}

int main(){
	vector<int> v1{11,11,11,21,43,43,60};

	node* head1 = array2ll(v1);

	display(head1);
	deletepos(head1,7);
	display(head1);

	return 0;
}