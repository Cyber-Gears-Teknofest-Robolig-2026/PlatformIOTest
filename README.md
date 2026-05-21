# PlatformIOTest

Deneyap Kart 1A v2 için PlatformIO framework'ünde oluşturulmuş bir proje.

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
