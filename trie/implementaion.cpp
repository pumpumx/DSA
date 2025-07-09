#include <iostream>

using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char x)
    {
        data = x;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{

public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtils(TrieNode *root, string word)
    {
        if (word.length() == 0)
        { // base case
            root->isTerminal = true;
            return;
        }

        char ch = word[0];
        ch = toupper(ch); // Assuming all characters will be upper characters
        int index = ch - 'A';

        TrieNode *child;
        if (root->children[index] != NULL)
        { // present
            child = root->children[index];
        }
        else
        { // Not present
            child = new TrieNode(ch);
            root->children[index] = child;
        }

        insertUtils(child, word.substr(1));
    }

    void insertIntoTrie(string word)
    {
        insertUtils(root, word);
    }

    bool searchHelper(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        char ch = toupper(word[0]);

        int index = ch - 'A'; // Assuming all is in uppercase;
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }

        return searchHelper(child, word.substr(1));
    }
    bool searchWord(string word)
    {
        return searchHelper(root, word);
    }

    bool removeWordHelper(TrieNode *root, string word)
    {
        if (word.length() == 0 && root->isTerminal == true)
        {
            root->isTerminal = false;
            return true;
        }

        int index = toupper(word[0]) - 'A'; // Assuming all words will be stored in upercase;
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }

        bool doesWordExist = removeWordHelper(child , word.substr(1));

        if(doesWordExist){
            delete root;
            return true;
        }
        
        return false;

   }

        bool removeWord(string word)
        {
            return removeWordHelper(root , word);
        }
    };

    int main()
    {
        Trie *t = new Trie();
        t->insertIntoTrie("abcd");
        bool ans = t->searchWord("abcd");
        cout << "Present or not -> " << ans << " ";
        bool removed = t->removeWord("abcd");
        bool newAns = t->searchWord("abcd");
    }