class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int len = sentences.size(), count = 0;
        int maxi=0;
        for(int i=0;i<len;i++){
            count = 0;
            for(int j=0;sentences[i][j] != '\0';j++){
                if(sentences[i][j]==' '){
                    count++;
                }
            }
            if(maxi<count){
                maxi = count;
            }
        }
        return maxi+1;
    }
};