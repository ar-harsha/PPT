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
int add1(node *head) {
    node* slow=head;
    queue<int> q;
    int ans =0;
    while(slow){
        q.push(slow->data);
        slow = slow->next;
    }
    while (!q.empty())  
    {
        ans *= 10;
        ans +=q.front();
        q.pop();
    }
    
    return ans+1;
}

int main(){
	vector<int> v1{5,6,7,8};
	node* head = array2ll(v1);
	display(head); 
    int ans = add1(head);
    cout<<ans<<endl;
	return 0;
}