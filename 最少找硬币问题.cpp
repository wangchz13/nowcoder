//最少找硬币问题
#include <iostream>
using namespace std;

int value[7] = {100, 50, 20, 10, 5, 2, 1};//硬币种类
int count[7] = {10, 5, 3, 2, 2, 1, 0};//每种硬币的个数
int res[7] = {0};//最终找到的结果
bool flag = false;//是否已经找完

void DFS(int total, int p){
    if(flag) return;
    if(p == 7){
        if(total == 0) flag = true;
        return;
    }
    int max = min(total/value[p], count[p]);
    for(int i = max; i >= 0; --i){//最优求解
        res[p] = i;
        DFS(total - i*value[p], p+1);
        if(flag) return;
    }
}

int main(){
    int pay = 120;
    DFS(pay, 0);
    if(flag)
        for(int i = 0; i < 7; i++)
            cout << res[i] << " ";
    else
        cout << "error";
    return 0;
}
