
    class Solution {
        public String mergeAlternately(String word1, String word2) {
    
            int i=0;
            String final1 = "";
            for(i=0; i < word1.length() || i < word2.length(); i++) {
                if(i < word1.length()) {
                    final1 += word1.charAt(i);
                }
    
                if(i < word2.length()) {
                    final1 += word2.charAt(i);
                }
            }
    
            return final1;
        }
    }

    