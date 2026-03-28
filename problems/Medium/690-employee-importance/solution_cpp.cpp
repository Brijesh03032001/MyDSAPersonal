/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
  
    int getImportance(vector<Employee*> employees, int id) {
        vector<Employee*>v= employees;
        if(!v.size()) return 0;
        for(auto x:v)
            if(x->id==id){
                for(auto y:x->subordinates){
                    x->importance+=getImportance(v,y);
                }
                return x->importance;
            }
        return 0;
      
    }
};