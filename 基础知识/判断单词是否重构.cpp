class Transform {
public:
    bool chkTransform(string A, int lena, string B, int lenb) {
        if (lena != lenb) return false;
        int hash[128] = {0};
        for(auto i:A) hash[i]++;
        for(auto i:B) if(--hash[i] < 0) return false;
        return true;
    } 
};
