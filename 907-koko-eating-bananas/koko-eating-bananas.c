int minEatingSpeed(int* piles, int pilesSize, int h) {

    int l = 1;

    int high = piles[0];

    for(int i = 1; i < pilesSize; i++)
    {
        if(piles[i] > high)
        {
            high = piles[i];
        }
    }

    while(l < high)
    {
        int mid = l + (high - l) / 2;

        long long hours = 0;

        for(int i = 0; i < pilesSize; i++)
        {
            hours += (piles[i] + mid - 1) / mid;
        }

        if(hours <= h)
        {
            high = mid;
        }
        else
        {
            l = mid + 1;
        }
    }

    return l;
}