public class Solution {
  public int titleToNumber(String s) {
    int val = 0;

    for (char c : s.toCharArray()) {
      val = val * 26 + (Character.valueOf(c) - Character.valueOf('A') + 1);
    }

    return val;
  }
}