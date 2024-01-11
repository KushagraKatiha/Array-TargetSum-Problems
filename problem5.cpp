#include<iostream>
using namespace std;

int main(){
    // To rotate the array "a" by "k" steps where "k" is a positive integer and can be greater than size of "a"

    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int steps = 2;

    int newArr[len];

    int k = steps%len;
    int j = 0;
    for(int i = len-k; i < len; i++){
        newArr[j++] = arr[i];
    }    

    for(int i = 0; i <= k; i++){
        newArr[j++] = arr[i];
    }

    for(int i = 0; i < len; i++){
        cout<<newArr[i];
    }

    cout<<endl;

    return 0;
}