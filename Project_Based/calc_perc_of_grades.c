#include <stdio.h>

int main() {
    int phy = 0, che = 0, math = 0, bio = 0, comp = 0, per = 0;
    printf("Enter marks in Physics: ");
    scanf("%d", &phy);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &che);
    printf("Enter marks in Mathematics: ");
    scanf("%d", &math);
    printf("Enter marks in Biology: ");
    scanf("%d", &bio);
    printf("Enter marks in Computer: ");
    scanf("%d", &comp);

  //sum all subjects obtained marks, and divides by subjects number
    per = (phy + che + math + bio + comp) / 5;

    if (per >= 90) {
        printf("Grade A\n");
    } else if (per >= 80) {
        printf("Grade B\n");
    } else if (per >= 70) {
        printf("Grade C\n");
    } else if (per >= 60) {
        printf("Grade D\n");
    } else if (per >= 40) {
        printf("Grade E\n");
    } else {
        printf("Grade F\n");
    }

    return 0;
}

