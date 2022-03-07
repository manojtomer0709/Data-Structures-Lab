## PROBLEM 1
### CALCULATE TOTAL FINES
Given an integer denoting day of month and an array of integers representing number-plates of cars traveling on that day, calculate total fines applied as per the following rules

- Odd numbered cars can ply on odd days without incurring fine.
- Even numbered cars can ply on even days without incurring fine.
- An even numbered car plying on an odd day or an odd numbered car plying on an even day is fined  $250/occurrence.

    Input  
    4  
    3 4 1 2  
    15  

where:  
First line represents number of elements in array  
Second line represents number-plates of the cars in the array  
Third line represents the day  

    Output
    500

**Explanation**: Car with number-plate '4' and '2' will be fined $250 each, totaling $500. Hence output is 500.

Assumptions:  
Array can be of size 1 to 1000  
Array elements can be in range -1000 to 1000  
Day can be in range 1 to 31  

---

## PROBLEM 2
### REPLACE EVERY ELEMENT OF AN ARRAY BY ITS FREQUENCY

Given an array of integers, replace every element by its frequency in the array.

    Input:
    6
    1 2 5 2 2 5

where  
First line represents the number of elements in the array.  
Second line represents the elements in the array.  

    Output:
    1 3 2 3 3 2

**Explanation:** In the array, the element 1 has occurred only once so it's frequency is 1. Element 2 has occurred thrice so its frequency is 3, and element 5 has occurred twice so its frequency is 2.

Assumptions:  
Array element can be in the range -1000 to 1000.  

---

## PROBLEM 3
## 0-1 KNAPSACK PROBLEM
Given weight array and profit array of n items, put these items in a knapsack(bag) of capacity W to get the maximum total profit in the knapsack. In other words, given two integer arrays Profit [0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[ ] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item or don’t pick it (0-1 property).

    Input:
    3
    10 20 30
    60 100 120
    50 

where:  
First line represents the number of items.  
Second line represents the array of weights of items.  
Third line represents the array of profits from items.  
Fourth line represents the maximum total allowable weight of the Knapsack(bag).  

    Output:
    220
 
**Explanation:** From the weight and the profit matrix above  
weight = 10, profit = 60  
weight = 20, profit = 100  
weight = 30, profit = 120  
So to have maximum profit and total weight < = 50 we will select 2nd and 3rd item, such that weight = 20 + 30  = 50 and profit is 100 + 120 = 220. Hence the output 220.


Assumptions:  
Number of items can be in the range 1 to 1000.  
Elements of the weight and profit arrays can be in the range 1 to 1000.  
Weight of the Knapsack can be in the range 1 to 1000. 

---

## PROBLEM 4
### MARK ATTENDENCE OF PRESENT STUDENTS
Given an integer array of roll numbers RN and an array of integer roll numbers of present students PS. Write a program to sort the roll numbers of students. Mark the attendance of the present students roll numbers in an array. If a student is present then mark 1 else mark 0.

    Input 
    10  
    13 4 5 10 1 2 6 12 9 8  
    6  
    8 1 4 6 2 10  

where,  
First line represents total number of students N1.  
Second line represents roll number of all students RN.  
Third line represents number present students N2.  
Fourth line represents roll numbers of present students PS.   

    Output  
    1 2 4 5 6 8 9 10 12 13  
    1 1 1 0 1 1 0 1 0 0

where,  
First line is sorted roll numbers of all students.  
Second line is attendance of students.  

After sorting, roll numbers will be 1 2 3 4 5 6 7 8 9 10

Here, roll numbers 1, 2, 4, 6, 8, 10 are present hence they are marked as 1 and 5, 9, 12, 13 are absent hence they are marked as 0 in an array A

Assume that,  
N1 and N2 are integers within the range [1 to 200].  
Array elements are integers within the range [1 to 200].  
All elements in an array are unique.  
The variables N1, RN, N2, PS and A are already defined.  

---




