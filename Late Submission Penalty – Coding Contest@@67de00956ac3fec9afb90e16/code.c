// Your code here...
int calculatePenalty(int subDay, int subMonth, int subYear, int dueDay, int dueMonth, int dueYear) {
    if (subYear > dueYear) {
        return 5000; // Different year
    } else if (subYear == dueYear && subMonth > dueMonth) {
        return 200 * (subMonth - dueMonth); // Same year, late by months
    } else if (subYear == dueYear && subMonth == dueMonth && subDay > dueDay) {
        return 10 * (subDay - dueDay); // Same month and year, late by days
    } else {
        return 0; // On time or early
    }
}
