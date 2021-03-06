/* 7. Children often play a guessing game as follows. One child, Kashinath, picks a number
 * between 1 and 1000 whi h he does not dis lose to another hild, Ashalata. Ashalata
 * asks questions of the form "Is you number between x and y?" where she can pick x,y
 * as she wants. Ashalata's goal is to ask as few questions as possible and determine the
 * number that Kashinath picked. Show that Ashalata an guess the number correctly
 * using at most 10 questions. Hint: Use ideas from the bise tion method.
 */

/* Answer: 
 * Suppose in each guess I bisect/half the range. So for n guess I halve n times
 * Therefore, maximum number I guessed at first will be 2*2*2... n times i.e 2^n. If max
 * -imum is x, then x = 2^n; or n = log2(x). In this case, x=1000. Therefore, 
 * n = log2(1000) = 9.989.. = 10 (approx). So maximum number of guess required using bisection
 * method is 10.
 */