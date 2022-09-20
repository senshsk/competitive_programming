#include<bits/stdc++.h>
using namespace std;

int main(){

    string x;
    cin>>x;
    bool t;
    t=true;
    int count = 0;
    int len_x = x.size();
    while (count<len_x){
        if (x[count]=="<"){
            x-=x[count-1];
            x-=x[count-1];
            count-=2;
        }
        count+=1;
    }
    return 0;
}
