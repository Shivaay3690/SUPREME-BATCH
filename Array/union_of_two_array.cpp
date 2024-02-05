#include<iostream>
#include<vector>
using namespace std;
int main(){
int arr[]={1,3,5,7,9};
int sizea = 5;
int brr[] = {2,3,5,4,6,8};
int sizeb = 6;
vector<int> ans;
for(int i=0;i<sizea;i++){
    int element = arr[i];
    ans.push_back(arr[i]);

for(int i=0;i<sizeb;i++){
    ans.push_back(brr[i]);

for(int i=0;i<ans.size();i++){
    if(element == ans[i]){
        ans[i] = -1;
    cout<<ans[i]<<" ";
}
}
}
}
return 0;
}
