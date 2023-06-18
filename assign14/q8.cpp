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

node* consecutivedelete(node* &head) {
    node* cur = head,*ans = new node(0);
    ans->next = head;
    unordered_map<int,node*> map;
    int sum =0;
    map[sum] = head;
    while(cur){
        sum+=cur->data;
        if(map.find(sum)==map.end()){
            map[sum]=cur;
        }
        else{
            cur = map[sum]->next;
            int p = sum + cur->data;
            while (p != sum) {
                    map.erase(p);
                    cur = cur->next;
                    p += cur->data;
                }
            map[sum]->next = cur->next;
            
        }
        cur = cur->next;
    }
    return ans->next;
}

int main(){
	vector<int> v1{1,2,-3,3,1};
	node* head = array2ll(v1);
	display(head); 
    node* ans = consecutivedelete(head); 
	display(ans); 
	return 0;
}