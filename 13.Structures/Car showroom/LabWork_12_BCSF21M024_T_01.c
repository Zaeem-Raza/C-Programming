#include<stdio.h>
#define size 20
#pragma warning(disable:4996)
char buffer;
struct date {
    int year;
    int week;
    int date;
    int month;
};

struct car {
    int srNum;
    char make[20];
    char model[30];
    int year;
    struct date purchaseDate;
};
void display(struct car* cars);
int compareString(const char s1[], const char s2[]);
void addCar(struct car* cars);
void search(struct car cars[]);
void edit(struct car cars[]);
void status(struct car cars[], int o);
void multipleFields(struct car cars[]);
void carsWithYear(struct car cars[]);
void displayModel(struct car cars[]);
void displayMake(struct car cars[]);
void report(struct car cars[]);
int del(struct car cars[]);

void display(struct car* cars) {
    printf("Car's Serial Number: %d\n", cars->srNum);
    printf("Car's maker name is: %s\n", cars->make);
    printf("Car's Model name is: %s\n", cars->model);
    printf("Car's year is: %d\n", cars->year);
    printf("Car was purchased on: %d %d %d on day of week: %d\n", cars->purchaseDate.date, cars->purchaseDate.month,
        cars->purchaseDate.year, cars->purchaseDate.week);
    printf("---------------------------------------------------\n");
}

// helper function to comapre if strings are equal or not
int compareString(const char s1[], const char s2[]) {
    int i = 0;
    int diff = 0;
    for (; *(s1 + i) && *(s2 + i) && !diff; ++i)
        diff = *(s1 + i) - *(s2 + i);
    if (!diff && (*(s1 + i) || *(s2 + i))) {
        if (*(s1 + i))
            diff = +*(s1 + i);
        else
            diff = -*(s2 + i);
    }
    return diff;
}

void addCar(struct car* cars) {
    cars->srNum = -1;
    while (cars->srNum < 1) {
        printf("Enter the serial number:\n");
        scanf_s("%d", &cars->srNum);
    }
    cars->year = -1;
    while (cars->year < 1) {
        printf("Enter the year:\n");
        scanf_s("%d", &cars->year);
    }
    scanf_s("%c", &buffer);
    printf("Enter the maker name:\n");
    gets(cars->make);
    printf("Enter the model name:\n");
    gets(cars->model);

    cars->purchaseDate.date = -1;

    while (cars->purchaseDate.date < 1 || cars->purchaseDate.date > 31) {
        printf("Enter the date:\n");
        scanf_s("%d", &cars->purchaseDate.date);
    }

    cars->purchaseDate.week = -1;

    while (cars->purchaseDate.week < 1 || cars->purchaseDate.week > 7) {
        printf("Enter the day of week:\n");
        scanf_s("%d", &cars->purchaseDate.week);
    }

    cars->purchaseDate.month = -1;

    while (cars->purchaseDate.month < 1 || cars->purchaseDate.month > 12) {
        printf("Enter the month:\n");
        scanf_s("%d", &cars->purchaseDate.month);
    }

    cars->purchaseDate.year = -1;

    while (cars->purchaseDate.year < 1) {
        printf("Enter the year:\n");
        scanf_s("%d", &cars->purchaseDate.year);
    }
}


void search(struct car cars[]) {
    int sNum = -1;
    printf("Enter the serial number to search:\n");
    while (sNum < 1) {
        printf("Enter the serial number:\n");
        scanf_s("%d", &sNum);
    }

    for (int i = 0; i < size; ++i) {
        if (cars[i].srNum == sNum) {
            display(&cars[i]);
            return;
        }
    }
    printf("\n\nNO CAR FOUND\n\n");
}


