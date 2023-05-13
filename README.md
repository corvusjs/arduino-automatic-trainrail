
# Arduino Auto Train Rails - Leds
TR: Tren rayları baz alınarak yapılmıştır. Basit şekilde tren yolundaki ledlerin yanma mantığının simüle edilmiş versiyonu. 

EN:It was built on the basis of train tracks. Simulated version of the lighting logic of the leds on the train track in a simple way


## Özellikler - Features

- Tamamen Otomatik / Fully Automatic
- Hızlı, basit ve anlaşılır / Fast, simple and clear
- Çalışıyor ✔️ / Working ✔️
- Support on instagram: corvus.js

## Detaylar / Details  
TR: Bu kod, bir tren istasyonunda üç demir yolundaki tren trafiğini kontrol eden bir Arduino programıdır. Kod, demir yolu sinyalizasyon sistemlerinin renk kodlarına uygun olarak, kırmızı, sarı ve yeşil ışık veren LED'lerin durumunu kontrol eder. Aşağıdaki gibi tanımlanmış değişkenler ve pimler içerir:

red5Pin, green5Pin, orange5Pin, red3Pin, green3Pin, orange3Pin, red1Pin, green1Pin ve orange1Pin : Bu değişkenler, kırmızı, sarı ve yeşil LED'leri kontrol etmek için kullanılacak Arduino pimlerini belirler.
rail1_Pin, rail2_Pin ve rail3_Pin: Bu değişkenler, demiryolu raylarının durumunu okumak için kullanılacak Arduino pimlerini belirler.
rail1, rail2 ve rail3: Bu değişkenler, her bir rayın mevcut durumunu depolamak için kullanılır.
setup() fonksiyonu, gerekli Arduino pinlerinin giriş veya çıkış olarak ayarlanmasını yapar ve seri haberleşme hızını 9600 bps olarak ayarlar.

loop() fonksiyonu, demiryolu raylarının durumunu okur ve raylarda herhangi bir tren olup olmadığını belirler. Ardından, bu duruma uygun şekilde LED'leri açar veya kapatır.

Kodda kullanılan if-else yapısı, her olası ray durumu için ayrı ayrı bir koşul oluşturur ve bu koşullara uygun LED'lerin durumunu belirler. Her koşulda, digitalWrite() fonksiyonu kullanarak ilgili LED'leri açmak veya kapatmak için HIGH veya LOW parametreleri kullanılır.

delay() fonksiyonu, programın belirli bir süre beklemesini sağlar. Bu kodda 100 milisaniye olarak belirlenmiştir. Bu bekleme süresi, LED'lerin durumu değiştikten sonra programın tekrar çalışmasını engellemek için kullanılır.

Sonuç olarak, bu kod, üç farklı demiryolu hattında tren trafiğini yöneten bir kontrol sistemi oluşturur ve kırmızı, sarı ve yeşil LED'leri kullanarak trenlerin güvenli bir şekilde hareket etmesini sağlar.

EN: This code is an Arduino program that controls train traffic on three railway tracks at a train station. The code checks the status of LEDs emitting red, yellow and green light in accordance with the color codes of railway signaling systems. It contains variables and pins defined as follows:

red5Pin, green5Pin, orange5Pin, red3Pin, green3Pin, orange3Pin, red1Pin, green1Pin, and orange1Pin: These variables determine the Arduino pins that will be used to control the red, yellow, and green LEDs.
rail1_Pin, rail2_Pin, and rail3_Pin: These variables determine the Arduino pins that will be used to read the state of the railroad tracks.
rail1, rail2 and rail3: These variables are used to store the current state of each rail.
The setup() function sets the required Arduino pins as input or output and sets the serial communication speed to 9600 bps.

The loop() function reads the state of the railway tracks and determines if there are any trains on the tracks. It then turns the LEDs on or off accordingly.

The if-else structure used in the code creates a condition for each possible rail condition and determines the status of the LEDs according to these conditions. In all cases, the HIGH or LOW parameters are used to turn the corresponding LEDs on or off using the digitalWrite() function.

The delay() function makes the program wait for a certain amount of time. This code is set to 100 milliseconds. This waiting period is used to prevent the program from running again after the status of the LEDs has changed.

As a result, this code creates a control system that manages train traffic on three different railway lines and uses red, yellow and green LEDs to keep trains moving safely.
