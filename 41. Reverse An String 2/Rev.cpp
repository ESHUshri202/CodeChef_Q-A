#include<bits/stdc++.h>
using namespace std;

string  reversestring(string v,int k){
    int s = 0,e = v.size()-1;
    while(s<=e){
        if(s > k)
            swap(v[s],v[e]);
            
        s++;
        
    }
    return v;
}
void print(string v){
    for(int i =0 ;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl; 
}
int main(){
    string v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');
    v.push_back('e');
    v.push_back('f');
    v.push_back('g');


    string ans = reversestring(v,2);
    print(ans);
}
