#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
struct compare 
{
    bool operator()(const ListNode* a, const ListNode* b) 
	{
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) 
	{
        priority_queue<ListNode*, vector<ListNode*>, compare> pq;
        for (ListNode* list : lists) 
		{
            if (list)
                pq.push(list);
        }
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        while (!pq.empty()) 
		{
            ListNode* minNode = pq.top();
            pq.pop();
            tail->next = minNode;
            tail = tail->next;
            if (minNode->next)
                pq.push(minNode->next);
        }
        return dummy->next;
    }
};
void printList(ListNode* head) 
{
    while (head) 
	{
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() 
{
    Solution solution;
    vector<ListNode*> lists;
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(5);
    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);
    ListNode* l3 = new ListNode(2);
    l3->next = new ListNode(6);
    lists.push_back(l1);
    lists.push_back(l2);
    lists.push_back(l3);
    ListNode* mergedList = solution.mergeKLists(lists);
    printList(mergedList);   
}

