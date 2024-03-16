class Solution {
public:
    int minimumLength(std::string s) {
        int start = 0;{
            return 0;
        }
        int end = s.size() - 1;
        int answer = s.size();

        while (start < end && answer > 0) {
            if (s[start] != s[end]) {
                return answer;
            }

            if (s[start] == s[end]) {
                if (s[start] == s[start + 1]) {
                    answer--;
                    start++;
                } else if (s[end] == s[end - 1]) {
                    answer--;
                    end--;
                } 
                else {
                    start++;
                    end--;
                    answer -= 2;
                }
            }
        }
        return answer;
    }
};
// class Solution {
// public:
//     int minimumLength(string s) {
//         int left = 0, right = s.size() - 1;
        
//         while (left < right && s[left] == s[right]) {
//             char ch = s[left];
            
//             // Skip consecutive characters equal to ch from the left
//             while (left <= right && s[left] == ch) {
//                 left++;
//             }
            
//             // Skip consecutive characters equal to ch from the right
//             while (left <= right && s[right] == ch) {
//                 right--;
//             }
//         }
        
//         return left > right ? 0 : right - left + 1;
//     }
// };
