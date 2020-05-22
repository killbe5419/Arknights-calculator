#include <iostream>
using namespace std;

class Material {
public:
    //黄色素材
    int D32 = 0;
    int NAMIPIAN = 0;
    int JUHEJI = 0;

    //紫色素材
    int DAHEJIN = 0;
    int DAJIAO = 0;
    int R_24 = 0;
    int DAZHUAN = 0;
    int DAMENG = 0;
    int DACHUN = 0;
    int DAZHUANGZHI = 0;
    int DATONG = 0;
    int DATIE = 0;
    int DAZHI = 0;
    int DATANG = 0;
    int DASHIKUAI = 0;

    //蓝色素材
    int JIAO = 0;
    int ZHUANGZHI = 0;
    int TONG = 0;
    int TIE = 0;
    int TANG = 0;
    int ZHI = 0;
    int SHIKUAI = 0;
    int CHUN = 0;
    int ZHUAN = 0;
    int R_12 = 0;
    int MENG = 0;
    int HEJIN = 0;

    //绿色素材
    int XIAOSHIKUAI = 0;

    void calc() {
        DAMENG += D32;
        DAZHUAN += D32;
        R_24 += D32;
        D32 = 0;

        DAZHUANGZHI += NAMIPIAN;
        DACHUN += 2 * NAMIPIAN;
        NAMIPIAN = 0;

        DASHIKUAI += JUHEJI;
        DATIE += JUHEJI;
        DATONG += JUHEJI;
        JUHEJI = 0;

        R_12 += R_24;
        SHIKUAI += 2 * R_24;
        TONG += R_24;
        R_24 = 0;

        ZHUAN += DAZHUAN;
        TIE += DAZHUAN;
        ZHUANGZHI += DAZHUAN;
        DAZHUAN = 0;

        MENG += 2 * DAMENG;
        ZHI += DAMENG;
        CHUN += DAMENG;
        DAMENG = 0;

        CHUN += DACHUN;
        TANG += DACHUN;
        R_12 += DACHUN;
        DACHUN = 0;

        ZHUANGZHI += DAZHUANGZHI;
        SHIKUAI += 2 * DAZHUANGZHI;
        ZHUAN += DAZHUANGZHI;
        DAZHUANGZHI = 0;

        TONG += 2 * DATONG;
        TANG += DATONG;
        MENG += DATONG;
        DATONG = 0;

        TIE += 2 * DATIE;
        ZHUANGZHI += DATIE;
        ZHI += DATIE;
        DATIE = 0;

        ZHI += 2 * DAZHI;
        TONG += DAZHI;
        CHUN += DAZHI;
        DAZHI = 0;

        TANG += 2 * DATANG;
        TIE += DATANG;
        MENG += DATANG;
        DATANG = 0;

        SHIKUAI += 4 * DASHIKUAI;
        DASHIKUAI = 0;

        ZHUANGZHI += DAHEJIN;
        ZHUAN += DAHEJIN;
        HEJIN += DAHEJIN;
        DAHEJIN = 0;

        TIE += DAJIAO;
        JIAO += DAJIAO;
        HEJIN += DAJIAO;
        DAJIAO = 0;

        XIAOSHIKUAI += 5 * SHIKUAI;
        SHIKUAI = 0;
    }
    void showResult() const {
        cout << "凝胶：" << JIAO << endl;
        cout << "全新装置：" << ZHUANGZHI << endl;
        cout << "酮凝集组：" << TONG << endl;
        cout << "异鉄组：" << TIE << endl;
        cout << "糖组：" << TANG << endl;
        cout << "聚酸脂组：" << ZHI << endl;
        cout << "扭转醇：" << CHUN << endl;
        cout << "研磨石：" << ZHUAN << endl;
        cout << "RMA70-12：" << R_12 << endl;
        cout << "轻锰矿：" << MENG << endl;
        cout << "炽合金：" << HEJIN << endl;
        cout << "固源岩：" << XIAOSHIKUAI << endl;
    }

};



int main() {
    Material m1{};
    cout << "D32钢?: ";
    cin >> m1.D32;
    cout << "双极纳米片?: ";
    cin >> m1.NAMIPIAN;
    cout << "聚合剂?: ";
    cin >> m1.JUHEJI;

    cout << "RMA70-24?: ";
    cin >> m1.R_24;
    cout << "五水研磨石?: ";
    cin >> m1.DAZHUAN;
    cout << "三水锰矿?: ";
    cin >> m1.DAMENG;
    cout << "白马醇?: ";
    cin >> m1.DACHUN;
    cout << "改良装置?: ";
    cin >> m1.DAZHUANGZHI;
    cout << "酮阵列?: ";
    cin >> m1.DATONG;
    cout << "异铁块?: ";
    cin >> m1.DATIE;
    cout << "聚酸脂块?: ";
    cin >> m1.DAZHI;
    cout << "糖聚块?: ";
    cin >> m1.DATANG;
    cout << "提纯源岩?: ";
    cin >> m1.DASHIKUAI;
    cout << "炽合金块?: ";
    cin >> m1.DAHEJIN;
    cout << "聚合凝胶?: ";
    cin >> m1.DAJIAO;

    cout << "凝胶?: ";
    cin >> m1.JIAO;
    cout << "装置?: ";
    cin >> m1.ZHUANGZHI;
    cout << "酮凝集组?: ";
    cin >> m1.TONG;
    cout << "异鉄组?: ";
    cin >> m1.TIE;
    cout << "糖组?: ";
    cin >> m1.TANG;
    cout << "聚酸脂组?: ";
    cin >> m1.ZHI;
    cout << "固源岩组?: ";
    cin >> m1.SHIKUAI;
    cout << "扭转醇?: ";
    cin >> m1.CHUN;
    cout << "研磨石?: ";
    cin >> m1.ZHUAN;
    cout << "RMA70-12?: ";
    cin >> m1.R_12;
    cout << "轻锰矿?: ";
    cin >> m1.MENG;
    cout << "炽合金?: ";
    cin >> m1.HEJIN;
    cout << endl;

    m1.calc();
    m1.showResult();
}