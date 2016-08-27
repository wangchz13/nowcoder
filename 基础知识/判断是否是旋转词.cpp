class Rotation {
public:
    bool chkRotation(string A, int lena, string B, int lenb) {
        if(lena != lenb) return false;
        string strstr = A+A;
        return strstr.find(B) != string::npos;
    }
};
