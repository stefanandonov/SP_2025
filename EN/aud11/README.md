# Midterm/exam tasks

## January exam 2025

### Task 1

From the SI, an unknown number of positive integers are entered. The reading ends when something that is not a number is read.
For each number, the following should be done:

Print the even digits of the number (starting from the least significant digit).
Print the odd digits of the number (starting from the most significant digit).
Print the sum of the even digits.
The printing of the digits and the sum of the even digits of a given number should be performed in a separate function.
If the calculation of the sum and the printing of the digits are done in a single recursive function, you can get 100% of the points.
Using two or more recursive functions gives a maximum of 90% of the points.
A solution without recursion gives a maximum of 60% of the points.

#### Test cases

##### Input1

1234567890

test

##### Output1
Digits: 0 8 6 4 2 1 3 5 7 9

Sum: 20

### Task 2

The input consists of the dimensions of a matrix (n,m < 50), followed by the elements of the matrix. After that, the indices of a specific element in the matrix are provided. The task is to compute the sum of the elements that form the largest inscribed rhombus centered at the given element.

The largest inscribed rhombus is defined as the rhombus that is bounded by the longest sequence of elements in the matrix that lie on or parallel to the main and secondary diagonals.

#### Test cases

##### Input 1
7 7

0 0 0 1 0 0 0

0 0 1 2 1 0 0

0 1 2 2 2 1 0

1 2 2 3 2 2 1

0 1 2 2 2 1 0

0 0 1 2 1 0 0

0 0 0 1 0 0 0

3 3

##### Output 1
39


##### Explanation
За внесената матрица и за елементот со индекс i=3 j=3 (елементот со вредност 3, максималниот ромб претставува ромбот составен од елементите обележано со црвено:

0 0 0 **1** 0 0 0

0 0 **1 2 1** 0 0

0 **1 2 2 2 1** 0

**1 2 2 3 2 2 1**

0 **1 2 2 2 1** 0

0 0 **1 2 1** 0 0

0 0 0 **1** 0 0 0

### Task 3

An integer N (N<=100) is entered, followed by N text strings (sentences) with a maximum length of 80 characters, each in a new line. The strings consist of letters, digits, and special characters. Write a program that takes the longest string (if there are more than one strings with largest length, consider the first such) and prints it encrypted as follows:

The letter 's' (uppercase or lowercase) is replaced with the symbol '$'
The letter 'm' (uppercase or lowercase) is replaced with two consecutive symbols ‘^’
⚠️ Note: When solving the problem, the string class must not be used!