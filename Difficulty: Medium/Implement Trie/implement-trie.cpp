// User function template for C++
class Trie {
  private:
    struct Node{
        Node* children[26];
        bool isend;
        Node(){
            isend=false;
            for(int i=0;i<26;i++){
                children[i]=NULL;
            }
        }
    };
    Node* root;
  public:

    Trie() {
        root=new Node();
        // implement Trie
    }

    void insert(string &word) {
        // insert word into Trie
        Node* node=root;
        for(char ch:word){
            int i=ch-'a';
            if(node->children[i]==NULL)
                node->children[i]=new Node();
            node=node->children[i];
        }
        node->isend=true;
    }

    bool search(string &word) {
        // search word in the Trie
        Node* node=root;
        for(char ch:word){
            int i=ch-'a';
            if(node->children[i]==NULL)
               return false;
            node=node->children[i];
        }
        return node->isend;
    }

    bool isPrefix(string &word) {
        Node* node=root;
        for(char ch:word){
            int i=ch-'a';
            if(node->children[i]==NULL)
                return false;
            node=node->children[i];
        }
        return true;
        // search prefix word in the Trie
    }
};
  