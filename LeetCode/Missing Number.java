public class Solution {
  public int missingNumber(int[] nums) {

    boolean isZero = false;
    int xor = nums.length;

    for (int i = 0; i < nums.length; i++) {
      if (nums[i] == 0) isZero = true;
      xor = xor ^ i ^ nums[i];
    }

    if (!isZero) return 0;
    else return xor;

  }
}