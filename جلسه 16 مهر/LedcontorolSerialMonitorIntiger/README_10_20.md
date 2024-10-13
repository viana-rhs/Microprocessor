
# کنترل LED با ارسال اعداد از طریق Serial Monitor

## توضیحات کلی پروژه:
این پروژه با استفاده از Arduino برای کنترل یک LED از طریق Serial Monitor انجام شده است. با ارسال عدد 10 از طریق Serial Monitor، LED روشن شده و با ارسال عدد 20 خاموش می‌شود.

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
    int value = Serial.parseInt();
    if (value == 10) {
      digitalWrite(ledpin, HIGH);
    } else if (value == 20) {
      digitalWrite(ledpin, LOW);
    }
  }
}
```

## طرز کار:
پس از اجرای برنامه، می‌توانید در Serial Monitor عدد 10 را تایپ کرده و ارسال کنید تا LED روشن شود. برای خاموش کردن LED، عدد 20 را ارسال کنید.



## نتیجه‌گیری:
این پروژه نشان‌دهنده‌ی نحوه‌ی کنترل LED با استفاده از ارسال اعداد از طریق Serial Monitor در Arduino است. با ارسال اعداد خاص، می‌توانیم LED را روشن و خاموش کنیم.
