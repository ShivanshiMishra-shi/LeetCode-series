int maxArea(int* height, int heightSize) {
    int l = 0;
    int r = heightSize - 1;
    int maxArea = 0;
    while(l < r)
    {
        int width = r - l;
        int h;
        if(height[l] < height[r])
            h = height[l];
        else
            h = height[r];

        int area = width * h;

        if(area > maxArea)
            maxArea = area;

        if(height[l] < height[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    return maxArea;
}