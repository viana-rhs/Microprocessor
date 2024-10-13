# چراغ چشمک زن ساده

## توضیحات کلی پروژه:
این پروژه یک مدار ساده است که دو LED را به صورت متناوب روشن و خاموش می‌کند. LED اول (متصل به پین 12) به مدت 3 ثانیه روشن و سپس LED دوم (متصل به پین 13) به مدت 3 ثانیه روشن می‌شود.

## ابزارهای مورد نیاز:
- Arduino Uno
- سیم‌های رابط
- نرم‌افزار Arduino IDE

## کد پروژه:

```cpp
int led1 = 12;
int led2 = 13;
void setup() {
pinMode(led1 , OUTPUT);
pinMode(led2 , OUTPUT);
}

void loop() {
delay(3000);
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
}

