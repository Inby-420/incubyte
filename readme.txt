// Incubyte hiring challenge
// TDD in C++

Problem Statement: 1. In a test-first manner, create a simple class named StringCalculator and a method
int add(String numbers)
1. The method can take numbers as a string separated by comma and will return their sum (for an
empty string, it will return 0). For example:
Input: ""
Output: 0
Input: "1"
Output: 1
Input: "1,2"
Output: 3
2. Start with the simplest test case of an empty string and move to one & two numbers.
3. Remember to solve things as simply as possible so that you force yourself to write tests you did
not think about
4. Remember to refactor after each passing test.
2. Allow the add method to handle an unknown amount of numbers
3. Allow alphabets to be included with numbers.
The numeric value for the alphabet would be equal to its position.
Such as a = 1, b = 2, c = 3 … y = 25, z = 26.
For example:
Input: "1,2,a,c"
Output: 7 (1 + 2 + 1 + 3)
Note: Use lowercase alphabets only.
4. Calling add with a negative number will throw an exception “Negatives not allowed” - and the negative
that was passed.
5. If there are multiple negatives, show all of them in the exception message
6. Numbers bigger than 1000 should be ignored.
For example:
Input: "2,1001"
Output: 2
(We expect students to solve at least up to this point. Everything from 7 onwards is optional)
3 / 3
7. (Optional) Allow the add method to handle new lines between numbers (instead of commas).
1. The following is ok:
Input: "1\n2,3"
 Output: 6
2. The following is INVALID input so do not expect it: “1,\n” (no need to write a test for it)
8. (Optional) Support different delimiters:
To change a delimiter, the beginning of the string will contain a separate line that looks like this:
"//[delimiter]\n[numbers…]"
For example:
Input: "//;\n1;2"
Output: 3
Since the default delimiter is ‘;.’
Note: All existing scenarios and tests should still be supported. Don’t use alphabets and numbers as
delimiters.
9. (Optional) Support odd/even addition: If the beginning of the string starts with 0// then add numbers
at odd indices and if it starts with 1// then add numbers at even indices.
Input: "//[***]\n1***2***3"
Output: 6
Note: Existing test cases should still pass.


Solution Format:
(1). The first file code.cpp contains 8/9 problem statements provided with all the required test cases.
(2). The next file is a combined solution of all 9 problem statements with some modifications on test case rules which are stated as follows
	for odd and even functionality, 0// is odd and 1// is even respectively
	note: in this program odd and even will be decided post changes in delimiter if any
Please Consider the first file in case moficiations violates the protocol of evaluation.

// Solved by: Hastak Patel
// Pune Institute of Computer Technology
// email: hastakpatel19@gmail.com
