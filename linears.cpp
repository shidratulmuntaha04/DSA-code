
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin >>arr [i];
    }
    
int key = 6;
int flag=0;
for(int i=0;i<7;i++){
    if(arr[i]==key){
        flag=1;
        cout<<"found";
        break;
    }  
}
if (flag==0){
    cout<<"Not Found";
}
}
