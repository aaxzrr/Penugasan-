#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout <<"Masukan input: ";
    cin >> s;

    int start = s.find("*");
    string sub = s.substr(start+1);
    int finish = sub.find("?");
    string subtit = sub.substr(0,finish);
    
    string str = subtit;
    vector<string> v;
 
    stringstream ss(str);
 
    while (ss.good()) {
        string substr;
        getline(ss, substr, '#');
        v.push_back(substr);
    }
 
    for (size_t i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }  
    return 0;
}