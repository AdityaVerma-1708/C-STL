/*vector is the most important continous container in the c++ stl, basically vector is the dynamic array which means we can 
change the size of the array at any time we required*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    v.push_back(1);  // v.push_back() pushes the element at the end
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(int i=0;i<v.size();i++){  //v.size() gives the size of the vector
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();    // v.pop_back() pops the element from the back and does not return anything 
    v.pop_back();

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // it is very easy to copy the vector from one to another
    vector<int> v2 = v;  //copying the vector v into new vector v2

    for(int i=0;i<v2.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //element access
    cout<<v.back()<<endl;   //return the refrence to the last element
    cout<<v.front()<<endl;  //return the refrence to the first element
    cout<<v[2]<<endl;
    cout<<v.at(2)<<endl;  //in both way we can access the element of the vector

    cout<<v.max_size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.empty()<<endl;
return 0;
} 