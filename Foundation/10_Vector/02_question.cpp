#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> vec1;
  vector<int> vec2 = {1,2,3};
  vector<int> vec3(3,5);
  int size1 = vec1.size();
  int size2 = vec2.size();
  int size3 = vec3.size();
  cout<<"Size of vec1 is "<<size1<<endl;
  cout<<"Size of vec2 is "<<size2<<endl;
  cout<<"Size of vec3 is "<<size3<<endl;
    return 0;
}