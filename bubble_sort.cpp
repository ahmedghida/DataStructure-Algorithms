/*
Bubble sort algorithm
*/

#include<iostream>
using namespace std;

/*int swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    return a,b; 
}*/

int main(){
    int k[]={5,2,4,3,1,9,8,6,7};
    for(int i=0;i<(size(k));i++){
        for(int j=1;j<size(k);j++){
            if(k[j-1]>k[j]){
                int temp=k[j-1];
                k[j-1]=k[j];
                k[j]=temp;

            }
        }
    }
    cout<<"sorted array is:[";
    for(int i=0;i<size(k);i++){
        if(i==(size(k)-1)){
            cout<<k[i]<<"]";
        }
        else{
            cout<<k[i]<<",";
        }
        } 
return 0;} 