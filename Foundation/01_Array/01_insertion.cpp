#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums;
    nums.insert(nums.begin(),1);
    nums.insert(nums.end(),2);
    cout<<nums[0]<<" "<<nums[1]<<endl;

    return 0;
}