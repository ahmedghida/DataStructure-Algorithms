#include<iostream>
using namespace std;

const int  Max_size=100;
class stack{
    private:
        
        int Counter=-1;
        int array[Max_size];
    public:
        void push(int element){
            Counter++;
            array[Counter]=element;
        }
        void pop(){
            Counter--;
            cout<<"item Deleted\n";

        }
        void print(){
            if(Counter<0){
                cout<<"sorry No element in the stack plz push some element:)\n";
            }
            else{
                cout<<"The stack: "<<"[";
                for(int i=Counter;i>=0;i--){
                    if(i==0){
                        cout<<array[i]<<']';
                    }
                    else{
                        cout<<array[i]<<',';
                    }
                }
            }

        }
};

int main(){
    stack s;
    s.push(20);
    s.push(10);
    s.push(40);
    s.push(80);
    s.push(90);
    s.pop();
    s.print();
    return 0;
}