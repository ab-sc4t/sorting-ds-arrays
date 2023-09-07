#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,1,6,3,9,8,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<length; i++){
        int max_index = length-1-i;
        for (int j=0; j<length-1-i; j++){
            if (arr[j] > arr[max_index]){
                max_index = j;
            }
        }
        if (max_index != length-1-i){
            swap(arr[max_index], arr[length-1-i]);
        }
    }
    for (int i=0; i<length; i++){
        cout << arr[i] << " ";
    }
    return 0;
}