#include <iostream>
// #include <bits/stdc++.h>
#include <vector>

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

node* array2ll(vector<int> &arr,int n,int x){
	node* head = new node(arr[0]);
	node* temp = head;
	node* cycle;
	int count=0;
	for(int i=1;i<arr.size();i++){
		count++;
		if(count+1==x){
			cycle = temp;
		}
		node* n = new node(arr[i]);
		temp->next = n;
		temp = temp->next;
	}
	temp->next = cycle;
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
node* breakcycle(node *head) {

        node* slow = head;
        node* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;

            if(fast==slow)
            	break;
        }
        slow->next = NULL;
        return head;
    }

int main(){
	vector<int> v1{1,3,4,5,6,7,9};
	node* head = array2ll(v1,v1.size(),3);
	// display(head); // cant display because of infinte loop
	node* temp = breakcycle(head);
	display(temp); //can be displayable becasue cycle is broken

	return 0;
}