There are n seats and n students in a room. You are given an array of seats of length n, where seats[i] is the position of the ith seat. You are also given the array students of length n, where students[j] is the position of the jth student. 
You may perform the following move any number of times: 
• Increase or decrease the position of the ith student by 1 (i.e. moving the ith student from position x to x+1 or x-1) 
Return the minimum number of moves required to move each student to a seat such that no two students are in the same seat. 
Note that there may be multiple seats or students in the same position at the beginning. 


### Example: 
Input: seats = [3,1,5], students = [2,7,4] 
Output: 4 


### Explanation: 
The students are moved as follows: 
- The first student is moved from position 2 to position 1 using 1 move. 
- The second student is moved from position 7 to position 5 using 2 moves. 
- The third student is moved from position 4 to position 3 using 1 move. 
In total, 1 + 2 + 1 = 4 moves were used. 


### Problem Statement: 
As in this problem, the seats and students size are same, and the condition is now two students in same seats, </br>
the easiest and simplest way to solve this problem is to sort the seats number and the students number array and subtracting student[i] from seats[i] </br>
if student[i] is less than seats[i]. And do the opposite if the otherways.</br>
This method will give us the count of moves to sort the student into seats.</br>
After each subtraction, we will add the subtraction result to the number of moves as the result.
