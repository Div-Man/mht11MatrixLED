#ifndef mht11MatrixLED_h
#define mht11MatrixLED_h

#include "Arduino.h"

struct LetterMapping {
  const char character;   // Символ
  const byte* matrix;     // Массив с битами для отображения символа
};

extern const LetterMapping letterMap[];

class mht11MatrixLED {
public:
    mht11MatrixLED(const int rowPins[8], const int colPins[8]); // Конструктор
    void setup();  // Инициализация пинов
    void clearMatrix();  // Очистка матрицы
    void lightMatrix(const byte pattern[8]);  // Отображение паттерна
    void displayCharacter(char letter, int displayTime); // Отображение одного символа
    void displayText(const char* text, int displayTime); // Отображение текста

private:
    const int* _rowPins;
    const int* _colPins;
};

#endif