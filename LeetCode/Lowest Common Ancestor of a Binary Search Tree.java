public class Solution {
  public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {

    if (p.val >= q.val) {
      TreeNode temp = q;
      q = p;
      p = temp;
    }

    if (root.val >= p.val && root.val <= q.val) return root;
    else if (root.val <= p.val && root.val <= q.val) {

      if (root.right == null) return root;
      else return lowestCommonAncestor(root.right, p, q);
    } else {
      if (root.left == null) return root;
      else return lowestCommonAncestor(root.left, p, q);
    }
  }
}