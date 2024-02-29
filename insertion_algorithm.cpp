/*
Insertion sort sort algorithm
*/

#include<iostream>
using namespace std;

int main(){
    int k[]={10,20,13,15,12,11,16,19,18,14,17,28,21,23,27,22,25,24,26};
    for(int i=1;i<(size(k));i++){
        int z=i;
        for(int j=i-1;j>=0;j--){
            if(k[z]<k[j]){
                int temp=k[z];
                k[z]=k[j];
                k[j]=temp;
                z-=1;
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