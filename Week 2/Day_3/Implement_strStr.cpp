class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.find(needle);
        if(n== string:: npos) return -1;
        else return n;
    }
};