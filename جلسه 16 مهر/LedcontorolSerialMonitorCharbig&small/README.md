# Let's create another README.md file for the updated Arduino project with 'L'/'l' for HIGH and 'H'/'h' for LOW.

readme_content_char = """
# کنترل LED با استفاده از حروف بزرگ و کوچک از طریق Serial Monitor

## توضیحات کلی پروژه:
این پروژه با استفاده از Arduino برای کنترل یک LED از طریق Serial Monitor انجام شده است. با ارسال حرف 'L' یا 'l'، LED روشن شده و با ارسال حرف 'H' یا 'h'، LED خاموش می‌شود.

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
    if (value == 'L' || value == 'l') {
      digitalWrite(ledpin, HIGH);
    } else if (value == 'H' || value == 'h') {
      digitalWrite(ledpin, LOW);
    }
  }
}
