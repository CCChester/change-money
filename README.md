# change-money

In this problem, you will write a program called change that makes change for any country's
monetary system (real or ctional). This program accepts, from standard input, the coin
denominations that make up the monetary system, and the total value. It then prints a
report of the combination of coins needed to make up the total. For example if a particular
country has coins with values 1, 3, and 8, and you have 13 units of money, then the input
would be as follows:
3
8
1
3
13
The initial 3 means that there are 3 coin types. The next three values are the coin de-
nominations, in some order. The last value is the total. For this input, the output should
be
1 x 8
1 x 3
2 x 1
Notes:
 Most coin systems have the property that you can make change by starting at the
highest coin value, taking as many of those as possible, and then moving on to the next
coin value, and so on. Although not all combinations of coin denominations have this
property, you may assume that the input for change will always have this property.
 The Canadian government has recently abolished the penny. Consequently, once the
remaining pennies work their way out of circulation, it will be impossible to construct
coin totals not divisible by 5. Similarly, in whatever system of denominations you are
given, it may not be possible to construct the given total. If that happens, output
Impossible (and nothing else) to standard output.
 You may assume that the number of denominations is at most 10. Do not allocate heap
memory.
 You may assume that no denomination will be listed twice.
 If a given coin is used 0 times for the given total, do not print it out; your output should
contain only those denominations that were actually used, in decreasing order of size.
