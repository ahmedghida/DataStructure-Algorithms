#include<iostream>
using namespace std;

int linear_search(int arr[],int size,int value){
    for(int i=0;i<size;i++){
        if(arr[i]==value){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[]={20,10,5,8,2,6,0,1,12};
    int result=linear_search(arr,size(arr),12);
    if(result==1){
        cout<<"the value found in array\n";
    }else{
        cout<<"the value hasn't found in array\n";
    }

    result=linear_search(arr,size(arr),3);
    if(result==1){
        cout<<"the value found in array\n";
    }else{
        cout<<"the value hasn't found in array\n";
    }
}