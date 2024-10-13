# پروژه انجام محاسبات ساده با Arduino از طریق Serial Monitor

## توضیحات کلی پروژه:
این پروژه با استفاده از Arduino برای انجام محاسبات ساده (+، -، *، /) از طریق Serial Monitor طراحی شده است. کاربر می‌تواند دو عدد و یک عملگر ریاضی را وارد کند و نتیجه محاسبه را دریافت کند.

## ابزارهای مورد نیاز:
- Arduino Uno
- سیم‌های رابط
- نرم‌افزار Arduino IDE

## کد پروژه:

```cpp
void setup() {
  Serial.begin(9600);
  Serial.println("type the calculation:");
}

void loop() {
  while (Serial.available() > 0) {
    int num1 = Serial.parseInt();
    char a = Serial.read();
    int num2 = Serial.parseInt();
    switch (a) {
      case '+':
        Serial.println(num1 + num2);
        break;

      case '-':
        Serial.println(num1 - num2);
        break;

      case '*':
        Serial.println(num1 * num2);
        break;

      case '/':
      if(num2 != 0){
        Serial.println(num1 / num2);
        }else{
          Serial.println("err");
        }
    }
  }
}


## نتیجه‌گیری:
میتونیم 4 عمل جمع تفریق و ضرب و تفریق را با دو عدد استفاده کنیم
