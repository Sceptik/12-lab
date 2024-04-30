struct Time{
    int hour;
    int min;
};
struct Time processTime(struct Time process[]);
struct Time min_step(struct Time process[]);

int randH();
int randM();

#define N 3