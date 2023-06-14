#include <iostream>
#include <bits/stdc++.h>
#include <deque>

using namespace std;

struct node{
	char data;
	node* next;
	//constrctor
	node(char x){
		this->data = x;
		this->next =NULL;
	}
};

node* array2ll(vector<char> &arr){
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
bool ispal(node* &head){
	node* temp =head;
	deque<char> dq;
	while(temp->next!=NULL){
		dq.push_back(temp->data);
		temp = temp->next;
	}
	dq.push_back(temp->data);

	deque<char>::iterator it1,it2;
	for(it1 = dq.begin(),it2=dq.end()-1;it1!=it2;it1++,it2--){
		if(*it1!=*it2) return false;
	}
	
	return true;
	
}

int main(){
	vector<char> v1{'r','a','d','a','r'};
	node* head = array2ll(v1);
	display(head);
	cout<<ispal(head)<<endl;
	cout<<endl;
	vector<char> v2{'c','0','o','c'};
	node* head1 = array2ll(v2);
	display(head1);
	cout<<ispal(head1)<<endl;
	return 0;
}