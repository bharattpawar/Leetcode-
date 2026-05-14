class Node {
public:

    int key;
    int value;

    Node* prev;
    Node* next;

    Node(int k, int v) {

        key = k;
        value = v;

        prev = NULL;
        next = NULL;
    }
};

class LRUCache {
public:

    int capacity;
    int size = 0;

    Node* head = NULL;
    Node* tail = NULL;

    map<int, Node*> mp;

    LRUCache(int capacity) {

        this->capacity = capacity;
    }

    void moveToTail(Node* temp) {

        // already recent
        if(temp == tail)
            return;

        // head node
        if(temp == head) {

            head = head->next;

            if(head)
                head->prev = NULL;
        }

        else {

            temp->prev->next = temp->next;

            if(temp->next)
                temp->next->prev = temp->prev;
        }

        tail->next = temp;

        temp->prev = tail;
        temp->next = NULL;

        tail = temp;
    }

    int get(int key) {

        if(mp.find(key) == mp.end())
            return -1;

        Node* temp = mp[key];

        moveToTail(temp);

        return temp->value;
    }

    void put(int key, int value) {

        // already exists
        if(mp.find(key) != mp.end()) {

            Node* temp = mp[key];

            temp->value = value;

            moveToTail(temp);

            return;
        }

        // full
        if(size == capacity) {

            mp.erase(head->key);

            Node* temp = head;

            head = head->next;

            if(head)
                head->prev = NULL;

            delete temp;

            size--;
        }

        Node* newNode = new Node(key, value);

        // empty
        if(head == NULL) {

            head = tail = newNode;
        }

        else {

            tail->next = newNode;

            newNode->prev = tail;

            tail = newNode;
        }

        mp[key] = newNode;

        size++;
    }
};