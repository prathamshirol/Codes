/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
       ListNode cur1=headA;
        ListNode cur2=headB;
        int c1=0;
        int c2=0;
        while(cur1!=null)
        {
            c1++;
            cur1=cur1.next;
        }
         while(cur2!=null)
        {
            c2++;
            cur2=cur2.next;
        }
        while(c1>c2)
        {
            c1--;
            headA=headA.next;
        }
         while(c2>c1)
        {
            c2--;
            headB=headB.next;
        }
       while(headA!=headB)
       {
           headA=headA.next;
           headB=headB.next;
           
       }
        return headB;
        
        
    }
}

 