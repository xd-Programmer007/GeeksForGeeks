<h2><a href="https://www.geeksforgeeks.org/problems/root-to-leaf-paths/1">Root to Leaf Paths</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a <strong>Binary Tree</strong> of nodes, you need to find <strong>all the possible paths</strong> from the <strong>root node</strong> to all the <strong>leaf nodes</strong> of the binary tree.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input:</strong>
       1
    /     \
   2       3
<strong>Output: <br></strong>1 2 <br>1 3 
<strong>Explanation: </strong>
All possible paths:
1-&gt;2
1-&gt;3</span>
</pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://www.geeksforgeeks.org/problems/root-to-leaf-paths/1&amp;title=Root%20to%20Leaf%20Paths%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0A%20%20%20%20%20%20%201%0A%20%20%20%20%2F%20%20%20%20%20%5C%0A%20%20%202%20%20%20%20%20%20%203%0AOutput%3A%20%0A1%202%20%0A1%203%20%0AExplanation%3A%20%0AAll%20possible%20paths%3A%0A1-%3E2%0A1-%3E3%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p dir="ltr"><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input:
&nbsp;        </strong>10
&nbsp;      /    \
&nbsp;     20    30
&nbsp;    /  \
&nbsp;   40   60<strong>
Output: <br></strong>10 20 40 <br>10 20 60 <br>10 30 </span>
</pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://www.geeksforgeeks.org/problems/root-to-leaf-paths/1&amp;title=Root%20to%20Leaf%20Paths%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0A%C2%A0%20%20%20%20%20%20%20%2010%0A%C2%A0%20%20%20%20%20%20%2F%20%20%20%20%5C%0A%C2%A0%20%20%20%20%2020%20%20%20%2030%0A%C2%A0%20%20%20%20%2F%20%20%5C%0A%C2%A0%20%20%2040%20%20%2060%0AOutput%3A%20%0A10%2020%2040%20%0A10%2020%2060%20%0A10%2030%20%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p dir="ltr"><span style="font-size: 18px;"><strong>Your Task:</strong><br>Your task is to complete the function&nbsp;<strong>Paths()</strong> which takes the root node as an argument and returns all the possible paths. (All the paths are printed in new lines by the driver's code.)</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(height of the tree)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=n&lt;=10<sup>4</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Recursion</code>&nbsp;<code>Arrays</code>&nbsp;<code>Binary Search Tree</code>&nbsp;