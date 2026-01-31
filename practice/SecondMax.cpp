#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10, 5, 20, 8, 20, 15};
    int n = sizeof(arr) /sizeof(arr[0]);
    
    int max1=INT_MIN, max2=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
            
        }else if(arr[i]<max1 && arr[i]>max2){
            max2=arr[i];
        }
    }
    
    if(max2 == INT_MIN){
        cout<<"NOT Found"<<endl;
    }else{
        cout<<max2<<endl;
    }
}