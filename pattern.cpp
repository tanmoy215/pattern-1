#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter line : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=i;j++){
            if(i%2==0){
                char ch =(char)a;
                cout<<ch;
                a=a+1;
            }
            else cout<<j;
        }
        cout<<endl;
    }
}