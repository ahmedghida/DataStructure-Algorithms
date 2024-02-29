/*
Merge sort algorithm
*/

#include<iostream>
using namespace std;

void merge(int arr[],int L,int R){
    // L-->left is the start of the array *index 0*
    // R--> right is the last of the array *index -1 *
    int m=L+(R-L)/2; // M---> is the varriable to divide the array into 2 right array and left array
    int n1=m-L+1; //n1 --> size of left array
    int n2=R-m; //n2 --> size of right array
    int* a=new int[m+1];
    int* b=new int[R-m];

    for(int i=0;i<n1;i++){ //left array
        a[i]=arr[L+i];
    }
    for(int i=0;i<n2;i++){//Right array 
        b[i]=arr[m+1+i];
    }
    int l1=0,l2=0,l3=L;
    // merging the 2 arrays to get final one:
    while(l1<n1 && l2<n2){
        if(a[l1]<=b[l2]){
            arr[l3]=a[l1];
            l1++;

        }
        else{
            arr[l3]=b[l2];
            l2++;
            
        }
        l3++;
    }
    while(l1<n1){
        arr[l3]=a[l1];
        l1++;
        l3++;
    }
    while(l2<n2){
        arr[l3]=b[l2];
        l2++;
        l3++;
    }
}


void merg_sort(int arr[],int L, int R){

    if(L<R){
        int m= L+(R-L)/2;
        merg_sort(arr,L,m);
        merg_sort(arr,m+1,R);
        merge(arr,L,R);
    }
}

int main(){
    int k[]={1,3,2,6,5,8,7,10,4};
    merg_sort(k,0,(size(k)-1));

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