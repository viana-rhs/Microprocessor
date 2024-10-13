# چراغ چشمک زن ساده با یک LED

## توضیحات کلی پروژه:
این پروژه یک مدار ساده است که یک LED را به صورت متناوب روشن و خاموش می‌کند. LED متصل به پین 9 به مدت 3 ثانیه روشن و سپس به مدت 3 ثانیه خاموش می‌شود. این چرخه به طور مداوم تکرار می‌شود.

## ابزارهای مورد نیاز:
برد آردوینو (Arduino Uno یا مشابه)
یک عدد LED
یک عدد مقاومت (برای محدود کردن جریان عبوری از LED)
بردبورد (برای ساختن مدار)
سیم‌های جامپر

## تصاویر :

![شماتیک مدار](https://github.com/viana-rhs/Microprocessor/blob/main/blink/blink.JPG?raw=true)
![تصویر](https://github.com/viana-rhs/Microprocessor/blob/main/blink/blink1.jpg?raw=true)

## کد پروژه:

```cpp
int led = 9;
void setup() {
pinMode(led , OUTPUT);
}

void loop() {
digitalWrite(led, HIGH);
delay(3000);
digitalWrite(led, LOW);
delay(3000);
}

