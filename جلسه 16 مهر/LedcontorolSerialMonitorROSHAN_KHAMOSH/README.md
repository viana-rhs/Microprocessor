
# کنترل LED با دستورات متنی از طریق Serial Monitor

## توضیحات کلی پروژه:
این پروژه با استفاده از Arduino برای کنترل یک LED از طریق Serial Monitor انجام شده است. با ارسال کلمه "ROSHAN" از طریق Serial Monitor، LED روشن شده و با ارسال کلمه "KHAMOSH" خاموش می‌شود.

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
    String value = Serial.readString();

    if (value == "ROSHAN") {
      digitalWrite(ledpin, HIGH);
    } else if (value == "KHAMOSH") {
      digitalWrite(ledpin, LOW);
    }
  }
}
```

## طرز کار:
پس از اجرای برنامه، می‌توانید در Serial Monitor کلمات "ROSHAN" و "KHAMOSH" را تایپ کرده و ارسال کنید. با ارسال "ROSHAN" LED روشن می‌شود و با ارسال "KHAMOSH" LED خاموش می‌شود.


## نتیجه‌گیری:
این پروژه نشان‌دهنده‌ی نحوه‌ی کنترل LED با استفاده از دستورات متنی از طریق Serial در Arduino است. با ارسال کلمات خاص، می‌توانیم LED را روشن و خاموش کنیم.
