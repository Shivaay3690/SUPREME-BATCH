#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,5,7,1};
    int size=6;
    int key=7;
    for(int i=0;i<6;i++){
        if(arr[i]==key){
            cout<<"Key found"<<endl;
            break;
        }
        cout<<"Key not found"<<endl;
    }
    
    return 0;
}