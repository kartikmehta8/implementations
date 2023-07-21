bool pal(string& s, int st, int end) {
    if (st >= end) return true;
    if (s[st] != s[end]) return false;
    pal(s, st+1, end-1);
}

bool isPalindrome(string& str) {
    return pal(str, 0, str.size()-1);
}
