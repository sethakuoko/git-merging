#include <iostream>
#include <map>
#include <unordered_map>
#include <queue>
#include <vector>
#include <stack>

using std::cout;
using std::endl;
using std::string;
using std::map;
using std::unordered_map;
using std::queue;
using std::vector;
using std::pair;
using std::stack;

//version 1

int main(){

    cout << "This is a simple c++ project to demonstrate my knowledge of data structures" << endl;

    vector<int> vect1;

    for(int i = 0; i <= 10; i++)
        vect1.push_back(i);


    queue<int> mQueue;
    for(int i = 0; i <= 10; i++)
        mQueue.push(i);

    map<int, int> myMap;
    
    for(int i = 0; i <= 10; i++)
        myMap.insert(pair<int, int>(i,i));

    unordered_map<int , int> myUnordered_map;

    for(int i = 0; i <= 10; i++)
        myUnordered_map.insert(pair<int , int>(i,i));

    int m = 0;

    stack<int> mStack;

    for(int i = 0; i <= 10; i++)
        mStack.push(i);

    cout << "Vectors : ";
    while(m < vect1.size()){
        cout << vect1.at(m) << " - ";
        m++;
    }

    cout << endl << "Queue : ";

    while(!mQueue.empty()){
        cout << mQueue.front() << " - ";
        mQueue.pop();
    }
    cout << endl;

    cout << "Maps : ";
    for(auto i : myMap){
        cout << i.first << " : " << i.second;
    }

    cout << endl << "Unordered Maps : ";
    for(auto i : myUnordered_map){
        cout << i.first << " : " << i.second << " - ";
    }
     
     cout << endl << "Stack : ";
    while(!mStack.empty()){
        cout << mStack.top() << " - ";
        mStack.pop();
    }
    cout << endl << endl << "Sizes" << endl;
    cout << "Vector size : " << vect1.size() << endl;
    cout << "Queue size : " << mQueue.size() << endl;
    cout << "Map size : " << myMap.size() << endl;
    cout << "Unordered Map size : " << myUnordered_map.size() << endl;

    return 0;
}