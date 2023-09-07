#include<iostream>
using namespace std;

int main(){
    int arr[]={2,1,8,3,9,6};
    int length = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<length; i++){
        for (int j=0; j<length-i; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int i=0; i<length; i++){
        cout << arr[i] << " ";
    }
    return 0;
}