public class Solution {

  public boolean isBothNull(Object A, Object B) {
    return ((A == null) && (B == null));
  }

  public boolean isBothNotNull(Object A, Object B) {
    return ((A != null) && (B != null));
  }

  public boolean isSameTree(TreeNode p, TreeNode q) {

    if (isBothNull(p, q)) return true;
    if (!isBothNotNull(p, q) && !isBothNull(p, q)) return false;

    boolean left = isSameTree(p.left, q.left);
    boolean right = isSameTree(p.right, q.right);
    return ((p.val == q.val) && right && left);
  }

}