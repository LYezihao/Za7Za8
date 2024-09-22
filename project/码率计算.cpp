#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double way, GB, hours, minutes, Ps;
    int choice;
    do {
        cout << "1 码率(MbPs)=视频大小(MB)x8/电影秒数" << endl;
        cout << "2 码率(KbPs)=视频大小(KB)x8/电影秒数" << endl;
        cout << "请输入你想要的计算码率方式：";
        cin >> way;
        cin.clear(); 
        cin.ignore(100, '\n'); 
        if (way == 1) {
            cout << "输入视频大小（GB）：";
            cin >> GB;
            cout << "输入电影小时：";
            cin >> hours;
            cout << "输入电影分钟：";
            cin >> minutes;
            Ps = (GB * 1000) * 8 / (hours * 3600 + minutes * 60);
            cout << fixed << setprecision(2) << Ps << "       " << "参考数据：1080p 4 , 2k 3.6 , 4k 8 " << endl;
        } else if (way == 2) {
            cout << "输入视频大小（GB）：";
            cin >> GB;
            cout << "输入电影小时：";
            cin >> hours;
            cout << "输入电影分钟：";
            cin >> minutes;
            Ps = (GB * 1000000) * 8 / (hours * 3600 + minutes * 60);
            cout << fixed << setprecision(2) << Ps << "       " << "参考数据：1080p 4000 , 2k 3600 , 4k 8000 " << endl;
        } else {
            cout << "无效的选项。" << endl;
        }
        cout << "按0退出系统，按1从头执行： "<<endl;
        cin >> choice;
    } while (choice == 1); 
    return 0;
}
