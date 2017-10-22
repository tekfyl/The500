int Solution::numDecodings(string A) {
    if (!A.size() || A.front() == '0') return 0;
    
    int r1 = 1, r2 = 1;
    for(int i=1; i<A.size(); i++){
        if(A[i] == '0') r1 = 0;       
        if(A[i-1] == '1' || (A[i-1] == '2' && A[i] <= '6')){
            r1 = r1 + r2;
            r2 = r1 - r2;
        }
        else r2 = r1;
    }
    return r1;
}

