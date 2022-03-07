## PROBLEM 1

### FIND SUM OF ARRAY ELEMENTS USING POINTERS

Given a pointer to an array of integer elements and the number of elements in the array, find the sum of elements.

Write a function:
long solution(int \*A, int N)

that accepts a pointer to an array of elements and the size of the array. The function should return the sum of the array elements.

    Input   
    5
    1 2 3 4 5

Where,  
The first line represents the size of an array.  
The second line represents array elements.  

    Output  
    15

Assume that,  
N is within the range [1 to 100].

---

## PROBLEM 2

### DELETE AN ARRAY ELEMENT AT INDEX k

Given an array of integers, write a program to delete the element at index K.

    Input:

    5
    10 20 30 40 50
    1

**where:**  
First line represents the number of elements in the array.  
Second line represents the elements in the array.  
Third line represents the value of index K.  

    Output:  
    10 30 40 50

**Explanation:** Output displays the elements of the array after deleting the element at index K=1.

---

## PROBLEM 3

### INSERT AN ELEMENT AT INDEX k

Given an array of integers, write a program to insert an element X at index K.

    Input:  
    5
    10 20 30 40 50
    15
    1

**where:**  
First line represents the number of elements in the array.  
Second line represents the elements in the array.  
Third line represents element X to be inserted.  
Fourth line represents the index K, where the element is to be inserted.  

    Output:  

    10 15 20 30 40 50

**Explanation:** Output displays the elements of the array after inserting the element X=15 at index K=1.

---

## PROBLEM 4

### CHECK WHETHER BOOKINGS ARE POSSIBLE

Given two arrays for arrival and departure dates of same size N, find whether the advance booking is possible or not.

A hotel manager has to process N advance bookings. His hotel has K rooms. Bookings contain an arrival date and a departure date. He wants to find out whether there are enough rooms in the hotel to satisfy the demand.

    **Input:**

    5
    1 7 8 10 11
    9 8 15 16 17
    3

where:
First line represents the number of bookings, N.  
Second and third lines represent the arrival and departure date arrays respectively.  
Fourth line represents the number of rooms in the hotel, K.  

    **Output:**

    Yes

**Explanation:**  
 First room is booked on 1st. Now there are two vacant rooms. Second room is booked on 7th. Now there is one vacant room.Third room is booked on 8th. Now there is no vacant room. Second room is vacated on 8th. Now there is one vacant room. First room is vacated on 9th. Now there are two vacant rooms. First room is booked on 10th. Now there is one vacant room. Second room is booked on 11th. Now there is no vacant room. Since all bookings were possible, hence the output 'Yes'.

**Assumptions:**  
Dates of arrival or departure can be in the range 1 to 30.  

---

## PROBLEM 5
### FIND THE HIDDEN NUMBER
Given an array of integers, find another integer such that, if all the elements of the array are subtracted individually from that number, then the sum of all the differences should add to 0. If any such integer exists, print its value otherwise print '-1'.
 

    Input:  
    3
    1 2 3

**where:**  
First line represents the number of elements in the array.  
Second line represents the elements in the array.


    Output:  

    2

 

**Explanation:**   Substracting all the elements of arrays from 2, The sum of difference is: 1 + 0 + (-1) = 0.

 

**Assumptions:**  
Array can be of size 1 to 1000.  
Array elements can be in the range -1000 to 1000.  

