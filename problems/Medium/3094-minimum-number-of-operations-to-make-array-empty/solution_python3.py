class Solution:
    def minOperations(self, nums: List[int]) -> int:
        dic ={}
        n = len(nums)
        for i in range(n):
            dic[nums[i]]=  1 + dic.get(nums[i],0)

        ans =0
        for key,val in dic.items():
            if val==1 :
                return -1
            else :
                rem = val%3
                quo = val//3
                if rem==0 :
                    ans += quo
                elif rem== 1:
                    ans += quo -1 
                    ans += 2
                elif rem == 2:
                    ans += quo
                    ans += 1

        return ans