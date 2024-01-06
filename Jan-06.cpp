class Solution {
public:
    int func(int num, int pf) {
        int power = 0;
        while (num % pf == 0) {
            num /= pf;
            power++;
        }
        return power;
    }

    int sumOfPowers(int a, int b) {
        int ans = 0;
        for (int i = a; i <= b; i++) {
            int num = i;
            for (int pf = 2; pf * pf <= num; pf++) {
                if (num % pf == 0) {
                    ans += func(num, pf);
                    while (num % pf == 0)
                        num /= pf;
                }
            }
            if (num > 1)
                ans += func(num, num);
        }
        return ans;
    }
};
