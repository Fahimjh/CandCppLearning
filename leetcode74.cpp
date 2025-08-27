#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>>matrix={
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12},
        {13,14,15,16,17,18,19}
    };
    
    int Rmid,Rstart=0,Rend=matrix.size()-1;
    int Cmid,Cstart,Cend,target=30;
    
    while(Rstart<=Rend){
        Rmid=Rstart+(Rend-Rstart)/2;
        
        if(target>=matrix[Rmid][0] && target<=matrix[Rmid][matrix[Rmid].size()-1]){
            Cstart=0;
            Cend=matrix[Rmid].size()-1;
            
            while(Cstart<=Cend){
                Cmid=Cstart+(Cend-Cstart)/2;
                if(target==matrix[Rmid][Cmid]){
                    cout<<"True"<<endl;
                    return 0;
                }
                else if(target>matrix[Rmid][Cmid]){
                    Cstart=Cmid+1;
                }
                else{
                    Cend=Cmid-1;
                }
            }
        }
        else if(target>matrix[Rmid][matrix[Rmid].size()-1]){
            Rstart=Rmid+1;
        }
        else{
            Rend=Rmid-1;
        }
    }
    cout<<"False"<<endl;
}