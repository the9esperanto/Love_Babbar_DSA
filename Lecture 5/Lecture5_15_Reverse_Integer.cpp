// Reverse integer leetcode
#include <limits.h>
class Solution
{
public:
    int reverse(int x)
    {

        int remainder = 0;
        bool sign = true;
        long long int answer = 0;

        if (x > INT_MAX)
        {
            return 0;
        }
        else
        {
            if (x < 0)
            {
                sign = false;
                x = -x;
            }
            else
            {
                sign = true;
            }

            while (x != 0)
            {
                remainder = x % 10;
                answer = answer + remainder;
                if (x > 9)
                {
                    answer = answer * 10;
                }

                x = x / 10;
            }
        }
        if (sign == true)
        {
            return answer;
        }
        else
        {
            int k = answer * (-1);
            return k;
        }
    }
};