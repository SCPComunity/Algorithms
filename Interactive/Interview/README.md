# Explaination

Consider this question: if we take some range $a_l,…,a_r$ of piles, how do we know if it contains the special pile?

If it doesn't contain the special pile, then the total weight should be $a_l + a_{l+1} +⋯+ a_{r-1} + a_r$ grams, since each stone weighs one gram.

If it does contain the special pile, then the total weight should be $a_l + a_{l+1} + \cdots + a_{r-1} + a_r + 1$ grams, since each stone weighs one gram except for the special stone, which weighs two grams.

So we can determine if a range $a_l,…,a_r$ contains the special pile using a single query.

Now we can binary search for the answer: first check the range $a_1,…,a_{n/2}$. If it has the special pile, then split it into two parts and check if one of them has the special stone; otherwise, check the other half.

This will take at most $\lceil \log_2{2 \cdot 10^5} \rceil = 18$ queries, which is well below the limit of 30.

The time complexity is $O(n)$ (for reading the input).
 
