#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int partion(int arr[],int L,int R){
    int i=L,j=R,pivot=i;
    while (true)
    {
        while(arr[pivot]<=arr[j] && pivot !=j){
            j--;
        }
        if(pivot==j){
            break;
        }
        else if(arr[pivot]>=arr[j]){
            swap(arr[pivot],arr[j]);
            pivot=j;
        }
        while(arr[pivot]>=arr[i] && pivot !=i){
            i++;
        }
        if(pivot==i){
            break;
        }
        else if(arr[pivot]<arr[i]){
            swap(arr[pivot],arr[i]);
            pivot=i;
        }

    }
    return pivot;
}

void quick_sort(int arr[],int L,int R){
    if(L<R){
        int pivot=partion(arr,L,R);
        quick_sort(arr,L,pivot-1);//left side
        quick_sort(arr,pivot+1,R);
    }
}

void display(int arr[],int s){
    cout<<"sorted array : [";
    for(int i=0;i<s;i++){
        if(i==s-1){
            cout<<arr[i]<<"]";
        }else{
            cout<<arr[i]<<",";
        }
    }
}

int main(){
    int a[]={3,5,1,8,6,4,2,7};
    quick_sort(a,0,(size(a)-1));
    display(a,size(a));
    

    return 0;
}