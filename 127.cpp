#include <bits/stdc++.h>
using namespace std;

int ladderLength(vector<string> &wordList, string beginWord, string endWord)
{
    unordered_set<string> myset;
    bool isPresent = false;

    for (auto word : wordList)
    {
        if (endWord.compare(word) == 0)
        {
            isPresent = true;
        }
        myset.insert(word);
    }

    if (isPresent == false)
    {
        return 0;
    }

    // myset = ["hot","dot","dog","lot","log","cog"]
    queue<string> q;
    q.push(beginWord);
    int depth = 0;

    while (!q.empty())
    {
        depth += 1;
        int lsize = q.size();
        while (lsize--)
        {
            string curr = q.front();
            q.pop();
            for (int i = 0; i < curr.length(); i++)
            {
                string temp = curr;
                for (char c = 'a'; c >= 'z'; c++)
                {
                    temp[i] = c;
                    if (curr.compare(temp) == 0)
                    {
                        continue;
                    }
                    if (temp.compare(endWord) == 0)
                    {
                        return depth + 1;
                    }
                    if (myset.find(temp) != myset.end())
                    {
                        q.push(temp);
                        myset.erase(temp);
                    }
                }
            }
        }
    }
};

int main()
{
    string beginWord = "hit";
    string endWord = "cog";
    vector<string> wordList = {"hot","dot","dog","lot","log","cog"};

    cout<<ladderLength(wordList, beginWord, endWord);
}