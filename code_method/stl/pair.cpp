#include<bits/stdc++.h>
using namespace std;
int main(){
    // Creating a pair  
    // note: pair is a container that holds two values of different data types

    // pair<string, int> person;
    // person.first = "Alice";
    // person.second = 20;
    // cout << person.first << " " << person.second << endl;

    // int n;
    // cin >> n;
    // pair<string, int> person[n];
    // for(int i=0; i<n; i++){
    //     string name;
    //     int age;
    //     cin >> name >> age;
    //     person[i].first = name;
    //     person[i].second = age;
    // }
    // for(int i=0; i<n; i++){
    //     cout << person[i].first << " " << person[i].second << endl;
    // }

    int n;
    cin >> n;
    pair<string, pair<int, string>> person[n];
    for(int i=0; i<n; i++){
        string name, address;
        int age;
        cin >> name >> age >> address;
        person[i].first = name;
        person[i].second.first = age;
        person[i].second.second = address;
    }
    for(int i=0; i<n; i++){
        cout << person[i].first << " " << person[i].second.first << " " << person[i].second.second << endl;
    }

    return 0;
}