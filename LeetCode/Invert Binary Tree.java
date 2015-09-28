public class Solution {

  public void inverse(TreeNode root) {
    if (root == null) return;

    TreeNode T = root.right;
    root.right = root.left;
    root.left = T;
    inverse(root.left);
    inverse(root.right);
  }
    
  public TreeNode invertTree(TreeNode root) {
    inverse(root);
    return root;
  }
}