class FoldPaper {
public:
    void fold(int i,bool down){
        if(i > N) return;
        fold(i + 1,true);     //所有左孩子都为down
        ret.push_back(down ? "down" : "up");//遍历顺序为右中左
        fold(i + 1,false);    //所有右孩子都为up
    }
    vector<string> foldPaper(int n) {
        N = n;
        fold(1,true);
        return ret;
    }
    vector<string> ret;
    int N;
};
