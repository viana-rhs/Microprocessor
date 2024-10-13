
# کنترل LED با Serial Monitor

## توضیحات کلی پروژه:
این پروژه با استفاده از Arduino برای کنترل یک LED از طریق Serial Monitor انجام شده است. با ارسال کاراکتر 'H' از طریق Serial Monitor، LED روشن شده و با ارسال کاراکتر 'L' خاموش می‌شود.

## ابزارهای مورد نیاز:
- Arduino Uno
- LED
- مقاومت 220 اهم
- سیم‌های رابط
- نرم‌افزار Arduino IDE

## نحوه اتصال قطعات:
- پایه مثبت LED به پین 12 Arduino متصل می‌شود.
- پایه منفی LED به مقاومت 220 اهم و سپس به GND متصل می‌شود.

## کد پروژه:

```cpp
const int ledpin = 12;

void setup() {
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char value = Serial.read();
    if (value == 'H') {
      digitalWrite(ledpin, HIGH);
    } else if (value == 'L') {
      digitalWrite(ledpin, LOW);
    }
  }
}
```

## طرز کار:
پس از اجرای برنامه، می‌توانید در Serial Monitor کاراکتر 'H' را تایپ کرده و ارسال کنید تا LED روشن شود. برای خاموش کردن LED، کاراکتر 'L' را ارسال کنید.



## نتیجه‌گیری:
این پروژه ساده نشان‌دهنده‌ی نحوه‌ی کنترل LED با استفاده از دستورات Serial در Arduino است. با ارسال کاراکترهای خاص، می‌توانیم LED را روشن و خاموش کنیم.
