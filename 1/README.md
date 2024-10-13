# کدی ساده برای شروع کار با Arduino

## توضیحات کلی پروژه:
این کد دو LED را روشن می‌کند و برای مدت 3 ثانیه روشن نگه می‌دارد.

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
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(3000);
}




