public class Solution {

  public void delete(ListNode head) {
    if (head == null) return;
    if (head.next == null) return;

    if (head.val == head.next.val) {
      head.next = head.next.next;
      delete(head);
    }

    delete(head.next);
  }

  public ListNode deleteDuplicates(ListNode head) {
    delete(head);
    return head;

  }
} 