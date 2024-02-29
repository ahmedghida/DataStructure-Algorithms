/*
Selection sort algorithm
*/

#include<iostream>
using namespace std;

int main(){
    int index_min;
    int k[]={10,20,12,11,1,5,3,7,9};
    for(int i=0;i<(size(k));i++){
        int minmum=k[i];
        for(int j=i+1 ;j<size(k);j++){
            if(k[j]<minmum){
                minmum=k[j];
                index_min=j;
            }
        }
        int temp=k[i];
        k[i]=minmum;
        k[index_min]=temp;    
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