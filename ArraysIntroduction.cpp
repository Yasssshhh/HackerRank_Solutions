#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print(int arr[],int len){
    for(int i=len-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int len=n;
    print(arr,len);
    return 0;
}
