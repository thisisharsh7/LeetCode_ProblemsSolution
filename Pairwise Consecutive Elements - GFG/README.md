# Pairwise Consecutive Elements
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a stack of integers of size <strong>N</strong>, your task is to complete the&nbsp;function <strong>pairWiseConsecutive(),</strong> that checks whether numbers in the stack are pairwise consecutive or not. The pairs can be increasing or decreasing, and if the stack has an odd number of elements, the element at the top is left out of a pair. The function should retain the original stack content.</span></p>

<p><span style="font-size:18px">Only following standard operations are allowed on </span><span style="font-size:18px">stack</span><span style="font-size:18px">.</span></p>

<ul>
	<li><span style="font-size:18px">push(X): Enter </span><span style="font-size:18px">a element</span><span style="font-size:18px"> X on top of </span><span style="font-size:18px">stack</span><span style="font-size:18px">.</span></li>
	<li><span style="font-size:18px">pop(): Removes top element of the stack.</span></li>
	<li><span style="font-size:18px">empty(): To check if stack is empty.</span></li>
</ul>

<p><span style="font-size:18px"><strong>Input Format:</strong><br>
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains two lines of input. The first line contains n denoting the number of elements to be inserted into the stack. The second line contains the elements to be inserted into the stack.</span></p>

<p><span style="font-size:18px"><strong>Output Format:</strong><br>
For each</span><span style="font-size:18px"> testcase, in a new line, print </span><span style="font-size:18px">"<strong>Yes</strong>"(without quote) if the elements of the stack </span><span style="font-size:18px">is</span><span style="font-size:18px"> pairwise consecutive, else print&nbsp;"<strong>No</strong>".</span></p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. You only need to complete the function <strong>pairWiseConsecutive </strong>that takes a stack as an <strong>argument </strong>and returns <strong>true </strong>if the stack is found to be pairwise consecutive, else it returns <strong>false</strong>. The printing is done by the <strong>driver </strong>code.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt; =T &lt;= 100<br>
1 &lt; =N &lt;= 10<sup>3</sup></span></p>

<p><span style="font-size:18px"><strong>Example:<br>
Input:</strong><br>
2<br>
6<br>
1 2 3 4 5 6<br>
5<br>
1 5 3 9 7<br>
<strong>Output:</strong><br>
Yes</span><br>
<span style="font-size:20px">No</span></p>

<p><span style="font-size:20px"><strong>Explanation:</strong><br>
<strong>Testcase1: </strong>The number of elements are even and they are pairwise consecutive so we print Yes.<br>
<strong>Testcase2: </strong>The number of elements are odd so we remove the top element and check for pairwise consecutive. It is not so we print No.</span></p>
</div>