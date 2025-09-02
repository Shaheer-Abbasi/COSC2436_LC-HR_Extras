int birthday(vector<int> s, int d, int m) {
    int N = (int)s.size();
    int res = 0;
    int sum = 0;
    
    for(int i = 0; i < m; i++){
        sum += s[i];
    }
    if(sum == d){
        res++;
    }
    
    for(int i = m; i < N; i++){
        sum += s[i];
        sum -= s[i - m];
        if(sum == d){
            res++;
        }
    }
    
    return res;
}