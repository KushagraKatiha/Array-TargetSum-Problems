#include<iostream>
using namespace std;

// function to find the maximum element out of an array
// int largestElementIndex(int arr[], int size){
//     int max = arr[0]; 
//     int index = 0;
//     for(int i = 0; i < size; i++){
//         if(arr[i] >= max){
//             max = arr[i];
//             index = i;
//         }
//     }

//     return index;
// }


// Optimized way to find 2nd largest element

int secondLargestElement(int arr[], int size){

    int max = INT16_MIN;
    int secondMax = INT16_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    for(int i = 0; i < size; i++){
        if(arr[i] > secondMax && arr[i] != max){
            secondMax = arr[i];
        }
    }
    return secondMax;
}
int main(){
    // To find 2nd largest number in an array

    int arr[] = {2,3,5,7,6,1};

    // int indexOfLargest = largestElementIndex(arr, 6);
    // arr[indexOfLargest] = -1;
    // int indexOfSecondLargest = largestElementIndex(arr, 6);

    cout<<"Second Largest Element in the array is: "<<secondLargestElement(arr, 6)<<endl;
    return 0;
}