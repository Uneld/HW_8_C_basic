## Домашнее задание №8

### Задача 1. Сортировка по возрастанию

Написать только одну функцию, которая сортирует массив по возрастанию. Необходимо реализовать только одну функцию, всю программу составлять не надо. Строго согласно прототипу. Имя функции и все аргументы должны быть:

```c
void sort_array(int size, int a[])
```

##### Примеры:

Пример №1
Данные на входе: 20 19 4 3 2 1 18 17 13 12 11 16 15 14 10 9 8 7 6 5
Данные на выходе: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
Пример №2
Данные на входе: 5 4 3 2 1
Данные на выходе:
1 2 3 4 5

### Задача 2. Четные в начало

Написать только одну функцию, которая ставит в начало массива все четные элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел между собой. Строго согласно прототипу:

```c
void sort_even_odd(int n, int a[])
```

##### Примеры:

Пример №1
Данные на входе: 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
Данные на выходе: 20 18 16 14 12 10 8 6 4 2 19 17 15 13 11 9 7 5 3
Пример №2
Данные на входе:
1 0 1 0 1
Данные на выходе:
0 0 1 1 1

### Задача 3. Максимум в массиве

Написать только одну функцию, которая находит максимальный элемент в массиве. Всю программу загружать не надо. Прототип функции:

```c
int find_max_array(int size, int a[])
```

##### Пример:

Данные на входе: 773 307 371 548 531 765 402 27 573 591 217 859 ...
Данные на выходе: 983

### Задача 4. Два одинаковых

Написать только одну логическую функцию, которая определяет, верно ли, что среди элементов массива есть два одинаковых. Если ответ «да», функция возвращает 1; если ответ «нет», то 0. Строго согласно прототипу:

```c
int is_two_same(int size, int a[]);
```

##### Примеры:

Пример №1
Данные на входе: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 ...
Данные на выходе: NO
Пример №2
Данные на входе:
1 2 1 4 5
Данные на выходе:
YES

### Задача 5. Поменять местами

Составить функцию, которая меняет в массиве минимальный и максимальный
элемент местами. Прототип функции

```c
void change_max_min(int size, int a[])
```

##### Пример:

Данные на входе:
1 2 3 4 5 6 7 8 9 10
Данные на выходе:
10 2 3 4 5 6 7 8 9 1

### Задача 6. Больше среднего

Определить количество положительных элементов квадратной матрицы,
превышающих по величине среднее арифметическое всех элементов главной
диагонали. Реализовать функцию среднее арифметическое главной
диагонали.

##### Пример:

Данные на входе:
1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 4 4 4 4 4 5 5 5 5 5
Данные на выходе:
10

### Задача 7\*. Клетки

Известно, что шахматная доска имеет размерность 8х8 и состоит из клеток 2х
цветов, например, черного и белого (см. рисунок). Каждая клетка имеет
координату, состоящую из буквы и цифры. Горизонтальное расположение
клетки определяется буквой от A до H, а вертикальное – цифрой от 1 до 8.
Заметим, что клетка с координатой А1 имеет черный цвет. Требуется по
заданной координате определить цвет клетки.
Данные на входе: В единственной строке входного файла записана
координата клетки на шахматной доске: всего два символа – буква и цифра
(без пробелов).

##### Примеры:

Пример №1
Данные на входе: C3
Данные на выходе:
BLACK
Пример №2
Данные на входе: G8
Данные на выходе:
WHITE
