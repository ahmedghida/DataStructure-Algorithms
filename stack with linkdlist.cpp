#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};
class stack{
    private:
        Node* header;
    public:
        stack(){
            header=NULL;

        }
        bool isempty(){
            return header==NULL;
        }
        void Push(int value){// add element in stack
            Node *newnode= new Node;
            newnode->data=value;
            if(isempty()){
                header=newnode;
                newnode->next=NULL;
            }else{
                newnode->next=header;
                header=newnode;
            }   
        }
        void pop(){// renmove element in the top 
            Node* temp=header; 
            if(isempty()){
                cout<<"sorry this operation can't be Done cuz there is no item in stack\n";
            }
            else{
                header=temp->next;
            }
        }
        void Print(){// Display all element in stack 
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
        void len(){// length||count  the elements in stack.
			Node* temp=header;
			int counter=0;
			while(temp!=NULL){
				counter++;
				temp=temp->next;
			}
			cout<<counter<<endl;
		}
        void find(int num){// seraching for element in stack.
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
        void peek(){// print the value of stack's top.
            Node *temp=header;
            cout<<"the value of the stack's top ="<<temp->data<<endl;
        }
};




int main(){
    stack s;
    cout<< s.isempty()<<endl;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    s.Push(50);
    s.Push(60);
    s.Print();
    s.pop();
    s.Print();
 return 0;
}