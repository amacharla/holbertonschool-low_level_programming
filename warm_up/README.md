<h1 class="gap">Warm Up</h1>


<h4 class="task">
    0. Binary search
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that searches for a value in a sorted array of integers using the <a href="/rltoken/rwhVo3p5epzyf1uZchtJPQ" target="_blank" title="Binary search algorithm">Binary search algorithm</a></p><ul>
<li>Prototype : <code>int binary_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the index where <code>value</code> is located</li>
<li>You can assume that <code>array</code> will be sorted in ascending order</li>
<li>You can assume that <code>value</code> won’t appear more than once in <code>array</code></li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)</li>
<li>The prototypes of all your functions should be included in your header file called <code>search_algos.h</code></li>
<li>You are only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc, … is forbidden.</li>
</ul>

<h4 class="task">
    2. Is full
      <span class="alert alert-warning mandatory-optional">
        mandatory
      </span>
</h4><p>Write a function that checks if a binary tree is full</p><ul>
<li>Prototype: <code>int binary_tree_is_full(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
<li>You are allowed to use the standard library</li>
</ul>
