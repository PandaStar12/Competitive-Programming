public class Solution {
  public boolean isAnagram(String s, String t) {
    int[] dictionary = new int[30];

    for (char c : s.toCharArray()) {
      dictionary[Character.getNumericValue(c) - Character.getNumericValue('a')]++;
    }

    for (char c : t.toCharArray()) {
      dictionary[Character.getNumericValue(c) - Character.getNumericValue('a')]--;
    }

    for (int i : dictionary) {
      if (i != 0) return false;
    }

    return true;
  }
}