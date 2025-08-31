vector<int> rotateLeft(int d, vector<int> arr) {
    int N = (int)arr.size();
    d = d % N;
    int splitPoint = d;
    
    vector<int> splitVec(make_move_iterator(arr.begin() + splitPoint), 
                            make_move_iterator(arr.end()));
                            
    arr.erase(arr.begin() + splitPoint, arr.end());
    
    vector<int> concVec;
    
    concVec.insert(concVec.end(), splitVec.begin(), splitVec.end());
    concVec.insert(concVec.end(), arr.begin(), arr.end());
    
    return concVec;
}