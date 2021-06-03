<h1>RSA Factoring Challenge</h1>
<br>
factorize these numbers as fast as possible before the target fixes this bug on their server - so that we can decode the encrypted documents.

<div data-role="task1373" data-position="1" id="task-num-0">
      <div class="panel panel-default task-card " id="task-1373">
  <span id="user_id" data-id="222"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      0. Factorize all the things!
    </h3>

   

  <div class="panel-body">
    <span id="user_id" data-id="222"></span>

    

    <p>Factorize as many numbers as possible into a product of two smaller numbers.</p>

<ul>
<li>Usage: <code>factors &lt;file&gt;</code>

<ul>
<li>where <code>&lt;file&gt;</code> is a file containing natural numbers to factor.</li>
<li>One number per line</li>
<li>You can assume that all lines will be valid natural numbers greater than 1</li>
<li>You can assume that there will be no empy line, and no space before and after the valid number</li>
<li>The file will always end with a new line</li>
</ul></li>
<li>Output format: <code>n=p*q</code>

<ul>
<li>one factorization per line</li>
<li><code>p</code> and <code>q</code> don’t have to be prime numbers</li>
<li>See example</li>
</ul></li>
<li>You can work on the numbers of the file in the order of your choice</li>
<li>Your program should run without any dependency: You will not be able to install anything on the machine we will run your program on</li>
<li>Time limit: Your program will be killed after 5 seconds if it hasn’t finish</li>
<li>Push all your scripts, source code, etc… to your repository

<ul>
<li>we will only run your executable <code>factors</code></li>
</ul></li>
</ul>

<pre><code>julien@ubuntu:~/factors$ cat tests/test00 
4
12
34
128
1024
4958
1718944270642558716715
9
99
999
9999
9797973
49
239809320265259
julien@ubuntu:~/factors$ time ./factors tests/test00
4=2*2
12=6*2
34=17*2
128=64*2
1024=512*2
4958=2479*2
1718944270642558716715=343788854128511743343*5
9=3*3
99=33*3
999=333*3
9999=3333*3
9797973=3265991*3
49=7*7
239809320265259=15485783*15485773

real    0m0.009s
user    0m0.008s
sys 0m0.001s
julien@ubuntu:~/factors$ 
</code></pre>

  </div>

 


<div data-role="task1397" data-position="3" id="task-num-1">
      <div class="panel panel-default task-card " id="task-1397">
  <span id="user_id" data-id="222"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      1. RSA Factoring Challenge
    </h3>

    <div>
        <span class="label label-info">
          #advanced
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="222"></span>

    
 
    <p>RSA Laboratories states that: for each RSA number <code>n</code>, there exist prime numbers <code>p</code> and <code>q</code> such that</p>

<p><code>n</code> = <code>p</code> × <code>q</code>.
The problem is to find these two primes, given only <code>n</code>.</p>

<p>This task is the same as task 0, except:</p>

<ul>
<li><code>p</code> and <code>q</code> are always prime numbers</li>
<li>There is only one number in the files</li>
</ul>

<p>How far can you go in less than 5 seconds?</p>

<ul>
<li>Read: <a href="/rltoken/Cn9Lq_kKNpNx4dmvFMuwgQ" title="RSA Factoring Challenge" target="_blank">RSA Factoring Challenge</a></li>
</ul>

<pre><code>julien@ubuntu:~/RSA Factoring Challenge$ cat tests/rsa-1
6
julien@ubuntu:~/RSA Factoring Challenge$ ./rsa tests/rsa-1
6=3*2
julien@ubuntu:~/RSA Factoring Challenge$ cat tests/rsa-2
77
julien@ubuntu:~/RSA Factoring Challenge$ ./rsa tests/rsa-2
77=11*7
julien@ubuntu:~/RSA Factoring Challenge$ [...]  
julien@ubuntu:~/RSA Factoring Challenge$ cat tests/rsa-15
239821585064027
julien@ubuntu:~/RSA Factoring Challenge$ ./rsa tests/rsa-15 
239821585064027=15486481*15485867
julien@ubuntu:~/RSA Factoring Challenge$ cat tests/rsa-16
2497885147362973
julien@ubuntu:~/RSA Factoring Challenge$ ./rsa tests/rsa-16
2497885147362973=49979141*49978553
julien@ubuntu:~/RSA Factoring Challenge$ [...]
</code></pre>
