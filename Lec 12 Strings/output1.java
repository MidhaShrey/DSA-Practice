public class output1 {
	public static void main(String[] args) {
		StringBuffer str1 = new StringBuffer("");
		for (int i = 0; i < 5; i++) {
			str1.append((char) ('a' + i));
		}
		System.out.println(str1);
	}
}
// Output: abcde
// Explanation: a StringBuffer named str1 is initialized with an empty string. Inside the loop, characters 'a' through 'e' (i.e., the characters 'a', 'b', 'c', 'd', and 'e') are appended to the str1. Finally, the str1 is printed, resulting in the string "abcde" being printed to the console.