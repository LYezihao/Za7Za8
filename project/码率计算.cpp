#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double way, GB, hours, minutes, Ps;
    int choice;
    do {
        cout << "1 ����(MbPs)=��Ƶ��С(MB)x8/��Ӱ����" << endl;
        cout << "2 ����(KbPs)=��Ƶ��С(KB)x8/��Ӱ����" << endl;
        cout << "����������Ҫ�ļ������ʷ�ʽ��";
        cin >> way;
        cin.clear(); 
        cin.ignore(100, '\n'); 
        if (way == 1) {
            cout << "������Ƶ��С��GB����";
            cin >> GB;
            cout << "�����ӰСʱ��";
            cin >> hours;
            cout << "�����Ӱ���ӣ�";
            cin >> minutes;
            Ps = (GB * 1000) * 8 / (hours * 3600 + minutes * 60);
            cout << fixed << setprecision(2) << Ps << "       " << "�ο����ݣ�1080p 4 , 2k 3.6 , 4k 8 " << endl;
        } else if (way == 2) {
            cout << "������Ƶ��С��GB����";
            cin >> GB;
            cout << "�����ӰСʱ��";
            cin >> hours;
            cout << "�����Ӱ���ӣ�";
            cin >> minutes;
            Ps = (GB * 1000000) * 8 / (hours * 3600 + minutes * 60);
            cout << fixed << setprecision(2) << Ps << "       " << "�ο����ݣ�1080p 4000 , 2k 3600 , 4k 8000 " << endl;
        } else {
            cout << "��Ч��ѡ�" << endl;
        }
        cout << "��0�˳�ϵͳ����1��ͷִ�У� "<<endl;
        cin >> choice;
    } while (choice == 1); 
    return 0;
}
