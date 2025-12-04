#include<bits/stdc++.h>
using namespace std;
int main(){
    // Creating a tuple
    // note: tuple is a container that holds multiple values of different data types

    // tuple<string, int, string> person;
    // person = make_tuple("Bob", 25, "Engineer");
    // cout << get<0>(person) << " " << get<1>(person) << " " << get<2>(person) << endl;

    // tuple<string, int, string> person;
    // cin >> get<0>(person) >> get<1>(person) >> get<2>(person);
    // cout << get<0>(person) << " " << get<1>(person) << " " << get<2>(person) << endl;

    int n;
    cin >> n;
    tuple<string, int, string> person[n];
    for(int i=0; i<n; i++){
        string name, address;
        int age;
        cin >> name >> age >> address;
        get<0>(person[i]) = name;
        get<1>(person[i]) = age;
        get<2>(person[i]) = address;
    }
    for(int i=0; i<n; i++){
        cout << get<0>(person[i]) << " " << get<1>(person[i]) << " " << get<2>(person[i]) << endl;
    }

    return 0;
}