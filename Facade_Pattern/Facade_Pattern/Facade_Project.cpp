#include <iostream>
#include <vector>
#include <map>
using namespace std;

static unsigned int hour = 0;
static bool ring = false;

class SetTime {
public :
	void upTime()
	{
		hour++;
		cout << "�ð��� 1�ð� �÷Ƚ��ϴ�. : " << hour << endl;
	}
	void downTime()
	{
		hour--;
		cout << "�ð��� 1�ð� ���Ƚ��ϴ�. : " << hour << endl;
	}
};

class SetAlarm {
public:
	void turingUPAlarm()
	{
		ring = !ring;
		switch (ring)
		{
		case true :
			cout << "�˶��� �׽��ϴ�. : " << ring << endl;
			break;
		case false :
			cout << "�˶��� �����ϴ�. : " << ring << endl;
			break;
		default:
			break;
		}
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
	void turnAlarm()
	{
		setAlarm->turingUPAlarm();
	}
};

int main()
{
	FacadeAlarm* alamr = new FacadeAlarm();
	
	alamr->turnAlarm();
	alamr->turnAlarm();
	alamr->turnAlarm();

	return 0;
}