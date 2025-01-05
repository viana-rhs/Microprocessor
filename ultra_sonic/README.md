# سنجش فاصله با استفاده از سنسور اولتراسونیک و نمایش روی LCD

## مقدمه
این پروژه به شما نشان می‌دهد که چگونه می‌توانید با استفاده از یک سنسور اولتراسونیک، فاصله تا یک جسم را اندازه‌گیری کرده و نتیجه را روی یک نمایشگر LCD نمایش دهید. این پروژه از یک برد آردوینو و یک ماژول اولتراسونیک HC-SR04 استفاده می‌کند.

## اجزای مورد نیاز
* یک برد آردوینو (مانند Uno، Nano و ...)
* یک ماژول اولتراسونیک HC-SR04
* یک نمایشگر LCD 16x2
* مقاومت‌ها و سیم‌های جامپر
* نرم‌افزار آردوینو IDE

## اتصال قطعات
* **نمایشگر LCD:** پین‌های RS، E، D4 تا D7 نمایشگر را به پین‌های مربوطه روی آردوینو متصل کنید.
* **سنسور اولتراسونیک:** پین Trigger را به یک پین دیجیتال آردوینو و پین Echo را به یک پین دیجیتال دیگر متصل کنید. مطمئن شوید که ولتاژ تغذیه سنسور اولتراسونیک و نمایشگر LCD با ولتاژ تغذیه آردوینو یکسان باشد.

[در اینجا می‌توانید یک تصویر شماتیک از اتصال قطعات قرار دهید]

## کد آردوینو
```c++
include <LiquidCrystal.h>

// تعریف پین‌های نمایشگر LCD و سنسور اولتراسونیک
int RS = 12;
int E = 11;
int D4 = 5;
int D5 = 4;
int D6 = 3;
int D7 = 2;
int trigPin = 9;
int echoPin = 8;

// ایجاد یک شیء از کلاس LiquidCrystal
LiquidCrystal lcd(RS, E, D4, D5, D6, D7);

void setup() {
  // آغاز به کار نمایشگر LCD و سریال
  lcd.begin(16, 2);
  Serial.begin(9600);

  // تنظیم پین‌های Trigger و Echo به عنوان خروجی و ورودی
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // ارسال یک پالس کوتاه به Trigger برای شروع اندازه‌گیری
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // اندازه‌گیری مدت زمان بازگشت پالس Echo
  long duration = pulseIn(echoPin, HIGH);

  // محاسبه فاصله بر اساس مدت زمان
  int distance = duration * 0.0343 / 2;

  // نمایش فاصله بر روی سریال و LCD
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  lcd.setCursor(0, 0);
  lcd.print("Distance: ");
  lcd.print(distance);
  lcd.print(" cm");

  delay(500);
  lcd.clear();
}