void edit(struct car cars[]) {
    int sNum = -1;
    while (sNum < 1) {
        printf("Enter the serial number:\n");
        scanf_s("%d", &sNum);
    }

    for (int i = 0; i < size; ++i) {
        if (cars[i].srNum == sNum) {
            cars[i].year = -1;
            while (cars[i].year < 1) {
                printf("Enter the year:\n");
                scanf_s("%d", &cars[i].year);
            }
            scanf_s("%c", &buffer);
            printf("Enter the maker name:\n");
            gets(cars[i].make);
            printf("Enter the model name:\n");
            gets(cars[i].model);
            return;
        }
    }
    printf("\n\nNO CAR FOUND\n\n");
}


int del(struct car cars[]) {
    int sNum = -1;
    printf("Enter the serial number to delete:\n");
    while (sNum < 1) {
        printf("Enter the serial number:\n");
        scanf_s("%d", &sNum);
    }

    for (int i = 0; i < size; ++i) {
        if (cars[i].srNum == sNum) {
            cars[i].srNum = -999; // to make the index available for other cars
            return 1;
            break;
        }
    }
    printf("\nNO CAR FOUND FOR THE GIVEN SERIAL NUMBER\n");
    return 0;
}


void report(struct car cars[]) {
    for (int i = 0; i < size; ++i) {
        if (cars[i].srNum != -999) {
            display(&cars[i]);
        }
    }
}

void displayMake(struct car cars[]) {
    char name[20];
    printf("Enter name:\n");
    scanf_s("%c", &buffer);
    gets(name);
    for (int i = 0; i < size; ++i) {
        if (!compareString(cars[i].make, name) && cars[i].srNum != -999) // noting the compare function to convert 0 (equal strings) to 1 (true)
            display(&cars[i]);
    }
}

void displayModel(struct car cars[]) {
    char name[30];
    printf("Enter name:\n");
    scanf_s("%c", &buffer);
    gets(name);
    for (int i = 0; i < size; ++i) {
        if (!compareString(cars[i].model, name) && cars[i].srNum != -999)
            display(&cars[i]);
    }
}

void carsWithYear(struct car cars[]) {
    int c = -1;
    while (c < 1 || c > 2) {
        printf("Enter 1 to display cars of specific year\nEnter 2 to display cars between two years:\n");
        scanf_s("%d", &c);
    }
    int year1 = -1, year2 = -1;
    while (year1 < 1) {
        printf("Enter year:\n");
        scanf_s("%d", &year1);
    }
    while (year2 < 1 && c == 2) {
        printf("Enter year:\n");
        scanf_s("%d", &year2);
    }

    for (int i = 0; i < size; ++i) {
        if (c == 1 && cars[i].srNum != -999 && cars[i].year == year1) // handling the two conditions separately
            display(&cars[i]);

        if (c == 2 && cars[i].srNum != -999 && cars[i].year >= year1 && cars[i].year <= year2)
            display(&cars[i]);
    }
}

void multipleFields(struct car cars[]) {
    int carYear = -1;
    char maker[20];
    char model[30];
    int sNum = -1;
    printf("Enter the car's year Enter -1 if you don't want to check for year:\n");
    scanf_s("%d", &carYear);
    printf("Enter the car's serial number Enter -1 if you don't want to check for serial number:\n");
    scanf_s("%d", &sNum);
    scanf("%c", &buffer);
    printf("Enter the maker name or Press Enter if you don't want to check for maker's name:\n");
    gets(maker);
    printf("Enter the model name or Press Enter if you don't want to check for model name:\n");
    gets(model);
    for (int i = 0; i < size; ++i) {
        // the conditions are easy to understand we will consider the empty element true in the conditions if the element is not empty then
        // we will compare the element with the array's element.....
        if (cars[i].srNum != -999 && ((sNum <= 0 || cars[i].srNum == sNum) && (carYear <= 0 || cars[i].year == carYear) &&
            (*maker == '\0' || !compareString(maker, cars[i].make)) && (*model == '\0' || !compareString(model, cars[i].model)))) {
            display(&cars[i]);
        }
    }
}

