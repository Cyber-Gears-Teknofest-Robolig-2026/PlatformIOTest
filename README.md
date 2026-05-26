# PlatformIOTest

Deneyap Kart 1A v2 için PlatformIO framework'ünde oluşturulmuş bir proje. Kodlar

## Gerekli Programlar:

* Git
* Python (pio kütüphanesi için)
* VS Code veya Windsurf gibi bir editör

### Kurulumlar:

```
git clone https://github.com/Cyber-Gears-Teknofest-Robolig-2026/PlatformIOTest.git
```

pio programını python pip ile kurulumunu yapın:

```
pip install platformio
```

Bu komutlar ile mevcut proje için gerekli kütüphane ve modülleri bilgisayarınıza çekin:

```
pio pkg install
```

Mevcut proje kodlarını derleyin:

```
pio run
```

Mevcut proje kodlarını Deneyap Kart 1A v2 cihazına yükleyin:

```
pio run -t upload
```

### platformio.ini Dosyası:

Bu dosya mevcut projemizin hangi işlemci kartınını, bu kartın özellikleri, projede kullanılan dışarıdan gelen kütüphaneler vb. herşeyi tutmaktadır.

* `platform`: Kullandığımız kartın işlemci temelinin adını taşır.
* `board`: Kullandığımız kartın adı.
* `framework`: Bu kartın hangi framework ile yükleneceği. Biz normalde Arduino IDE kullandığımız için `arduino` dedik.
* `upload_port`: Kodumuzun yükleneceği port adı.
* `monitor_port`: Seri port ekranımızın kullanacağı port adı.
* `monitor_speed`: Seri port ekranımızın baud rate'i.
* `lib_debs`: Projemiz için dışarıdan indireceğimiz kütüphane isimleri. Örnek: `bblanchon/ArduinoJson@^7.2.2`

### Proje klasörleri:

* `include/`: Projedeki sabit tanımlar için oluşturabileceğimiz `.h` ve `.hpp` dosyalarını tutan klasör.
* `lib/`: Projemizdeki kendi dahili kütüphanelerimizi koyacağımız klasör.
* `src/`: Projemizin ana kodlarının bulunduğu klasör. Ana kodları her zaman `main.cpp` dosyasına yazıyoruz.
* `test/`: Projemizin test kodlarının bulunduğu klasör. Burayı tam olarak çözemediğim için şimdilik boş bıraktım.
