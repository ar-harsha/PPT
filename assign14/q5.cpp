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
node* oddandeven(node* head) {
    node* ans=head;
	node* temp = head->next;
    node* odd=head,*even = head->next;
    while(odd && odd->next && even && even->next){
        odd->next = odd->next->next;
        even->next = even->next->next;
		odd = odd->next;

		even = even->next;
    }
    odd->next = temp;
	return ans;
}

int main(){
	vector<int> v1{1,2,3,4,5,6,7,8};
	node* head = array2ll(v1);
	display(head); 
    node* ans = oddandeven(head);
	display(ans); 

	return 0;
}