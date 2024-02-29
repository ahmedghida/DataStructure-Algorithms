#include<iostream>
using namespace std;

class Node{

	public:	
		int data ;
		Node* next ;
};

class linkdlist{
	Node* header;
	public:
		linkdlist(){
			header=NULL;
		}
		bool isempty(){
			return header==NULL;
		}
		void insert_frist(int value){
			Node* newnode = new Node; // Allocate memory for the new node
			newnode->data=value;
			if(isempty()){
				newnode->next=NULL;
				header=newnode;
				
			}
			else{
				newnode->next=header;
				header=newnode;
				
			}
		}
		void Print(){
			Node* temp=header;
			cout<<'[';
			while(temp!=NULL){
				
				if(temp->next==NULL){
					cout<<temp->data<<"]"<<endl;}
				else{
					cout<<temp->data<<",";
				}
				temp=temp->next;
			}
		}
		void len(){
			Node* temp=header;
			int counter=0;
			while(temp!=NULL){
				counter++;
				temp=temp->next;
			}
			cout<<counter<<endl;
		}
		void find(int num){
			Node* temp=header;
			int counter=0;
			while(temp!=NULL){
				counter ++;
				if(temp->data==num){
					cout<<"number is founded inside linkdlist and the index ="<<counter<<endl;
				}
				temp=temp->next;
			}

		}
		void insert_before(int find,int value){
			Node* temp=header;
			Node* newnode = new Node;
			while(temp!=NULL && temp->next->data !=find ){
				temp=temp->next;
			}
			newnode->data=value;
			newnode->next=temp->next;
			temp->next=newnode;
		}
		void append(int value){
			Node* temp=header;
			Node* newnode = new Node;
			while(temp->next !=NULL){
				temp=temp->next;
			}
			newnode->data=value;
			temp->next=newnode;
			newnode->next=NULL;
		}


};



int main() {
	linkdlist a;

	a.insert_frist(30);
	a.insert_frist(20);
	a.insert_frist(10);
	a.append(40);
	a.append(60);
	a.Print();
	a.insert_before(60,50);
	a.Print();

	//cout<<endl;
	return 0;
}