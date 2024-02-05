#include<iostream>
using namespace std;
int main(){
    int arr[5]={7,4,8,1,5};
    for(int i=3;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}

//  #include<iostream>
// using namespace std;
// int main(){
//     int n=345,b,sum=0;
//     // cout<<"Enter number";
//     // cin>>n;
//     while(n>0){
//         b=n%10;
//         sum=sum*10+b;
//         n=n/10;
//     }
//     cout<<sum<<" ";
//     return 0;
// }