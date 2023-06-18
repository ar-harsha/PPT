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

vector<int> nexttgreater(node* head) {
    node* cur = head;
    stack<int> s;
    vector<int> ans;
    s.push(head->data);
    while(cur){
        cur=cur->next;
        if(s.empty()){
            s.push(cur->data);
            continue;
        }
        while(!s.empty() && s.top() < cur->data){
            cout<<s.top()<<"->"<<cur->data<<endl;
			s.pop();
        }
		s.push(cur->data);
		// cur = cur->next;
    }
	while(!s.empty()){
		cout<<s.top()<<"->"<<-1<<endl;
		s.pop();
	}
	return ans;

}

int main(){
	vector<int> v1{6, 8, 0, 1, 3};
	node* head = array2ll(v1);
	display(head); 
    vector<int> ans = nexttgreater(head); 
	for(auto i:ans){
		cout<<i<<" ";
	}
	return 0;
}