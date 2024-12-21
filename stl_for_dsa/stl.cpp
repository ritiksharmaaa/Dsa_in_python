#include <bits/stdc++.h>
#include <utility>


// we have algorohim container function iterator 

// container  before learn pair - it a utility libray 

using namespace std;
void explai_pair(){
    // you can say pair a a discotrnary in cpp 
    std::pair<int , int > p1 = {1 , 3};
    std::cout << p1.first << " " << p1.second << std::endl;
    std::pair<int , std::pair<int , int>> p2 = {1, {1,3} };
    std::cout << p2.first << " " << p2.second.first << " " << p2.second.second << std::endl;
    std::pair<int , int > array[] = {{1,2} , {2,3} , {3,4}};
    std::cout << array[0].first << " " << array[0].second << std::endl;



};


void explain_vector(){
 vector<int> v ;
 v.push_back(1); // push data back to end
 v.emplace_back(3); // push normali in backk but it increse the size of array and it also faster than push back 
 //pair of vector 
 vector<pair<int , int >>vec ;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
vector<int> vec2 = {1 , 3, 4 , 5};// you use also () 

// vecotr vector 

vector<int> v3(vec2); // here vec three can store a vec2 like sub array or we can say 2 d array ;

// iteerator in vector ; 

//  20 , 30 , 40 , 50 , 60 , 70 , 80 , 90 , 100  this is our vector 

vector<int>::iterator it = v.begin(); // it is a pointer to the first element of the vector and when we say 
it++ ;
cout << *it << endl ; // *it tke the memoroy location and give there val 
 it = it + 2; // it will skip location 2 we can say for loop use this iterator.

  vector<int>::iterator it1 = v.begin();
    vector<int>::iterator it1 = v.end(); // it will point to the next of the last element
    vector<int>::reverse_iterator it1 = v.rend();  // it will point to the last element of the vector
    vector<int>::reverse_iterator it2 = v.rbegin(); // it will point to the r stanf for revesr begin 

    cout << v[0] << " " << v.at(0);  // v.back give you last element ;





//  let use for loop to iterator  to acoide manuall it++ 

for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout << *it << endl ;
}
// who write this ling syntax vector int ::iterator so use use auto 

for (auto it = v.begin(); it != v.end(); it++){
    cout << *it << endl ; // and it work fine well ;

}

// for each loop in cpp 

    for (auto x : v){ // x is a reference to the current element in the vector
        cout << x << endl ;

    }



// erase from vector
// {23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 ,}
v.erase(v.begin()+1); // it will erase the second element of the vector
 // {23 , 25 , 26 , 27 , 28 , 29 , 30 , 31 ,}

v.erase(v.begin()+1 , v.begin()+3); // it will erase the element from 1 to 3  i tlike slicing in python
 // {23 , 27 , 28 , 29 , 30 , 31 ,}

// insertion in vector ------------------------

vector<int> v1(2,100); // {100 , 100} 2 mean 2 element and 100 is the value of the element
v1.insert(v1.begin() , 300); // {300 , 100 , 100} it will insert 300 at the begining of the vector
v1.insert(v1.begin() + 1 , 2 , 10); // {300 , 10 , 10 , 100 , 100} it will insert 10 , 10 at the 1st index of the vector
vector<int>copy(2 , 50 );
v1.insert(v1.begin() ,copy.begin() , copy.end()); // {50 , 50 , 300 , 10 , 10 , 100 , 100} it will insert the copy vector at the begining of the vector)

v1.size(); // it will give the size of the vector
v1.pop_back(); // it will remove the last element of the vector

v1.swap(v); // it will swap the vector v1 and v2 mean data of v1 go go v2 and v2 go to v1 

// checking vector is empty or not

v1.empty(); // it will return true if the vector is empty else false

