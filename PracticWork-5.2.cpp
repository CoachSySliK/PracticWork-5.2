#include <iostream>

using namespace std;

int main()
{
    int date;
    int holiday[8] = { 1,2,3,4,5,8,9,10 };
    int dayWeek = 0;
        
    dayWeek:
    cout << "Какой сегодня день недели? ";
    cin >> dayWeek; 

    if (dayWeek < 1 || dayWeek > 7) {
        cout << "Так не бывает!\n";
        goto dayWeek;
    }
    
    date:
    cout << "Какоe сегодня число? ";
    cin >> date;
    
    if (date < 1 || date > 31) {
        cout << "Так не бывает!\n";
        goto date;
    }

    for (int i = 0; i < 8; i++) {
        if (date == holiday[i]) {
            cout << "Выходной!\n";
            return 1;
        }
    }
        
    if ((date + dayWeek) % 7 == 0 || (date + dayWeek) % 7 == 6) {
        cout << "Выходной!\n";
    }
    else {
        cout << "Рабочий!\n";
    }

    return 0;
}


