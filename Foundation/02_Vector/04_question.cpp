#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec = {12,23,1,2,3};
    int key = 1,i=0;
    for(int val:vec){
        if(val == key) cout<<i<<endl;
        i++;
    }
    return 0;
}