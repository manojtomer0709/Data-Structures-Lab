## PROBLEM 1
### READ A 2-D ARRAY
Write a function to read values of a number of rows, number of columns, 2 dimensional (2D) array elements and display the 2D array in a matrix form.

    Input 
    2 
    3 
    1 4 5 
    2 3 0 

  
**Where,**  
First line of represents the number of rows.  
Second line of input represents the number of columns.  
Third line contains array elements of the 1st row and so on. 

    Output 
    1 4 5 
    2 3 0

 
where  
There must be single space between 2 numbers in the row.  
There should not be any space after the last number in the row. e.g. in the 2nd row, there should not be any space after number 0.  

**Assume that,**  
Row and column values are integers within the range [1 to 100].  
2D Array elements are within the range [-2147483648 to 2147483647].  

---

## PROBLEM 2
### LARGEST GAP IN AN ARRAY
Given an array of N integers, find the largest gap between any two elements of the array.
In simple words, find max(|Ai-Aj|) where 0 ≤ i < N and 0 ≤ j < N.

    Input:
    4
    3 6 7 10 

where:  
First line represents the number of elements in the array.  
Second line represents the elements in the array.  

    Output:
    7

**Explanation:** Here, the largest gap can be found between 3 and 10 which is 10 - 3 = 7, hence the output 7.

Assumptions:  
Array element can be in the range -1000 to 1000.

---

## PROBLEM 3
## DISPLAY SQUARE OF NUMBERS IN ARRAY
Given an array of integers A and size of an array N. Write a program to display the square of each number in the array. 

Write a function:  
    void solution(int A[], int N)

that accepts an array of integer A and size of array N. The function should display square of each number in the array.

    Input
    10
    1 2 3 4 5 6 7 8 9 10

where,  
First line represents a value of N.  
Second line represents array elements.  
    
    Output
    1 4 9 16 25 36 49 64 81 100

**Note:** Print the numbers separated by single space. Do not print space before first and after last element.

Assume that,  
N is an integer within the range [1 to 10000].  
Array elements are integers within the range [1 to 10000].  

---

## PROBLEM 4
### NUMBER OF UNIQUE PAIRS IN AN ARRAY
Given an array of N elements, find all the unique pairs that can be formed using the elements of a given array.

    Input:
    3
    1 1 2

where:  
First line represents the number of elements in the array.  
Second line represents the elements in the array.  

    Output:
    4

**Explanation:** (1, 1) (1, 2) (2, 1) and (2, 2) are all the unique pairs, their count is 4, hence the output 4.

---

## PROBLEM 5
### DIAPLAY FERFECT SQUARE NUMBERS IN AN ARRAY
Given an array of integers A and size of array N. Write a program to display only those numbers in an array that are perfect squares. 

 

Write a function:
    void solution(int A[], int N)

that accepts an array of integer A and size of array N. The function should display numbers in array those are a perfect square. If there is no perfect square number present in an array then print 0.

    Input
    10
    8 2 3 4 16 9 5 6 25 10 

where,  
First line represents value of N.  
Second line represents array elements.  

    Output
    4 16 9 25

**Note:** Print the numbers separated by single space. Do not print space after the last element.

Assume that,  
N is an integer within the range [1 to 10000]  
Array elements are integers within the range [1 to 10000].  

---

## PROBLEM 6
### REPLACE EVERY ELEMENT OF ARRAY BY ITS FREQUENCY
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