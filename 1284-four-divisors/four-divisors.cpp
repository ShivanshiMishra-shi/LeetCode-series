class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {

        int n = *max_element(nums.begin(), nums.end());
        vector<int> isprime(n + 1, 0);
        for(int i = 1; i <= n; i++)
        {
            for(int j = i; j <= n; j += i)
            {
                isprime[j]++;
            }
        }
        int sum = 0;
        for(int num : nums)
        {
            if(isprime[num] == 4)
            {
                for(int i = 1; i * i <= num; i++)
                {
                    if(num % i == 0)
                    {
                        sum += i;

                        if(i != num / i)
                        {
                            sum += num / i;
                        }
                    }
                }
            }
        }

        return sum;
    }
};