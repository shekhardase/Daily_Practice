// https://www.codechef.com/problems/TRUTHLIE

// Problem: Truth Tellers and Liars 101
// You are a traveler at a junction with two paths—one leading to eternal happiness, the other to certain doom. There are N + M people at the junction:

// N people always tell the truth.
// M people may tell the truth or lie.
// All of these people know which path leads to eternal happiness, but you do not know who is a truth-teller and who isn't.

// You can ask a randomly chosen group of X people the following question: "Which among the two paths leads to eternal happiness?"

// You need to determine if it's possible to be certain of the correct path by asking a minimal number of people, X. If it is possible, find the minimal X that guarantees you will know the correct path no matter which X people you ask. If it is not possible to be sure of the correct path, return -1.

// Input Format:
// The first line of input contains a single integer T, denoting the number of test cases.
// Each test case consists of two space-separated integers:
// N: The number of truth-tellers.
// M: The number of people who may or may not tell the truth.
// Output Format:
// For each test case:
// Print -1 if it is impossible to determine the correct path.
// Otherwise, print the minimal integer X (1 ≤ X ≤ N + M) such that you can be sure of the path to eternal happiness after asking any X people.