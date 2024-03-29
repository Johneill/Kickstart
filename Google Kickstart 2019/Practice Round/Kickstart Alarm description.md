Problem:

Shil has a very hard time waking up in the morning each day, so he decides to buy a powerful alarm clock to Kickstart his day. This Alarm is called a Kickstart Alarm. It comes pre-configured with K powerful wakeup calls. Before going to bed, the user programs the clock with a Parameter Array consisting of the values A1, A2, ..., AN. In the morning, the clock will ring K times, with the i-th wakeup call having power POWERi.

To calculate POWERi, the alarm generates all the contiguous subarrays of the Parameter Array and calculates the summation of the i-th exponential-power of all contiguous subarrays. The i-th exponential-power of subarray Aj, Aj+1, ..., Ak is defined as Aj × 1i + Aj+1 × 2i + Aj+2 × 3i + ... + Ak × (k-j+1)i. So POWERi is just the summation of the i-th exponential-power of all the contiguous subarrays of the Parameter Array.

For example, if i = 2, and A = [1, 4, 2], then the i-th exponential-power of A would be calculated as follows:
2-nd exponential-power of [1] = 1 × 12 = 1
2-nd exponential-power of [4] = 4 × 12 = 4
2-nd exponential-power of [2] = 2 × 12 = 2
2-nd exponential-power of [1, 4] = 1 × 12 + 4 × 22 = 17
2-nd exponential-power of [4, 2] = 4 × 12 + 2 × 22 = 12
2-nd exponential-power of [1, 4, 2] = 1 × 12 + 4 × 22 + 2 × 32 = 35
so the total is 71.

Tonight, Shil is using his Kickstart Alarm for the first time. Therefore, he is quite worried about the sound the alarm might make in the morning. It may wake up the neighbors, or, worse yet, it may wake up the whole planet! However, calculating the power of each wakeup call is quite difficult for him. Given K and the Parameter Array A1, A2, ..., AN, can you help him by calculating the summation of power of each wakeup call: POWER1 + POWER2 + ... + POWERK?

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of one line with nine integers N, K, x1, y1, C, D, E1, E2 and F. N is the length of array A, K is the number of wakeup calls. Rest of the values are parameters that you should use to generate the elements of the array A, as follows.

Use the recurrences below to generate xi and yi for i = 2 to N:
xi = ( C × xi-1 + D × yi-1 + E1 ) modulo F.
yi = ( D × xi-1 + C × yi-1 + E2 ) modulo F.
We define Ai = ( xi + yi ) modulo F, for all i = 1 to N.

Output
For each test case, output one line containing Case #x: POWER, where x is the test case number (starting from 1) and POWER is the summation of POWERi, for i = 1 to K. Since POWER could be huge, print it modulo 1000000007 (109 + 7).

Limits
1 ≤ T ≤ 100.
Time limit: 90 seconds per test set.
Memory limit: 1 GB.
1 ≤ x1 ≤ 105.
1 ≤ y1 ≤ 105
1 ≤ C ≤ 105.
1 ≤ D ≤ 105.
1 ≤ E1 ≤ 105.
1 ≤ E2 ≤ 105.
1 ≤ F ≤ 105.

Small dataset (Test set 1 - Visible)
1 ≤ N ≤ 100.
1 ≤ K ≤ 20.

Large dataset (Test set 2 - Hidden)
1 ≤ N ≤ 106.
1 ≤ K ≤ 104.

Sample

Input 
 	
2
2 3 1 2 1 2 1 1 9
10 10 10001 10002 10003 10004 10005 10006 89273

  


Output 
 
Case #1: 52
Case #2: 739786670

  
In Sample Case #1, the Parameter Array is [3, 2]. All the contiguous subarrays are [3], [2], [3, 2].

For i = 1:
1-st Exponential-power of [3] = 3 × 11 = 3
1-st Exponential-power of [2] = 2 × 11 = 2
1-st Exponential-power of [3, 2] = 3 + 2 × 21 = 7
So POWER1 is 12.

For i = 2:
2-nd Exponential-power of [3] = 3 × 12 = 3
2-nd Exponential-power of [2] = 2 × 12 = 2
2-nd Exponential-power of [3, 2] = 3 + 2 × 22 = 11
So POWER2 is 16.

For i = 3:
3-rd Exponential-power of [3] = 3 × 13 = 3
3-rd Exponential-power of [2] = 2 × 13 = 2
3-rd Exponential-power of [3, 2] = 3 + 2 × 23 = 19
So POWER3 is 24.

  
Syntax pre-check
Show Test Input
