#include<bits/stdc++.h>
using namespace std;

int power(int last_digit, int size){
    long long result =1;

    for(int i=0;i<size;i++){
        result *=last_digit;
    }
    return result;
}

bool isArmstrang(long long n){
    long long original = n;
    int size=to_string(n).size();

    long long sum=0;

    while(n!=0){
        int last_digit =n % 10;
        sum +=power(last_digit, size);
        n=n/10;
    }
    return sum == original;
}

int main(){
    long long n;
    cin>>n;

    bool res=isArmstrang(n);

    if(res){
        cout<<"This is Armstrang Number"<<endl;
    }
    else{
        cout<<"Not Armstrang"<<endl;
    }
}