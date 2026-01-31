#include<bits/stdc++.h>
using namespace std;
int main(){
    // Creating a vector
    // note: vector is a dynamic array that can grow and shrink in size

    // int n;
    // cin >> n;
    // vector<int> numbers(n); // create a vector of size n
    // for(int i=0; i<n; i++){
    //     cin >> numbers[i]; // input elements into the vector
    // }
    // for(int i=0; i<n; i++){
    //     cout << numbers[i] << " "; // output elements of the vector
    // }
    // cout << endl;


    // Alternative way to create and use a vector
    // int n;
    // cin >> n;
    // vector<int> numbers; // create a vector of size n
    // for(int i=0; i<n; i++){
    //     int input;
    //     cin >> input;
    //     numbers.push_back(input); // input elements into the vector
    // }

    // cout << numbers.size() << endl; // output size of the vector
    
    // for(int i=0; i<n; i++){
    //     cout << numbers[i] << " "; // output elements of the vector
    // }
    // cout << endl;


    // Removing last element from the vector
    // int n;
    // cin >> n;
    // vector<int> numbers; // create a vector of size n
    // for(int i=0; i<n; i++){
    //     int input;
    //     cin >> input;
    //     numbers.push_back(input); // input elements into the vector
    // }

    // numbers.pop_back(); // remove last element from the vector
    // cout << "size -> " << numbers.size() << endl; // output size of the vector

    // for(int i=0; i<numbers.size(); i++){
    //     cout << numbers[i] << " "; // output elements of the vector
    // }
    // cout << endl;

    // clear element from the vector
    int n;
    cin >> n;
    vector<int> numbers; // create a vector of size n
    for(int i=0; i<n; i++){
        int input;
        cin >> input;
        numbers.push_back(input); // input elements into the vector
    }

    numbers.clear(); // clear all elements from the vector
    numbers.empty(); // check if the vector is empty
    cout << "size -> " << numbers.size() << endl; // output size of the vector

    for(int i=0; i<numbers.size(); i++){
        cout << numbers[i] << " "; // output elements of the vector
    }
    cout << endl;

    return 0;
}