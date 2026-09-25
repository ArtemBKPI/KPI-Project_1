#include <stdio.h>
#include <stdlib.h>
//---------------Макровизначення-----------------------
#define Name "Artem"
#define LastName "Babichenko"
#define GroupName "RB-61"
#define Faculty "RTF"
#define University "Igor Sikorsky Kyiv Polytechnic Institute"

//--------Точка входу до програми--------------------------
int main()
{
//-------Оголошення змінних.Не ініціалізовані ---------------------------
    unsigned int semestr;
    unsigned int age;
    int grade1;
    int grade2;
    int grade3;

    float admissionScore;
    double averageGrade;

    printf("%s %s Enter following data.\n", Name, LastName);
    //------Запрошення на ведення інформації----------
    printf("Enter semestr:");
    scanf("%u", &semestr);

    //------Запрошення на ведення інформації----------
    printf("Enter your admission score: ");
    scanf("%f", &admissionScore);
    //------Запрошення на ведення інформації----------
    printf("Enter grade #1: ");
    scanf("%d", &grade1);
    //------Запрошення на ведення інформації----------
    printf("Enter grade #2:");
    scanf("%d", &grade2);
    //------Запрошення на ведення інформації----------
    printf("Enter grade #3:");
    scanf("%d", &grade3);
    //------Запрошення на ведення інформації----------
    printf("Enter your age: ");

    scanf("%u", &age);
//------Обчислення середнього значення відмітки-------
    averageGrade = (double)(grade1 + grade2 + grade3) / 3;
//------Очищення екрану-------------------------------
    system("cls");
//------Виведення інформації--------------------------
    printf("%s", University);
    printf("\n%s", Faculty);
    printf("\n%s", GroupName);
    printf("\n---------------------------");
    printf("\nstudent: %s %s", Name, LastName );
    printf("\nage: %u", age);
    printf("\nsemestr: %u", semestr);
    printf("\n---------------------------");
    printf("\nadmission score: %.2f", admissionScore);
    printf("\naverage grade = %.3lf", averageGrade);
    printf("\n");

    return 0;
}
