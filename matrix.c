#include<stdio.h>
#include <stdlib.h>

int main()
{

    char arr[5][5];
    int i, j;
    int choice;
    int col, row;

    printf("Матрица выглядит так:\n\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("+ ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nОпции: \n (1) Заполнить все поля знаком 0 \n (2) Заполнить обе диагонали 0 \n "
               "(3) Заполнить заданное поле 0 (столбец, строка)\n (4) Обновить: Заполнить все поля снова знаком"
               " + \n (5) Конец программы \n\n");
    do{
        printf("Сделайте выбор: \n");
        scanf("%i", &choice);
    }while(choice < 1 || choice > 5);

    switch (choice)
        {
            case 1:
            {
                printf("Опция : %i \n", choice);
                printf("Матрица выглядит теперь так:\n\n");
                for (i = 0; i < 5; i++)  // цикл по строкам
                {
                    for (j = 0; j < 5; j++) // цикл по столбцам
                    {
                        printf("0 ", arr[i][j]);
                    }
                    printf("\n");
                }

            }
                break;

            case 2:
            {
                printf("Опция : %i \n", choice);
                printf("Матрица выглядит теперь так:\n\n");
                for(i = 0; i < 5; i++)
                {
                    for(j = 0; j < 5; j++)
                    {
                        if(i == j || i == 4 - j)
                        {
                            arr[i][j] = 0;
                            printf("%i ", arr[i][j]);
                        }
                        else { printf("+ "); }
                    }
                    printf("\n");
                }
            }
                break;

            case 3:
            {
                printf("Введите столбец и стрку: \n");
                scanf(" %i %i", &col, &row);


                printf("Опция : %i \n", choice);
                printf("Матрица выглядит теперь так:\n\n");
                        // Вывод элементов массива
                for (i = 0; i < 5; i++)
                { // цикл по строкам
                    for (j = 0; j < 5; j++)
                    { // цикл по столбцам
                        if(i == col - 1 || j == row - 1)
                        {
                            arr[i][j] = 0;
                            printf("%i ", arr[i][j]);
                        }
                        else { printf("+ ");}
                    }
                    printf("\n"); // перевод на новую строку
                }

            }
                break;

            case 4:
            {
                printf("Опция : %i \n", choice);
                printf("Матрица выглядит так:\n\n");
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        printf("+ ", arr[i][j]);
                    }
                    printf("\n");
                }


            }
                break;
            case 5:
            {
               exit(0);
            }
        }

    return 0;
}