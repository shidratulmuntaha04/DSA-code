#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &arr, int key){
    int n = arr.size();
    int low=0, high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(key == arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {2,5,7,34,89};
    cout<<binarySearch(arr, 90);
}