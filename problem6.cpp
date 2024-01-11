#include<iostream>
#include<vector>
#include "../../../../../usr/include/c++/11/pstl/glue_algorithm_defs.h"
using namespace std;

int main(){
    // To rotate the array "a" by "k" steps where "k" is a positive integer and can be greater than size of "a" without using an extra array

    vector<int> arr = {1,2,3,4,5};
    
    int len = arr.size();
    int steps = 2;

    int k = steps%len;

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());

    for(int i = 0; i < len; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}