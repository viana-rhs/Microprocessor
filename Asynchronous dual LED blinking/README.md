# چشمک زن دوگانه با تأخیر متفاوت

## توضیحات کلی پروژه:
این پروژه یک مدار ساده است که دو LED را به صورت متناوب روشن و خاموش می‌کند. LEDها ابتدا به مدت 5 ثانیه روشن و سپس به مدت 2 ثانیه خاموش می‌شوند. این چرخه به طور مداوم تکرار می‌شود.

## ابزارهای مورد نیاز:
برد آردوینو (Arduino Uno یا مشابه)
دو عدد LED
دو عدد مقاومت (برای محدود کردن جریان عبوری از LEDها)
بردبورد (برای ساختن مدار)
سیم‌های جامپر

## تصاویر :

![شماتیک مدار](https://github.com/viana-rhs/Microprocessor/blob/main/Asynchronous%20dual%20LED%20blinking/Asynchronous%20dual%20LED%20blinking.JPG?raw=true)
![تصویر](https://github.com/viana-rhs/Microprocessor/blob/main/Asynchronous%20dual%20LED%20blinking/Asynchronous%20dual%20LED%20blinking1.jpg?raw=true)


## کد پروژه:

```cpp
int led1 = 12;
int led2 = 13;
void setup() {
pinMode(led1 , OUTPUT);
pinMode(led2 , OUTPUT);
}

void loop() {
delay(2000);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(5000);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
}



