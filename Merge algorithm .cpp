/*
Merge sort 2 arrays algorithm
*/

#include<iostream>
using namespace std;

int main(){
    
    int k[]={1,3,5,7};
    int z[]={2,4,6,8,9,10};
    int total_size=size(k)+size(z);
    int x[total_size];
    int l1=0,l2=0,l3=0;

    while(l1<size(k) && l2<size(z)){
        if(k[l1]<z[l2]){
            x[l3]=k[l1];
            l1++;

        }
        else{
            x[l3]=z[l2];
            l2++;
        }
        l3++;
    }
    while(l1<size(k)){
        x[l3]=k[l1];
        l1++;
        l3++;
    }
    while(l2<size(z)){
        x[l3]=z[l2];
        l2++;
        l3++;
    }

    cout<<"sorted array is:[";
    for(int i=0;i<total_size;i++){
        if(i==(total_size-1)){
            cout<<x[i]<<"]";
        }
        else{
            cout<<x[i]<<",";
        }
        } 
    return 0;} 