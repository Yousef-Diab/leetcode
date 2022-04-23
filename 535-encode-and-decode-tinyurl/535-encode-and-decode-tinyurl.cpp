class Solution {
public:
string tiny = "http://tinyurl.com/";
char chars[36] = { 'a','b','c','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9',};
int ch = 5;
string en = "";
unordered_map<string, string> original;
string encode(string longUrl) {
    for (int i = 0; i < 25; i++) {
        en += chars[rand() % ch];
    }
    original[en] = longUrl;
    return tiny + en;
}

// Decodes a shortened URL to its original URL.
string decode(string shortUrl) {
    return original[en];
}
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));