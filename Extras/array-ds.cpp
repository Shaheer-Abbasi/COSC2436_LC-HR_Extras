vector<int> reverseArray(vector<int> a) {
    int N = (int)a.size();
    int left = 0;
    int right = N - 1;
    
    while(left < right){
        std::swap(a[left], a[right]);
        left++;
        right--;
    }
    
    return a;
}