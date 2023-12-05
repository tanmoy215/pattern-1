#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter line : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
                cout<<" ";
    }
    for(int m=1;m<=i;m++){
        cout<<"*";
    }
     cout<<endl;
}
for(int nn=1;nn<n;nn++){
        for(int mm=1;mm<=nn;mm++){
            cout<<" ";
        }
        for(int b=1;b<=n-nn;b++){
            cout<<"*";
        }
        cout<<endl;
}
return 0;
}