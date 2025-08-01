class Solution {
public:
    int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) {
        int run = 0, maxRun = 0;
        int prof = 0, maxProf = 0;
        int people = 0 ;
        int index = 0 ;
        while(people > 0 || index < customers.size())
        {
            if(index < customers.size()){
                people += customers[index];
                index++ ;
            }
            int onboard = min(4, people);
            people -= onboard;
            prof += onboard*boardingCost - runningCost;
            run++;
            if(prof > maxProf){
                maxProf = prof;
                maxRun = run;
            }
        }
        return maxProf > 0 ? maxRun : -1 ;
    }
};