#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec={3,4,5,6,0,1,2};
    int start=0,end=vec.size()-1,mid,target;
    cout<<"Enter target: ";
    cin>>target;
    mid=start+(end-start)/2;
    while(start<=end){
        mid=start+(end-start)/2;
        if(target==vec[mid]){
            break;
        }
        else if(vec[mid]<vec[end]){
            if(target>=vec[mid]&&target<=vec[end])
                start=mid+1;
            else
                end=mid-1;
        }
        else if(vec[start]<vec[mid]){
            if(target<=vec[mid]&&target>=vec[start])
                end=mid-1;
            else
                start=mid+1;
        }
        // else
        //     break;
    }
    if(target==vec[mid]){
        cout<<"Found"<<endl;
    }
    else
        cout<<"Not found!"<<endl;
}