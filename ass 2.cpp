#include <iostream>

class Time {
private:
    int hours;
    int minutes;

public:
    void settime(int h, int m) {
        hours = h;
        minutes = m;
    }

    void showtime() {
        std::cout << hours << " hours and " << minutes << " minutes" << std::endl;
    }

    Time sum(Time t) {
        Time result;
        result.hours = hours + t.hours;
        result.minutes = minutes + t.minutes;
        if (result.minutes >= 60) {
            result.minutes -= 60;
            result.hours++;
        }
        return result;
    }
};

int main() {
    Time t1, t2, t3;
    int h, m;

    std::cout << "Enter hours and minutes for time 1: ";
    std::cin >> h >> m;
    t1.settime(h, m);

    std::cout << "Enter hours and minutes for time 2: ";
    std::cin >> h >> m;
    t2.settime(h, m);

    t3 = t1.sum(t2);

    std::cout << "Time 1: ";
    t1.showtime();

    std::cout << "Time 2: ";
    t2.showtime();

    std::cout << "Sum of Time 1 and Time 2: ";
    t3.showtime();

    return 0;
}
