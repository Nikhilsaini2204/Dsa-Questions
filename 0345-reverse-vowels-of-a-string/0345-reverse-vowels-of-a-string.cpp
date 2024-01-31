class Solution
{
    public:
        bool isVowel(char c)
        {
            return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
        }

    string reverseVowels(string str)
    {
        int i = 0, j = str.length() - 1;
        while (i < j)
        {
            if (!isVowel(str[i]))
            {
                i++;
                continue;
            }
            if (!isVowel(str[j]))
            {
                j--;
                continue;
            }
            swap(str[i], str[j]);
            i++;
            j--;
        }
        return str;
    }
};