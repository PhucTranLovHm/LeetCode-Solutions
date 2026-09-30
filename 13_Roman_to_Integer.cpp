class Solution {
public:
    int romanToInt(string s) {
        // B?ng ánh x? giá tr? các ch? s? La Mã
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int total = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            // N?u ký t? hi?n t?i nh? hon ký t? k? ti?p -> Tr? di giá tr? ký t? hi?n t?i
            if (i < n - 1 && roman[s[i]] < roman[s[i + 1]]) {
                total -= roman[s[i]];
            } else {
                // Ngu?c l?i -> C?ng giá tr? ký t? hi?n t?i
                total += roman[s[i]];
            }
        }
        
        return total;
    }
};