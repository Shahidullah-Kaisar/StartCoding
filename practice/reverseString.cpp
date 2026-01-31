//word reverse
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int start=0;
    int end=s.size()-1;

    while(start<end){
        char temp = s[start];
        s[start]=s[end];
        s[end]=temp;

        start++;
        end--;
    }

    cout<<s;
}
*/


// full sentence reverse
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int start=0;
    int end=s.size()-1;

    while(start<end){
        char temp = s[start];
        s[start]=s[end];
        s[end]=temp;

        start++;
        end--;
    }

    cout<<s;
}

*/


/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    reverse(s.begin(),s.end());

    cout<<s;
}*/


//----------------Reverse words individually (keep word order)----------------

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    int n=str.size();
    int start=0;

    for(int i=0;i<=n;i++){
        if(str[i]==' ' || i==n){
           
            int end=i-1;

            int s=start;
            int e=end;

            while (s<e){
                char temp=str[s];
                str[s]=str[e];
                str[e]=temp;

                s++;
                e--;
            }
            start=i+1; 
        }
    }

    cout<<str<<endl;
}