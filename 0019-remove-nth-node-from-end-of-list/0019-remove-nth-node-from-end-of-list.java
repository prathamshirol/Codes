/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode cur = head;
        int c = 0;
        while (cur != null) {
            c++;
            cur = cur.next;
        }

        // If we need to remove the head node
        if (c == n) {
            return head.next;
        }

        cur = head;

        // Traverse to the (c-n)th node
        for (int i = 0; i < c - n - 1; i++) {
            cur = cur.next;
        }

        // Remove the nth node from the end
        cur.next = cur.next.next;

        return head;
    }
}
