class Solution {
public:
  string mergeAlternately(string word1, string word2) {
    string merged = word1+word2;
    int j=0;
    for (int i=0;i<merged.length();i++){
      if (i < word1.length()) {
        merged[j++] = word1[i];
      }
      if (i < word2.length()) {
        merged[j++] = word2[i];
      }
    }
    return merged;
  }
};
