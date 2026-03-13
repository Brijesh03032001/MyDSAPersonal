class NumArray {
public:
    vector<int> a;
    vector<int> t;
    int n;
    
    void init ( int id, int b, int e ) {
        if ( b == e ) {
            t[id] = a[b];
            return;
        }
        
        //int mid = ( b + e ) >> 1;
        int mid = ( b + e ) /2;
        init ( id*2+1, b, mid );
        init ( id*2+2, mid+1, e );
        
        t[id] = t[id*2+1] + t[id*2+2];
    } 
    int ask ( int id, int b, int e, int i, int j ) {
        if ( b >= i && e <= j ) return t[id];
        if ( i > e || j < b ) return 0;
        
        int mid = ( b + e ) >> 1;
        int ret1 = ask ( id*2+1, b, mid, i, j);
        int ret2 = ask ( id*2+2, mid+1, e, i, j );
        
        return ret1+ret2;
    }
    
    NumArray(vector<int>& nums) {
         a = nums;
        n = nums.size();
        t.resize( n*4 +1);
        
        init ( 0, 0, n-1 );
    }
    
    int sumRange(int left, int right) {
        
        return ask ( 0, 0, n-1, left, right );
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */