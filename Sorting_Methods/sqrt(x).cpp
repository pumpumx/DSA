#include <iostream>
#include <vector>
using namespace std;
    long long int mySqrt(int x) {
        int s=0,e=x;
        long long int mid = s + (e-s)/2;
        long long int  ans;
       
        while(s<=e){
            long long int square = mid*mid;
            if(square==x){
                return mid;
            }
            else if(square<x){
                ans = mid;
                s = mid+1;
            }
            else{
                e=mid-1;
            }
           
            mid = s +(e-s)/2;
        }
        return ans;
    }

    int main(){
        int x;
        cin>>x;
        cout<<"Sqrt is"<<mySqrt(x)<<" ";
    }   