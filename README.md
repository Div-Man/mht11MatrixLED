# mht11MatrixLED
Led martix arduino

# Description in English
This library is designed to work with only one 8x8 1088AS matrix, without using additional drivers.
Details on the website https://mht11.ru/

result:
https://youtu.be/bibbRqdC5ZY?si=sVN_Tk-YHhIend4q
https://dzen.ru/video/watch/66e6dbb420050043340572af

# Описание на русском языке
Данная библиотка предназначена для работы, только с одной матрицей 8x8 1088AS, без использоания дополнительных драйверов.
Подробности на сайте https://mht11.ru/

результат:
https://youtu.be/bibbRqdC5ZY?si=sVN_Tk-YHhIend4q
https://dzen.ru/video/watch/66e6dbb420050043340572af

# Использование:

```
#include <mht11MatrixLED.h>
/*
Определяем пины для строк (R1-R8) и столбцов (C1-C8) 8x8 LED матрицы

#define R1 2
#define R2 3
#define R3 4
#define R4 5
#define R5 6
#define R6 7
#define R7 8
#define R8 9

#define C1 10
#define C2 11
#define C3 12
#define C4 13
#define C5 A0
#define C6 A1
#define C7 A2
#define C8 A3
*/

// Пины для строк и столбцов
const int rowPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
const int colPins[] = {10, 11, 12, 13, A0, A1, A2, A3};

mht11MatrixLED matrix(rowPins, colPins);

void setup() {
    matrix.setup();
}

void loop() {
  matrix.displayText("mht11.ru", 1000);
  delay(2000);
  matrix.displayText("How are you?", 1000);
  delay(2000);
  matrix.displayText("Как дела?", 1000);
  delay(2000);
  matrix.displayText("0123456789", 1000);
  delay(2000);
  matrix.displayText("Hello, World!", 1000);
  delay(2000);
  matrix.displayText("Привет, Мир!", 1000);
  delay(2000);
  matrix.displayText("1+1=2", 1000);
  delay(2000);
  matrix.displayText("7-4=3", 1000);   
  delay(2000);
  matrix.displayText("АБВГДЕЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ", 1000);
  delay(2000);
  matrix.displayText("абвгдежзийклмнопрстуфхцчшщъыьэюя", 1000);
  delay(2000);
  matrix.displayText("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 1000);
  delay(2000);
  matrix.displayText("abcdefghijklmnopqrstuvwxyz", 1000);
  delay(2000);
}
```
Если у вас не получилось установить библиотеку, то можете просто скопировать полный код из файла "Full source cod"
