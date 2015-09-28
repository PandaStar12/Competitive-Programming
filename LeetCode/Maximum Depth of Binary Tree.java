
public class Solution {

  public int maxDepth(TreeNode root, int depth) {

    if (root == null) return 0;

    if (root.left == null && root.right == null) {
      return depth + 1;
    }

    return Math.max(maxDepth(root.left, depth + 1), Math.max(maxDepth(root.right, depth + 1), depth));
  }

  public int maxDepth(TreeNode root) {
    return maxDepth(root, 0);
  }
}