#include<bits/stdc++.h>
using namespace std;
vector<int> rotate(vector<int> &arr,int k){
    vector<int> temp(arr.size());
    for(int i =0; i<arr.size();i++){
        temp[(i+k)%arr.size()] = arr[i];
    }
    arr = temp;
}