void status(struct car cars[], const int o) {
    printf("\n\nTOTAL CARS ARE:\t%d\n\n", o);
    for (int i = 0; i < size; ++i) {
        int count = 1; // count = 1 because the car is found
        for (int j = 0; j < i && count != -1; ++j) // loop to make sure the next members do not get matched with previous once that are displayed
            if (cars[j].srNum != -999 && !compareString(cars[i].model, cars[j].model))
                count = -1;
        if (count == -1 || cars[i].srNum == -999) // continue if the element at index i is already displayed previously
            continue;
        for (int j = 0; j < size; ++j)
            count += cars[j].srNum != -999 && !compareString(cars[i].model, cars[j].model) && i != j;// will add if the conditions are true otherwise
        // will add 0
        printf("MODEL %s HAS\t%d CARS\n", cars[i].model, count);
    }
    printf("\n");
    for (int i = 0; i < size; ++i) {
        int count = 1;
        for (int j = 0; j < i && count != -1; ++j)
            if (cars[j].srNum != -999 && !compareString(cars[i].make, cars[j].make))
                count = -1;
        if (count == -1 || cars[i].srNum == -999)
            continue;
        for (int j = 0; j < size; ++j)
            count += cars[j].srNum != -999 && !compareString(cars[i].make, cars[j].make) && i != j; // will add if the condtions are true otherwise
        // wil add 0
        printf("MAKER %s HAS\t%d CARS\n", cars[i].make, count);
    }
    printf("\n");
    for (int i = 0; i < size; ++i) {
        int count = 1;
        for (int j = 0; j < i && count != -1; ++j)
            if (cars[j].srNum != -999 && cars[i].year == cars[j].year)
                count = -1;
        if (count == -1 || cars[i].srNum == -999)
            continue;
        for (int j = 0; j < size; ++j)
            count += cars[j].srNum != -999 && cars[i].year == cars[j].year && i != j;
        printf("YEAR %d CARS ARE:\t%d\n", cars[i].year, count);
    }

    printf("\n\n");
}

int main() {
    struct car cars[size];
    for (int i = 0; i < size; ++i)
        cars[i].srNum = -999;    // -999 showing space(index) is empty
    int o = 0;
    int choice = -1;
    while (choice != 11) {
        printf("Enter 1 to add car:\n"
            "Enter 2 to edit car details using serial Number:\n"
            "Enter 3 to search car using serial Number:\n"
            "Enter 4 to delete car:\n"
            "Enter 5 to show complete Report:\n"
            "Enter 6 to show cars of specific maker:\n"
            "Enter 7 to show cars of specific model:\n"
            "Enter 8 to show cars with specific year or between two years\n"
            "Enter 9 to search using multiple fields:\n"
            "Enter 10 to show status of cars:\n"
            "Enter 11 to terminate the program:\n");
        scanf_s("%d", &choice);
        while (choice < 1 || choice > 11) {
            printf("Enter choice again:\n");
            scanf_s("%d", &choice);
        }
        switch (choice) {
        case 1:
            if (o >= size)
                printf("CAN'T ADD MORE CARS\n");
            else {
                int i = 0;
                for (; i < size && cars[i].srNum != -999; ++i); // will search for empty index.....
                addCar(&cars[i]);
                ++o;
            }
            break;
        case 2:
            if (o)
                edit(cars);
            else
                printf("Add cars first:\n");
            break;
        case 3:
            if (o)
                search(cars);
            else
                printf("Add cars first:\n");
            break;
        case 4:
            if (o)
                o -= del(cars);
            else
                printf("Add cars first:\n");

            break;
        case 5:
            if (o)
                report(cars);
            else
                printf("Add cars first:\n");
            break;
        case 6:
            if (o)
                displayMake(cars);
            else
                printf("Add cars first:\n");
            break;
        case 7:
            if (o)
                displayModel(cars);
            else
                printf("Add cars first:\n");
            break;
        case 8:
            if (o)
                carsWithYear(cars);
            else
                printf("Add cars first:\n");
            break;
        case 9:
            if (o)
                multipleFields(cars);
            else
                printf("Add cars first:\n");
            break;
        case 10:
            if (o)
                status(cars, o);
            else
                printf("Add cars first:\n");
            break;
        }
    }
    return 0;
}