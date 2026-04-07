class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> charCount;

     for (char c : ransomNote) {
        charCount[c]++;  
    }
     for (char c : magazine) {
        charCount[c]--;  
    }for (const auto& pair : charCount) {
    if (pair.second > 0) {
        return false;  // Not enough characters in the magazine
    }
}

    return true;
    }
};