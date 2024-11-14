#define _CRT_SECURE_NO_WARNINGS     
#include <stdio.h>     
#include <locale.h>     
#define _USE_MATH_DEFINES     
#include <math.h>

float area_parallelogramm(float b, float h) {
    return b * h;
}
void draw_parallelogramm(int b, int h) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < b; k++) {
            printf("*");
    }
       printf("\n");
    }
}
void name(int figur) {
    switch (figur) {
    case 4:
        printf("Фигура: параллелограмм\n");
        break;
    default:
        printf("Неизвестная фигура\n");
        break;
    }
}
int main() {
    setlocale(LC_ALL, "RUS");
    int a;
    float b, h;
    printf("Введите основание параллелограмма: ");
    scanf("%f", &b);
    printf("Введите высоту параллелограмма: ");
    scanf("%f", &h);
    do {
        printf("Выберите операцию: 1)рассчитать площадь; 2)вывести определение фигуры; 3) нарисовать фигуру.\n");
        printf("Ваш выбор: ");
        scanf("%d", &a);

        switch (a) {
        case 1:
            printf("Площадь параллелограмма: %.2f\n", area_parallelogramm(b, h));
            break;
        case 2:
            name(4);
            break;
        case 3:
            draw_parallelogramm((int)b, (int)h);
            break;
        default:
            printf("Ошибка\n");
            break;
        }
    } while (a != 4);
    return 0;
}

