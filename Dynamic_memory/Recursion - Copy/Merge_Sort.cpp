#include <iostream>
#include <vector>

using namespace std;


void merge(vector<int>&arr, int s, int e){
    int mid = (s + e) / 2;
    int len1 = mid + s  - 1;
    int len2 = e - mid;

    int * left = new int[len1];
    int * right = new int[len2];

    int mainarrayindex = s;

    for (int i = 0; i < len1; i++) {
        left[i++] = arr[mainarrayindex++];
    }
    mainarrayindex = mid + 1;
    for (int i = 0; i < len2; i++) {
        right[i] = arr[mainarrayindex];
    }
    int index1 = 0;
    int index2 = 0;
     mainarrayindex = s;
    while (index1 < len1 && index2 < len2) {
        if (left[index1] < right[index2]) {
            arr[mainarrayindex++] = left[index1++];
        }
        else {
            arr[mainarrayindex++] = right[index2++];
        }
    }

    while (index1 < len1) {
        arr[mainarrayindex++] = left[index1++];
    }

    while (index2 < len2) {
        arr[mainarrayindex++] = right[index2++];
    }
    
}

void solve(vector<int>&arr, int s, int e){
    if (s >= e) {
        return;
    }
    int mid = s + e / 2;

    solve(arr, s, mid);

    solve(arr, mid + 1, e);

    merge(arr, s, e);

}

void mergeSort(vector < int > & arr, int n) {
    solve(arr,0,n-1);
}

int main(){
    
    vector<int> arr = {1,4,23,3,5,23,64,34};
    int n = arr.size();

    mergeSort(arr , n);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}