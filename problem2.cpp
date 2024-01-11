#include<iostream>
using namespace std;

int main(){
    // Find the total number of triplets in the array whose sum is equal to  gvien value of x

    int arr[] = {3,1,2,4,0,6};
    int trgSum = 5;

    int triplets = 0;

    for(int i = 0; i < 6-2; i++){
        for(int j = i+1; j < 6-1; j++){
            for(int k = j+i; k < 6; k++){
                cout<<"i: "<<i<<"arr[i]: "<<arr[i];
                cout<<" j: "<<j<<"arr[j]: "<<arr[j];
                cout<<" k: "<<k<<"arr[k]: "<<arr[k]<<endl;
                if(arr[i] + arr[j] + arr[k] == trgSum){
                    cout<<arr[i]+arr[j]+arr[k]<<endl;
                    cout<<"Code came into this block"<<endl;
                    triplets++;
                }
            }
        }
    }

    cout<<"Number of triplet(s) are: "<<triplets<<endl;
    return 0;
}