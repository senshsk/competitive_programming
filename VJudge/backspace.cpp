#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){

    string x;
    cin>>x;
    bool t;
    t=true;
    int count = 0;
    int len_x = x.size();
    while (count<len_x){
        if ("<" in x){
            
            x.erase(count-1, 0);
            x.erase(count-1, 0);
            count-=2;
        }
        count+=1;
    }
    return 0;
}
