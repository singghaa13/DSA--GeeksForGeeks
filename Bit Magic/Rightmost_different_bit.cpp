    int posOfRightMostDiffBit(int m, int n) {
        // XOR of m and n will have set bits where m and n differ.
        int s = m ^ n;
        
        // If s is 0, it means there are no different bits.
        if (s == 0) return -1;
        
        // Initialize position counter.
        int position = 1;
        
        // Find the position of the rightmost set bit in s.
        while ((s & 1) == 0) {
            s >>= 1;
            position++;
        }
        
        return position;
    }
};
