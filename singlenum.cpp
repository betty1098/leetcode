#include<iostream>
using namespace std;
class Solution {
public:
    int singleNumber(int A[], int n) {
        int result =0;
        for(int i=0;i<n;i++){
            result =result^A[i];
        }
        return result;
    }

};

int main(){
        int a[5] ={1,1,2,2,3};
        int result;
        Solution b;
        int len =sizeof(a)/sizeof(a[0]);
        result=b.singleNumber(a,len);

        cout<<result<<endl;
        return 0;
}
