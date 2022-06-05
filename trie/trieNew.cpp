#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    TrieNode *children[26];
    bool is_end;

    TrieNode()
    {
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
                current->children[index] = new TrieNode();
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
        return current->is_end;
    }

    bool startswith(string s)
    {
        TrieNode *curr = root;
        for (int i = 0; i < s.size(); i++)
        {
            int index = s[i] - 'a';
            if (curr->children[index] == nullptr)
            {
                return false;
            }
            curr = curr->children[index];
        }
        return true;
    }
};

int main()
{
    Trie *trie = new Trie();
    trie->root = new TrieNode();
}