#include<bits/stdc++.h>
using namespace std;
// using seive of eratothesis algorithm
int countPrime(int n ){
    int cnt = 0;
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i =2 ; i<n; i++){
        cnt++;
        for(int j = 2*i; j<n ; j= j+i){
            prime[j] = 0;
        }
    }
    return cnt;
}
int main(){
    cout<<countPrime(10);
    return 0;

}
