# Day24-of-43-of-Teachersdaychallenge

A. Jzzhu and Children
time limit per test1 second
memory limit per test256 megabytes
There are n children in Jzzhu's school. Jzzhu is going to give some candies to them. Let's number all the children from 1 to n. The i-th child wants to get at least ai candies.

Jzzhu asks children to line up. Initially, the i-th child stands at the i-th place of the line. Then Jzzhu start distribution of the candies. He follows the algorithm:

Give m candies to the first child of the line.
If this child still haven't got enough candies, then the child goes to the end of the line, else the child go home.
Repeat the first two steps while the line is not empty.
Consider all the children in the order they go home. Jzzhu wants to know, which child will be the last in this order?

Input
The first line contains two integers n, m (1 ≤ n ≤ 100; 1 ≤ m ≤ 100). The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 100).

Output
Output a single integer, representing the number of the last child.

Examples

Input
5 2
1 3 1 4 2

Output
4

Input
6 4
1 1 2 2 3 3

Output
6

A. Xenia and Divisors
time limit per test1 second
memory limit per test256 megabytes
Xenia the mathematician has a sequence consisting of n (n is divisible by 3) positive integers, each of them is at most 7. She wants to split the sequence into groups of three so that for each group of three a, b, c the following conditions held:

a < b < c;
a divides b, b divides c.
Naturally, Xenia wants each element of the sequence to belong to exactly one group of three. Thus, if the required partition exists, then it has  groups of three.

Help Xenia, find the required partition or else say that it doesn't exist.

Input
The first line contains integer n (3 ≤ n ≤ 99999) — the number of elements in the sequence. The next line contains n positive integers, each of them is at most 7.

It is guaranteed that n is divisible by 3.

Output
If the required partition exists, print  groups of three. Print each group as values of the elements it contains. You should print values in increasing order. Separate the groups and integers in groups by whitespaces. If there are multiple solutions, you can print any of them.

If there is no solution, print -1.

Examples

Input
6
1 1 1 2 2 2

Output
-1

Input
6
2 2 1 1 4 6

Output
1 2 4
1 2 6
