#include <iostream>
using namespace std;

class Node{
	public:	
		int data ;
		Node* next ;
};

class Queue{
    private:
        Node* front;
        Node* rear;
    public:
        Queue(){//Constructor
            front=rear=NULL;
        }
        bool isempty(){//check if is empty or not
			return (rear==NULL&&front==NULL);
		}
        void Enqueue(int value){// adding element to queue 
            Node* Newnode=new Node;
            Newnode->data=value;
            if(isempty()){
                front=rear=Newnode;
                Newnode->next=NULL;
            }
            else{
                rear->next=Newnode;
                rear=Newnode;
                Newnode->next=NULL;
            }
        }
        void Dequeue(){//removing element from Front of queue
            front=front->next;
        }
        void Display(){
            Node* temp=front;
            cout<<"[";
            while(temp!=NULL){

                if( temp==rear){
					cout<<temp->data<<"]"<<endl;}
				else{
					cout<<temp->data<<",";
				}
				temp=temp->next;
			}       
        }
        void peek(){//printing the frist elemnet in queue
            cout<<front->data;
        }
        void clear(){
            front=rear=NULL;
        }
        void Find(int value){
            Node* temp=front;
            int count=0;
            while(temp!=NULL){
                count++;
                if(temp->data==value){
                    cout<<"element founded in queue and index of it equal "<<count<<endl;
                }
                temp=temp->next;
            }
        }
        void len(){
            Node* temp=front;
            int conuter=0;
            while(temp!=NULL){
                conuter++;
                temp=temp->next;
            }

            cout<<"No of element inside queue is "<<conuter<<endl;
        }

};


int main(){

    Queue Q;
    Q.Enqueue(10);
    Q.Enqueue(20);
    Q.Enqueue(30);
    Q.Enqueue(40);
    Q.Enqueue(50);
    Q.Enqueue(70);
    Q.len();
    Q.Display();
    Q.Dequeue();
    Q.len();
    Q.Display();
    Q.Find(40);
    Q.clear();
    cout<<Q.isempty()<<endl;

return 0;
}