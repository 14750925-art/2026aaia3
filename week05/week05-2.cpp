// week05-2.cpp 學習計畫 Built-In Functions
// LeetCode 709. To Lower Case
// LeetCode 已經幫你把 #include <cctype> 寫好了
class Solution {
public:
    string toLowerCase(string s) {
        // s[0] = 'h'; // 不用寫，只是例子 s[i] 可改
        for (int i = 0; i < s.length(); i++) {
            // 以前 if(s[i] >= 'A' && s[i] <= "Z") s[i] - 'A' + 'a';
            // 以前 if(isupper(s[i])) s[i] - 'A' + 'a';
            s[i] = tolower(s[i]); // 前面要記得 #include <cctype>
        }
        return s;
    }
};
