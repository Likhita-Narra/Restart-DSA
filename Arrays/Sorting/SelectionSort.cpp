#include <iostream>
#include <vector>
using namespace std;

void swap(int * num1, int * num2);
int findMin(const vector <int> &arr, int start);

int main() {
    vector<int> arr = {23, 12, 9, 56, 11, 2, 34, 0};

    for(int i = 0; i < arr.size(); i++) {
        swap(arr[i], arr[findMin(arr, i)]);
    }

    for(int i = 0; i < arr.size(); i++) {
        cout<<i<<": "<<arr[i]<<endl;
    }
}

void swap(int * num1, int * num2) {
    int dummy = *num1;
    *num1 = *num2;
    *num2 = dummy;
}

int findMin(const vector <int> &arr, int start) {
    if(start >= arr.size()-1) return start;

    int min_ind = start;

    for(int i = start+1; i < arr.size(); i++) {
        if(arr[i] < arr[min_ind]) min_ind = i;
    }
    return min_ind;
}

