/*as we have studied the indexing in order to the access the data element of continous memory allocation type data structure
like vector,array,string,stack,queue etc.But now if we have to acccess the data element of discontinous data structure like 
maps graph then we have to use the iterator
~iterator is the most imp feature of stl
~as we know that the pointer points at the memory location, but iterator is big abstraction of the pointer
~ or we can say that pointer is a special type of iterator
~we can use iterator for any type of container but eventually it is beneficial for the maps,graph etc */

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(11);
    v1.push_back(12);
    v1.push_back(13);
    v1.push_back(14);
    v1.push_back(15);

    //way to define the itrator for vector
    vector<int> :: iterator itf = v1.begin(); //here "itf" points the first element of v1                    
    vector<int> :: iterator ite = v1.end(); //here "ite" points at the next to last element of the v1

    //basically this iterator does not stores the data in it just points towards it, 
    /* ***we have to keep in mind the difference between pointer and iterator
          pointer points at the memory location it does not know any thing about the value at that location
          whereas the interator points towards the element*** */
   
    //so in order to access the element or data we have to use "*"

    cout<<*itf<<endl; //front element
    cout<<*(ite-1)<<endl;   //-1 is here since as mentioned .end() points at the next last element 
         
    cout<<*(itf+1)<<endl;  //we can use this also to print further element 
    cout<<*(itf+2)<<endl;     

    //printing using iterator in loop
    for(itf = v1.begin() ; itf != v1.end() ; itf++){
        cout<<*(itf)<<endl;
    }
    cout<<"---"<<endl;

    //-----------------------------------------------------------------------------------------------------------------//

    //now to declare the interator its a very big statment which takes time for writing 

    vector<int> v2;
    v2.push_back(100); 
    v2.push_back(101);
    v2.push_back(102);
    v2.push_back(103);
    v2.push_back(104);
    v2.push_back(105);

    //instead of writing the whole iterator statement we can use this ==>

    for(int value : v2){  //here "value" is the iterator for v2 vector and here int symbolises vector contines the int
        cout<<value<<endl; // here we dont care about the indexing we are directly accessing the data
    }
    cout<<"---"<<endl;
    for(int value : v2){
        value++;  //here are increament will *not reflect in the original array*
        cout<<value<<endl;
    }
    cout<<"---"<<endl;
    for(int value : v2){
        cout<<value<<endl;   
    }
    cout<<"---"<<endl;

    // **here the data are printing are acutally the copy of the original data** which iis not beneficial for space
    // so we can use the c++ refrence
    for(int &value : v2){
        value++;   //here these change will *reflect in the original content*
        cout<<value<<endl;
    }
    cout<<"---"<<endl;
    for(int value :v2){
        cout<<value<<endl;
    }
    cout<<"---"<<endl;
    
    //--------------------------------------------------------------------------------------------------------------------//
    /* "AUTO" keyword basically identifies the datatype of given data automatically basically we dont need to specify the data type */

    auto a = 5;
    auto b = "string";
    auto c = 2.3420392;

    vector<string> v3;
    // we can also use this in the iterator

    v3.push_back("My");
    v3.push_back("Name");
    v3.push_back("Is");
    v3.push_back("Aditya");
    v3.push_back("Verma.");

    for(auto &value : v3){
        cout<<value<<endl;
    }
    cout<<"---"<<endl;
return 0;
}

/*so basically we have studied the iterator, so summary is

            vector<int> :: iterator its;
            for(its = v.begin() ; its != v.end() ; its++){

            }
                            |||
            for(auto it = v.begin() ; it != v.end() ; it++){

            }
                            |||
            for(int it : v){

            }                
                            |||
            for(auto it : v){

            }                
 */                           
        
