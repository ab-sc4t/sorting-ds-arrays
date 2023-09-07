#include<iostream>
using namespace std;

int main(){
    int arr[]={2,1,8,3,9,6};
    int length = sizeof(arr)/sizeof(arr[0]);
    for (int i=1; i<length; i++){
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]= current;
    }

    for (int i=0; i<length; i++){
        cout << arr[i] << " ";
    }
    return 0;
}