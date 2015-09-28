public class Solution {

  public int sumOfDigits(int num) {
    String numStr = Integer.toString(num);
    int sum = 0;

    for (char digit : numStr.toCharArray()) {
      sum += Character.getNumericValue(digit);
    }

    return sum;
  }

  public int addDigits(int num) {
    if (num < 10) return num;
    else return addDigits(sumOfDigits(num));
  }
}