<h2><a href="https://www.geeksforgeeks.org/problems/juggler-sequence3930/1">Juggler Sequence</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Juggler Sequence is a series of integers&nbsp;in which the first term starts with a positive integer number&nbsp;<em>a</em>&nbsp;and the remaining terms are generated from the immediate previous term using the below recurrence relation:<br><br><img style="width: 414px; height: 122px;" src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/705067/Web/Other/2220ffd2-353d-4b30-b2aa-68fe4047f959_1685087657.png" alt="Juggler Formula"><br><br>Given a number n, find the Juggler Sequence for this number as the first term of the sequence until it becomes 1.</span></p>
<p><br><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input:</strong> n = 9
<strong>Output:</strong> 9 27 140 11 36 6 2 1
<strong>Explaination:</strong> We start with 9 and use 
above formula to get next terms.</span></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://www.geeksforgeeks.org/problems/juggler-sequence3930/1&amp;title=Juggler%20Sequence%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%20n%20%3D%209%0AOutput%3A%209%2027%20140%2011%2036%206%202%201%0AExplaination%3A%20We%20start%20with%209%20and%20use%20%0Aabove%20formula%20to%20get%20next%20terms." class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p>&nbsp;</p>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input:</strong> n = 6
<strong>Output:</strong> 6 2 1
<strong>Explaination:</strong> 
[6<sup>1/2</sup>] = 2. 
[2<sup>1/2</sup>] = 1.</span></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://www.geeksforgeeks.org/problems/juggler-sequence3930/1&amp;title=Juggler%20Sequence%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%20n%20%3D%206%0AOutput%3A%206%202%201%0AExplaination%3A%20%0A%5B61%2F2%5D%20%3D%202.%20%0A%5B21%2F2%5D%20%3D%201." class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input or print anything. Your Task is to complete the function<strong> jugglerSequence()</strong> which takes n as the input parameter and returns a list of integers denoting the generated sequence.</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n</span><span style="font-size: 18px;">)<br><strong>Expected Auxiliary Space:</strong> O(n)</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 100</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Recursion</code>&nbsp;<code>series</code>&nbsp;<code>Algorithms</code>&nbsp;