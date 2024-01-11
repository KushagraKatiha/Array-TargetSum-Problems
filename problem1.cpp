#include<iostream>
using namespace std;

int main(){
    // Find the total number of pairs in the array whose sum is equal to  gvien value of x

    int arr[] = {3,4,6,1,3};
    int trgSum = 7;

    int pairNo = 0; 

    for(int i = 0; i < 4; i++){
        for(int j = i+1; j < 5; j++ ){
            if(arr[i] + arr[j] == trgSum){
                pairNo++;
            }
        }
    }

    cout<<"Number of pair(s) with sum 7 are: "<<pairNo<<endl;
    return 0;
}