int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int numRescueBoats(int* people, int peopleSize, int limit) {
    int n = peopleSize;
    int l = 0;
    int r = n - 1;
    int b = 0;

    qsort(people, peopleSize, sizeof(int), compare);

    while (l <= r) {
        if (people[l] + people[r] <= limit) {
            l++;
            r--;
        }
        else {
            r--;
        }

        b++;
    }

    return b;
}