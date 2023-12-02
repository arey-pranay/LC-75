class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int j=0;
        int sz = flowerbed.size();
        if(sz==1){
            if(flowerbed[0]==0)
            j++;
        }
        else if(sz==2){
            if(flowerbed[0]==0 && flowerbed[1]==0)
            j++;
        }
        else{
        if(flowerbed[0]==0 && flowerbed[1]==0)j++;
        for(int i=1;i<sz-2;i++){
            if(flowerbed[i]==0 && flowerbed[i+1]==0 && flowerbed[i+2]==0){
                j++;
                flowerbed[i+1]=1;
            }
        }
        if(flowerbed[sz-1]==0 && flowerbed[sz-2]==0)j++;
        }
        cout<<j;
        if(j<n)return false;
        return true;
