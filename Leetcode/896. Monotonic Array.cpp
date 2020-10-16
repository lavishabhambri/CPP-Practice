class Solution {
public:
    bool isInc(vector<int>& A){ //checks for increasing monotonicity.
        int n = A.size();
        bool inc = true;
        for(int i=0 ;i<n-1; i++){
            if(A[i] > A[i+1]){
                inc = false;
            }
        }
        return inc;
    }
    
    bool isDec(vector<int>& A){   //checks for decreasing monotonicity.
        int n = A.size();
        bool dec = true;
        for(int i=0 ;i<n-1; i++){
            if(A[i] < A[i+1]){
                dec = false;
            }
        }
        return dec;
    }
    
    bool isMonotonic(vector<int>& A) {
        return(isInc(A) || isDec(A));   //if either any one is true then it is monotonic.    
    }
};
