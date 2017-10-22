int Solution::threeSumClosest(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    sort(A.begin(), A.end());
    int ans = INT_MAX, sumr=7878;
    for(int i=0; i<A.size()-2; i++){
        int low = i+1, high = A.size()-1;
        while(low<high){
            int sum = A[i]+A[low]+A[high];
            if(ans > abs(sum-B)){
                ans = min(ans, abs(sum-B));
                sumr = sum;
            }
            if(sum == B){
                ans = 0;
                return B;
            }
            else if(sum > B){
                high--;
            }
            else{
                low++;
            }
        }
    }
    return sumr;
}

