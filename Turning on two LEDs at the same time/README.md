# روشن کردن همزمان دو LED

## توضیحات کلی پروژه:
این پروژه یک مدار ساده است که دو LED را به طور همزمان روشن می‌کند. هر دو LED (متصل به پین‌های 12 و 13) به مدت 3 ثانیه روشن می‌مانند و سپس این چرخه تکرار می‌شود.

## ابزارهای مورد نیاز:
- Arduino Uno
- سیم‌های رابط
- نرم‌افزار Arduino IDE

## تصاویر :
![شماتیک مدار](https://github.com/viana-rhs/Microprocessor/blob/main/Turning%20on%20two%20LEDs%20at%20the%20same%20time/Turning%20on%20two%20LEDs%20at%20the%20same%20time.JPG?raw=true)
![تصویر](https://github.com/viana-rhs/Microprocessor/blob/main/Turning%20on%20two%20LEDs%20at%20the%20same%20time/Turning%20on%20two%20LEDs%20at%20the%20same%20time1.jpg?raw=true)
## کد پروژه:

```cpp
int led1 = 12;
int led2 = 13;
void setup() {
pinMode(led1 , OUTPUT);
pinMode(led2 , OUTPUT);
}

void loop() {
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(3000);
}



