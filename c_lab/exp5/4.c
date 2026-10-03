#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int is_leap_year(int y) {
    if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)){
        return 1;
    }
    return 0;
}

int days_in_month(int m, int leap) {
    int days[12] = {31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};
    if (m == 2 && leap) {
        return 29;
    }
    return days[m - 1];
}

int is_valid(struct date d) {
    if (d.year < 1 || d.month < 1 || d.month > 12 || d.day < 1) {
        return 0;
    }
    if (d.day <= days_in_month(d.month, is_leap_year(d.year))){
        return 1;
    }
    return 0;
}

struct date next_date(struct date d) {
    struct date n = d;
    if (d.day < days_in_month(d.month, is_leap_year(d.year))) {
        n.day++;
    } else {
        n.day = 1;
        if (d.month == 12) {
            n.month = 1;
            n.year++;
        } else {
            n.month++;
        }
    }
    return n;
}

int main() {
    struct date d;

    printf("Enter day: ");
    scanf("%d", &d.day);
    printf("Enter month: ");
    scanf("%d", &d.month);
    printf("Enter year: ");
    scanf("%d", &d.year);

    if (!is_valid(d)) {
        printf("%02d-%02d-%04d: invalid date\n", d.day, d.month, d.year);
        return 0;
    }
    struct date n = next_date(d);
    printf("the day after %02d-%02d-%04d is  %02d-%02d-%04d\n",
            d.day, d.month, d.year, n.day, n.month, n.year);
    return 0;
}