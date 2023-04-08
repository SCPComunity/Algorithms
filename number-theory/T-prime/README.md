# Explanation

It can be shown that only squares of prime numbers are T-primes (Parent in the statement). and that there are not too many of them — as many as there are prime numbers not greater than. You can precompute primes (using, for example, the sieve of Eratosthenes), then store them in an array or any data structure, then we can answer each query by simply checking whether the square root of the number in question is a prime or not.

Complexity: $O(n)$ or $O(n \cdot \sqrt{x})$
