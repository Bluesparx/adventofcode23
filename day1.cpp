#include<iostream>
#include<sstream>
#include<string.h>
using namespace std;

int caliber(string s){
    int len = s.length();
    int caliber = 0;
    int first, last;
    first = last = 0;
    int i = 0;
    while(i<len){
        if(isdigit(s[i])){
            first = s[i] - '0';
            break;
        }
        i++;
    }
    i = len;
    while(i>=0){
        if(isdigit(s[i])){
            last = s[i] - '0';
            break;
        }
        i--;
    }
    caliber = first*10 + last;
    return caliber;
}

int main(){
    int count = 0;
    string s;
    while(true){
        getline(cin, s);
        if (s == "exit") {
            break;
        }
        count = count+ caliber(s);
    }
    cout<<count;
    return 0;
}