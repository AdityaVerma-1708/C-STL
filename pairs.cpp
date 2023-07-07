//in STL there are different cotainers like pairs,set,vector,map,graph etc basically it has inbuilt classes which we can 
// use in order to optimise our code 

/*so PAIR is basic container of the c++ STL which is use to store two heterogeneous element as first ans second 
     ~the first element is refered to "first" and second as "second" 
     ~pair<datatype,datatype> pair_name
     ~we have to include the utility header file*/
#include<iostream>
#include<utility>
using namespace std;
int main(){
    pair<int,int> p,p1,p2;  //decalration
    p.first = 3;   //first way
    p.second = 4; 

    cout<<p.first<<endl<<p.second<<endl;

    p1 = {5,6}; //second way
    cout<<p1.first<<endl<<p1.second<<endl;

    p2 = make_pair(7,8);  //third way
    cout<<p2.first<<endl<<p2.second<<endl;


    //array of pair
    pair <int , int> p4[3];  //-->these the 3 pairs 
    for(int i=0;i<3;i++){
        cin>>p4[i].first;
        cin>>p4[i].second;   //taking the element first and second for every ith pair
    }

    for(int i=0;i<3;i++){
        cout<<"{"<<p4[i].first<<","<<p4[i].second<<"}"<<endl;  //printing the array of pair this pair format
    }

    return 0;
}