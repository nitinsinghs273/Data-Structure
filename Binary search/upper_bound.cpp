#include<bits/stdc++.h>
using namespace std;

int upper_bounds(vector<int>&v, int element){
    int low = 0;
    int high = v.size()-1;
    while(high - low > 1){
        int mid = (low + high)/2;
        if(v[mid] < element)
            low = mid + 1;
        /*else if(v[mid] == element)
            return element;*/
        else{
                high = mid;
        }
    }
    if(v[low] > element)
    {
        return low;
    }
    else if(v[high] > element)
    {
        return high;
    }
    else
        return v.size();

}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int element;
    cin>>element;
    int ub = upper_bounds(v, element);

    cout<<ub<<" "<<(ub != n? v[ub]:-1)<<endl;






}

