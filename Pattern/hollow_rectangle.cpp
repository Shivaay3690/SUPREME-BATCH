// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//     for(int row = 0; row < n ; row = row+1){
//             for(int col = 0; col < n ; col=col+1){
//                 if(row==0 || row==n-1 || col==0 || col == n-1){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//             }
//          cout<<endl;
//         }
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}