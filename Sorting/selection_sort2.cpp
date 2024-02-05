#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,8,6,3,4};
    for(int i=4;i>=1;i--){
        int index = i;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}