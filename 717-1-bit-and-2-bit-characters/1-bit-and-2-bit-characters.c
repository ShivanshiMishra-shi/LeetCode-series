bool isOneBitCharacter(int* bits, int bitsSize) {
    int n=bitsSize;
    int i=0;
    while(i<n-1)
    {
        i+=bits[i]+1;
    }
    return i==n-1;
    
}