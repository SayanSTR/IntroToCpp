/* 14. *Let x1,...,xn be a sequence of integers (possibly negative). For each possible sub-
 * sequence xi,...,xj onsider its sum Sij. Write a program that reads in the sequence
 * in order, with n given at the beginning, and prints out the maximum sum Sij over all
 * possible subsequences. Hint: This is a difficult problem. However, it will yeild to the 
 * general strategy: figure out what set of values V(k) we need to remember having seen 
 * the first k numbers. When you read the k+1th number, you must compute V(k+1) using the 
 * number read and V(k) which you computed earlier.
 */
