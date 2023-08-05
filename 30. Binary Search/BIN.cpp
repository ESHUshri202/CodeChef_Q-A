#include<bits/stdc++.h>
using namespace std;

int binary(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start <end){
        if(arr[mid] == target){
            return mid;
        }

        if(target > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int even[4] = {2,4,6,8} ;
    int odd[3] = {1,5,3} ;
    int ene = binary(even,4,6);
    cout<<ene<<endl;
}