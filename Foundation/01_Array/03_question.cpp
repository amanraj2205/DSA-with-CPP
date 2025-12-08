#include<iostream>
using namespace std;



int main(){
    string name[3] = {"Aman","Suman","Raju"};
    for(int i=0;i<3;i++){
        cout<<"Name at index "<<i<<" is: "<<name[i]<<endl;
    }
    cout<<"After the update index 3 "<<endl;
    name[2] = "Raj";
    for(int i=0;i<3;i++){
        cout<<"Name at index "<<i<<" is: "<<name[i]<<endl;
    }
    return 0;
}