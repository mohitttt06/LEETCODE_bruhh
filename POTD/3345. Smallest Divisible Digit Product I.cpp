class Solution {
public:
    int smallestNumber(int n, int t) {

        while (1)
        {
            int temp = n;
            int m = 1;

            while (temp > 0)
            {
                m = m * (temp % 10);
                temp = temp / 10;
            }

            if (m % t == 0)
            {
                return n;
            }

            n++;
        }
    }
};
