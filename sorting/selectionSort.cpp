#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    int mini;
    int index;
    for(int i=0;i<n;i++) {
            index = i;
        for(int j=i+1;j<n;j++) {
            if(arr[index] > arr[j])
            {
                index = j;
            }

        }
        if(index != i)
        swap(arr[i],arr[index]);
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    selectionSort(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;



}
