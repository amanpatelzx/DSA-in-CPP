class Node{
public:
    char ch;
    bool isComplete;
    unordered_map<char , Node*> mp;
    Node(){
        ch = '\0';
        isComplete = false;
    }
};
class Trie {
public:
    Node* currHead;
    Trie() {
        currHead = new Node();
    }
    
    void insert(string word) {
        Node* curr = currHead;
        for(int i = 0; i < word.size(); i++){
            char a = word[i];
            if(!curr->mp.count(a)){
                Node* temp = new Node;
                temp->ch = a;
                temp->isComplete = false;
                curr->mp[a] = temp;
                curr = temp;
            }
            else curr = curr->mp[a];
            if(i == word.size()-1) curr->isComplete = true;
        }
    }
    
    bool search(string word) {
        Node* curr = currHead;
        for(int i = 0; i < word.size(); i++){
            char a = word[i];
            if(curr->mp.count(a)){
                curr = curr->mp[a];
            }
            else return false;
            if(i == word.size()-1){
                if(!curr->isComplete) return false;
            }
        }
        return true;
    }
    
    bool startsWith(string prefix) {
        Node* curr = currHead;
        for(int i = 0; i < prefix.size(); i++){
            char a = prefix[i];
            if(curr->mp.count(a)){
                curr = curr->mp[a];
            }
            else return false;
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */