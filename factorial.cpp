
/*factorial task
using recurstion funcation*/

#include <iostream>
using namespace std;

int factorial(int num){

    //case
    if(num==1){
        return 1;
    }
    //base
    else{
        return num*factorial(num-1);
    }

}
int main(){
    int num;
    cout<<"Enter Number To Get the Factorial Of it \n";
    cin>> num;
    int result=factorial(num);
    cout<<"The Result of Factorial is :"<<result;
    return 0;
}