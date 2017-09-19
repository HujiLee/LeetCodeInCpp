#include <cstdlib>
#include <iostream>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}

  public:
    ListNode *setNext(int val)
    {
        if (next == nullptr)
        {
            next = new ListNode(val);
        }
        else
        {
            next->val = val;
        }
        return next;
    }
};

class Solution
{
  public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *pfast = dummy, *pslow = dummy;
        for (int i = 1; i <= n; i++)
        {
            pfast = pfast->next;
        }
        while (pfast->next != NULL)
        {
            pfast = pfast->next;
            pslow = pslow->next;
        }
        pslow->next = pslow->next->next;
        return dummy->next;
    }
};
using namespace std;
int main()
{
    {
        std::cout << (nullptr == NULL) << std::endl;
        int a = 8;
        printf("%d %d\n", a, 12);
        std::cout << a << " * " << 12 << std::endl;
    }
    {
        ListNode head(1);
        ListNode *nhead = Solution().removeNthFromEnd(&head, 1);
    }
    {
        ListNode head(1);
        head.setNext(2)->setNext(3)->setNext(4)->setNext(5);
        cout << head.val << endl;
        ListNode *nhead = Solution().removeNthFromEnd(&head, 2);
        cout << endl;
    }

    return 0;
}