class LRUCache {
public:
    struct Node{
        int key;
        int value;
        Node *prev;
        Node *next;
        Node(int k,int v): key(k),value(v),prev(nullptr),next(nullptr){}
    };
    Node* head;
    Node* tail;
    unordered_map<int,Node*> mp;
    void remove(Node* node){
        node->prev->next=node->next;
        node->next->prev=node->prev;
    }
    void add(Node* node){
        node->next=head->next;
        node->prev=head;
        head->next->prev=node;
        head->next=node;
    }
    int capacity;

    LRUCache(int capacity) {
        this->capacity=capacity;
        head=new Node(-1,-1);
        tail=new Node(-1,-1);
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()) return -1;
        Node* node=mp[key];
        remove(node);
        add(node);
        return mp[key]->value;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            Node* node=mp[key];
            node->value=value;
            remove(node);
            add(node);
        }
        else{
            if(mp.size()==capacity){
                Node* lru=tail->prev;
                remove(lru);
                mp.erase(lru->key);
                delete lru;
            }
            Node* node=new Node(key,value);
            add(node);
            mp[key]=node;
        }
        
    }
};
// hari krishan puri
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */