// Find the odd occuring element in an array
//1:-All element occur even number of time,except one
//2:-All repeating occurance of element appear in pairs but pairs are not adjacent
//arr3[] = {1,1,2,2,3,3,4,4,3,6,6,4,4};
#include<iostream>
#include <vector>
using namespace std;

int solve(vector<int>arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(e==s){
            return s;
        }
        if(mid % 2 ==0){
            if(arr[mid]==arr[mid+1]){
                s = mid + 2;
            }
            else{
                e = mid;
            }
        }
        else{
            if(arr[mid]==arr[mid-1]){
                s = mid + 1;
            }
            else{
                e = mid-1;
            }
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main(){
    vector<int>arr{1,1,2,2,1,4,4};
    int ans = solve(arr);
    cout<<"Ans is "<<ans <<endl;
    cout<<"Value is "<<arr[ans]<<endl;
}