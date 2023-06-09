#include "bits/stdc++.h"
using namespace std;

void BubbleSort(int arr[], int n, int &comparison) {

            for(int i=1;i<n;i++) {
                int c = 0;
                comparison++;
                for(int j=0;j<n-i;j++)
                {

                    if(arr[j] > arr[j+1]) {
                        swap(arr[j+1], arr[j]);
                        c++;
                    }

                }
                if(c==0)break;
            }




}

int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int comparison =0;
    BubbleSort(arr, n, comparison);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<comparison;
}
