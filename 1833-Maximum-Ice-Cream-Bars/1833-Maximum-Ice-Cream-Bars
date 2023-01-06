class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
       sort(costs.begin(),costs.end());
       int total_cost = 0;
       int total_ice_cream = 0;
       for(int cost:costs){
           if(total_cost + cost <= coins){
               total_cost += cost;
               total_ice_cream++;
           }
           else{
               break;
           }
       }
       return total_ice_cream; 
    }
};
