#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Given Q queries , check if the number is present in the array or not

    int sizeOfArray; cin>>sizeOfArray;
    int arr[sizeOfArray];

    for(int i = 0; i < sizeOfArray; i++){
        cin>>arr[i];
    }

    int N = 1e5 + 10;
    vector<int> freq(N, 0);
    for(int i = 0; i < sizeOfArray; i++){
        freq[arr[i]]++;
    }

    cout<<"Enter queries: ";
    int q;
    cin>>q;

    while(q--){
        int queryElement;
        cin>>queryElement;
        cout<<freq[queryElement]<<endl;
    }

    return 0;
}