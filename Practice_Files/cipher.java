// package Daily_Practice.Practice_Files;

import java.util.Scanner;

/**
 * cipher
 */
public class cipher {

    public static StringBuffer cipher(String name, int key) {
        StringBuffer result = new StringBuffer();

        for (int i = 0; i < name.length(); i++) {
            if (Character.isUpperCase(name.charAt(i))) {
                char ch = (char) (((int) name.charAt(i) +
                        key - 65) % 26 + 65);
                result.append(ch);
            } else if (Character.isLowerCase(name.charAt(i))) {
                char ch = (char) (((int) name.charAt(i) +
                        key - 97) % 26 + 97);
                result.append(ch);
            } else {
                result.append(name.charAt(i)); // Keep non-alphabet characters unchanged
            }
        }
        return result;
    }

    public static int findKey(String original, String cipheredText) {
        // Assuming that both strings are of equal length and valid
        for (int i = 0; i < original.length(); i++) {
            char origChar = original.charAt(i);
            char cipherChar = cipheredText.charAt(i);

            if (Character.isLetter(origChar) && Character.isLetter(cipherChar)) {
                if (Character.isUpperCase(origChar) && Character.isUpperCase(cipherChar)) {
                    return (cipherChar - origChar + 26) % 26;
                } else if (Character.isLowerCase(origChar) && Character.isLowerCase(cipherChar)) {
                    return (cipherChar - origChar + 26) % 26;
                }
            }
        }
        return -1; // In case there's no valid key found
    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        System.out.println("Enter the original string:");
        String original = input.nextLine();
        System.out.println("Enter the key:");
        int key = input.nextInt();
        input.nextLine(); // Consume the remaining newline
        input.close();

        StringBuffer cipheredText = cipher(original, key);
        System.out.println("Ciphered text: " + cipheredText);

        int foundKey = findKey(original, cipheredText.toString());
        System.out.println("Found key: " + foundKey);

    }
}
