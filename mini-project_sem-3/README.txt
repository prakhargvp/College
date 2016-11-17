[Question]
1. Prof Gussadhar has N number of students in his classes. His classes starts at 9 AM and so many times students arrive late in the class. Getting angry on the situation he announced one day that if less than P students are present at 9 AM then the class gets cancelled and all will be marked absent. Write code in C to tell whether the class is taken or it gets cancelled.

Input: Input is given in a text file. The first line of the file indicated total number of test cases. After that the test cases follows. The first line of the test case will indicate N and P separated by a space. The next line will contain integers which will indicate the time each student arrives in the class. A negative number (say -x) indicates the student arrived x minutes before the class started so (s)he is on time. Number 0(zero) indicated the student arrived just at 9 AM so (s)he is also on time. A positive number (say +x) indicates that the student is x minutes late.

Output: For each test case you have to output 'ON' if the class is held and 'OFF' if the class is cancelled. Each test case output should be in a separate line.

Example Input

3
3 3
-1 4 2
5 1
-1 2 3 5 0
3 2
-1 4 -1

Output

OFF
ON
ON

2. Kalu and Pilu is playing a game. Kalu picks a sub-range of numbers from the range 1 to 1000000 (say X and Y, both 1 and 1000000 can be included by Kalu). He then asks Pilu to choose any number, say P from the sub-range. Write code in C to find what is the probabilty that the number chosen by Kalu (P) is a prime number.

Input: Input is given in a text file. The first line of the file will indicate the total number of test cases present. The next line contains X and Y, the subrange separated by a space.

Output: The answer you have found, upto six digits after the decimal point, each answer to the test cases in a separate line.

Example Input

2
1 10
3 3

Output

0.400000
1.000000


3. Chutki likes to play with numbers. She has created her own favourite numbers which she calls her 'Lucky Numbers.' Her definition of Lucky Number is: It is an integer (positive integer only) where every digit if greater or equal to the digit preceeding it (wherever such a preeding digit exists). All the single digit numbers are automatically Lucky Numbers, the first such number is 1. She now defines the following of the Lucky Numbers:

MaxDiff: The maximum difference between two consecutive digits

SOP: The addition of all the digits

Here are some examples

|--------------+---------+-----|
| Lucky Number | MaxDiff | SOP |
|--------------+---------+-----|
| 2            | 0       | 2   |
| 29           | 7       | 11  |
| 388          | 5       | 19  |
| 555          | 0       | 15  |
| 12345        | 1       | 15  |
|--------------+---------+-----|

Your task is to find if a given number is a Lucky Number as per the definition and calculate the MaxDiff and SOP if it is using C.

Input: Input is given in a text file. The first line of the file will indicate the total number of test cases present. Each test case follows which is an integer.

Output: For each test case print out the MaxDiff and SOP separated by a comma in a separate line. If the number is not a Lucky Number then print NA.

SAMPLE INPUT

3
388
513
12345

OUTPUT

5,19
NA
1,15

