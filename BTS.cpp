#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* right;
        Node* left;
    Node(int value){
        data=value;
        right=left=NULL;
    };
};

class BTS{
    public:
    Node* root;
    BTS(){
        root=NULL;
    }
    Node* insert(Node* ptr,int item){
        if(ptr==NULL){
            Node* newnode= new Node(item);
            ptr=newnode;
        }
        else if(item<ptr->data){
            ptr->left=insert(ptr->left,item);
        }else{
            ptr->right=insert(ptr->right,item);
        }
        return ptr;
    }
    void insert(int item){//overloading
        root=insert(root,item);
    }
    void Preorder(Node* ptr){//root->left->right
        if(ptr==NULL){
            return;
        }
        else{
            cout<<ptr->data<<"\t";
            Preorder(ptr->left);
            Preorder(ptr->right);

        }
    }
    void Preorder(){
        Preorder(root);
    }

    void Inorder(Node* ptr){//left->root->right
        if(ptr==NULL){
            return;
        }
        else{
            Inorder(ptr->left);
            cout<<ptr->data<<"\t";
            Inorder(ptr->right);

        }
    }
    void Inorder(){
        Inorder(root);
    }


    Node* search(Node* ptr,int value){
        if(ptr==NULL){
            return 0;
        }
        else if(ptr->data==value){
            return ptr;
        }
        else if(value<ptr->data){
            return search(ptr->left,value);
        }
        else{
            return search(ptr->right,value);
        }
    }

    void search(int value){
        Node* result=search(root,value);
        if(result == NULL){
            cout<<"the data not founded";
        }else{
            cout<<"the data founded in tree";
        }
    }

    Node* find_min(Node* ptr){
        if(ptr==NULL){
            return 0;
        }
        else if(ptr->left==NULL){
            return ptr;
        }
        else {
            return find_min(ptr->left);
        }
    }
    void find_min(){
        Node* min=find_min(root);
        cout<<"minmum is "<<min->data<<endl;
    }

    Node* find_max(Node* ptr){
        if(ptr==NULL){
            return 0;
        }
        else if(ptr->right==NULL){
            return ptr;
        }
        else {
            return find_max(ptr->right);
        }
    }
    void find_max(){
        Node* max=find_max(root);
        cout<<"maxmium is "<<max->data<<endl;
    }

    Node* Delete(Node* ptr,int value){
        if(ptr==NULL){
            return 0;
        }
        else if(value<ptr->data){
            return Delete(ptr->left,value);
        }
        else if(value>ptr->data) {
            return Delete(ptr->right,value);
        }
        else{
            if (ptr->left==NULL && ptr->right==NULL)
            {
                ptr=NULL;
            }
            else if(ptr->left!=NULL && ptr->right==NULL){//node has 1 child at left
                ptr->data=ptr->left->data;
                delete ptr->left;
                ptr->left=NULL;
            }
            else if(ptr->left==NULL && ptr->right!=NULL){//node has 1 child at right
                ptr->data=ptr->right->data;
                delete ptr->right;
                ptr->right=NULL;
            }
            else{//its a subtree 
                Node*max=find_max(ptr->left);
                ptr->data=max->data;
                ptr->left=Delete(ptr->left,max->data);
            }

            return ptr;
        }
    }
    void Delete(int value){
        Node* result=search(root,value);
        if(result==NULL){
            cout<<"item Not founded in tree \nplease make sure that you enter that element\n";
        }
        else{
            Node* ptr=Delete(root,value);
            cout<<"element is Deleted from the tree \n";
        }
    }

};

int main(){
    BTS P;
    P.insert(45);
    P.insert(14);
    P.insert(79);
    P.insert(90);
    P.insert(55);
    P.insert(12);
    P.insert(20);
    P.insert(50);
    
    P.Preorder();
    cout<<"\n=============================================\n";
    P.Inorder();
    cout<<"\n=============================================\n";
    P.search(12);
    cout<<"\n=============================================\n";
    P.search(1);
    cout<<"\n=============================================\n";
    P.find_min();
    cout<<"=============================================\n";
    P.find_max();
    cout<<"=============================================\n";
    P.Delete(14);
    cout<<"=============================================\n";
    P.Delete(14);
    cout<<"=============================================\n";



    return 0;
}