/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> deepCopy;
        deepCopy[NULL] = NULL;
        Node* curr = head;
        while(curr){
            if(deepCopy.find(curr) == deepCopy.end())
                deepCopy[curr] = new Node(0);
            deepCopy[curr]->val = curr->val;
            if(deepCopy.find(curr->next) == deepCopy.end())
                deepCopy[curr->next] = new Node(0);
            deepCopy[curr]->next = deepCopy[curr->next];
            if(deepCopy.find(curr->random) == deepCopy.end())
                deepCopy[curr->random] = new Node(0);
            deepCopy[curr]->random = deepCopy[curr->random];
            curr = curr->next;
        }
        return deepCopy[head];
    }
};
