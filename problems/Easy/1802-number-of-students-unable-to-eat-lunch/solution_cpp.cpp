class Solution {
public:
    
        int countStudents(vector<int>& students, vector<int>& sandwiches) {

	int num=0;
	int count=0;
    
    while(count<students.size()){
        if(students[0]== sandwiches[0]){
            sandwiches.erase(sandwiches.begin()+0);
            students.erase(students.begin()+0);
            count=0;
        }
        else{
            int x=students[0];
            students.erase(students.begin()+0);
            students.push_back(x);
            count++;
        }
    }
    return students.size();
}
    
};