#include <iostream>
#include <vector>
#include <map>
using namespace std;

class SetTime {
public :
	void upTime()
	{
		cout << "�ð��� 1�ð� �÷Ƚ��ϴ�." << endl;
	}
	void downTime()
	{
		cout << "�ð��� 1�ð� ���Ƚ��ϴ�." << endl;
	}
};

class SetAlarm {
public:
	void onAlarm()
	{
		cout << "�˶��� �׽��ϴ�." << endl;
	}
	void offAlarm()
	{
		cout << "�˶��� �����ϴ�." << endl;
	}
};

class FacadeAlarm {
	SetTime* setTime;
	SetAlarm* setAlarm;
public :
	FacadeAlarm() : setTime(), setAlarm() 
	{
		cout << "�˶��� �����Ǿ����ϴ�." << endl << endl;
	}
	void uppingTime()
	{
		setTime->upTime();
	}
	void downdingTime()
	{
		setTime->downTime();
	}
	void turnOnAlarm()
	{
		setAlarm->onAlarm();
	}
	void turnOffAlarm()
	{
		setAlarm->offAlarm();
	}
};

int main()
{
	FacadeAlarm* alamr = new FacadeAlarm();
	
	alamr->uppingTime();
	alamr->downdingTime();
	alamr->turnOnAlarm();
	alamr->turnOffAlarm();

	return 0;
}