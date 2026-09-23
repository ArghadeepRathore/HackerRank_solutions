// HackerRank Problem: Hello World N Times
// Link: https://www.hackerrank.com/challenges/fp-hello-world-n-times/problem
// Difficulty: Easy
// Language: scala


def f(n: Int): Unit = {
  if (n > 0) {
    println("Hello World")
    f(n - 1)      
  }
}
