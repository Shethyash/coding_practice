#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool is_end;

    TrieNode(char data)
    {
        this->data = data;
        for (int i = 0; i < 26; i++)
        {
            children[i] = nullptr;
        }
        is_end = false;
    }
};

class Trie
{
public:
    TrieNode *root;

    void insert(string word)
    {
        TrieNode *current = root;
        for (int i = 0; i < word.length(); i++)
        {
            int index = word[i] - 'a';
            if (current->children[index] == nullptr)
            {
                current->children[index] = new TrieNode(word[i]);
            }
            current = current->children[index];
        }
        current->is_end = true;
    }

    bool search(string word)
    {
        TrieNode *current = root;
        for (int i = 0; i < word.length(); i++)
        {
            int index = word[i] - 'a';
            if (current->children[index] == nullptr)
            {
                return false;
            }
            current = current->children[index];
        }
        return true;
    }
};

int main()
{
    Trie *trie = new Trie();
    trie->root = new TrieNode(' ');
}