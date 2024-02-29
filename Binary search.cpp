#include<iostream>
using namespace std;

int Binary_search(int arr[],int L,int R,int value){
    
    if(L<=R){
        int m=L+(R-L)/2;
        if(value==arr[m]){
            return m;
        }
        else if(value>arr[m]){
            return Binary_search(arr,m+1,R,value);
        }
        else if(value<arr[m]){
            return Binary_search(arr,L,m-1,value);
        }
    }
    else{
        return -1;
    }
}


int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int result=Binary_search(a,0,18,3);
    if(result==-1){
        cout<<"not founded\n";
    }
    else{
        cout<<"item founed and the index ="<<result<<endl;
    }
    result=Binary_search(a,0,18,20);
    if(result==-1){
        cout<<"not founded\n";
    }
    else{
        cout<<"item founed and the index ="<<result<<endl;
    }


    return 0;
}