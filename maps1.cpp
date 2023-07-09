/* here we will first understand the types of containers in c++ stl

    (i)Sequence container: which implements data structure that can be stored sequencially
                            eg. array,vector,dequeue,forward list,list
   (ii)Associative container: which implement sorted data structure that can be quickly searched with 
                              time complexity (O(logn)) eg. sets,maps,multiset,multimap
  (iii)Unordered associative container: that implement unsorted(hashed) data structure that can be quickly search
                                        O(1) and for worst case (O(n)).
                                        eg. unordered map,unordered set,unorderd multiset,unorderd multimap
   (iv)Container adaptors: provide different interface for sequence container.
                            eg. stack,queue,periority-queue.                                                                                        
-->a single element of map has two value -> data and key
-->key should be unique in the map
-->both data and key can be fo any type of data structure or of any container
-->in memory element of any map contains the pair of key and value,that are not arranged in the sequencial manner,they 
    can be anywhere ,so now in order to access these element we have to use the iterator 
*/


//-->here if it is a normal map the key will stored in the sorted manner if it is unordered map then it stored according 
//to how we have given the input
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    //ways to insert the element in map
    m[1] = "Aditya";  //here 1,2,3 are the keys of the respective values
    m[2] = "Verma";
    m[3] = "Map";

    m.insert({4,"hello"});
    m.insert(make_pair(5,"sanjhi"));

    map<int,string> :: iterator its;
    for(its = m.begin() ; its != m.end() ; its++){  //here we have used the * since its is pointing to the pair
        cout<<(*its).first<<" "<<(*its).second<<endl;
    }
    cout<<"--"<<endl;

    for(its = m.begin() ; its != m.end() ; its++){
        cout<<(its)->first<<" "<<(its)->second<<endl;   ///similar to linked list we can use the -> operator also
    }

    cout<<"---"<<endl;

    for(auto pr : m){ //here we are not using the * since here "pr" is actually a pair so we can directly print the pr 
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    cout<<"---"<<endl;

    cout<<m.size()<<endl; // .size() tells us about the size of the map

    cout<<"---"<<endl;
    //if we tried to put the value at the existing key then the value will be updated it will not show the error
    m[4] = "Hey";
    for(auto pr : m){ 
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    cout<<"---"<<endl;

    m[6]; //if we simply define the key and not give the value it automatically keep that value as NULL or empty 
    for(auto pr : m){ 
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    cout<<"---"<<endl;

    //--------------------------------------------------------------------------------------------------------------
    //  find and erase function

    auto it = m.find(3);  //find function returns the iterator to the pair whose key to be searched
    cout<<it->first<<" "<<it->second<<endl;
    cout<<"---"<<endl;

    // auto its = m.find(8);
    // cout<<its->first<<" "<<its->second<<endl;
    // cout<<"---"<<endl;

        //this above will show error since the key 8 is not present in the map so if key is not present in the maps
        //then iterator contains the m.end() which is the next of last pair of the map

     auto itss = m.find(10);
     if(itss == m.end()){
        cout<<"Key not found"<<endl;
     }
     else{
        cout<<itss->first<<" "<<itss->second<<endl;
     }   
     cout<<"---"<<endl;


    //erase function can take both key as well as the iterator pointing towards the target value

    m.erase(3);    //erase function taking the key
    for(auto pr : m){ 
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    cout<<"---"<<endl;

    auto i = m.find(4);  //for iterator we need to define the iterator first
    m.erase(i);  //erase function taking the iterator
    for(auto pr : m){ 
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    cout<<"---"<<endl;



return 0;
}    