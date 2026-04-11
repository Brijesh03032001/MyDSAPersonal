class Solution {
public:
int brokenCalc(int X, int Y) {

   //Here we are going to use the  reverse of the given operations.
    
    //As long as (Y>X)  we are going to check whether Y is even or not .                   
    /*If yes then divide Y by 2 (reverse of the operation :- multiply the number on the display by 2 ) else incrementing Y by 1 (reverse of the operation :- subtract 1 from the number on the display ).*/
    
    
    //After performing this operations if X becomes greater than Y then simply add (X-Y) .
    
    /* You can also refer the given testcases like: 
    
    startValue=3  , target=10
    -----------     ----------
    as (target>startValue)  control goes under the while loop and target is even 
        -----------------                                                   -----
    so dividing it by 2 we get target=5  . It is still (target>startValue) and 
       ----------------        ---------                -----------------
    target is odd so we want to increment it and target becomes target=6 and
    -------------                                               --------
    again (target>startValue) and target is even so divide it by 2.Finally
           -----------------                 ---    --------------
    control reaches out of the loop as (target==startValue==3)
                                        -------------------
                                        
    *** Now Just make a line chart of the targets we got earlier 
    target----> [10,5,6,3] it is Just opposite of the given chart.
    
    */
    
    int count=0;
    
    while(X<Y){
        
        if(Y%2==0){
            Y/=2;
        }
        
        else{
            Y++;
        }
        
        count++;
    }
    
    return (count+X-Y);
}
};