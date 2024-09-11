//sharvari murade
//ENTC B1
//23070123088

#include<iostream>
using namespace std;
int main(){
    int l,i,count=0;
    string a;
    char search;
    cout<<"Enter a string: ";
    cin>>a;
    cout<<" Enter the letter to be counted: ";
    cin>>search;
    l=a.length();//length of the string
    for(i=0;i<l;i++){
        if(a[i]==search){
            count++;
        }
    }
    cout<<"Occurence of "<<search<<" in "<<a<<" is "<<count<<" times";
}
