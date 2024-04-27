/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
class Solution {
public:
    int guessNumber(int n) {
        int start = 1, end = n;
        int md;
        while (end >= start) {
            md = start + (end - start) / 2;
            if (guess(md) == -1)
                end = md - 1;
            if (guess(md) == 1)
                start = md + 1;
            if (guess(md) == 0)
                break;
        }
        return md;
    }
};
