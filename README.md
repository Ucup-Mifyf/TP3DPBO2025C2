Janji
/*Saya Fajmi Yusuf Fadhilah dengan NIM 2304826 mengerjakan
 soal Tugas Praktikum 3 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

 1. Struktur Proyek

```
/projek_komputer
│── Python/
│   ├── main.py
│   ├── perangkat.py
│   ├── cpu.py
│   ├── ram.py
│   ├── harddrive.py
│   ├── komputer.py
│
│── C++/
│   ├── main.cpp
│   ├── perangkat.h
│   ├── cpu.h
│   ├── cpu.cpp
│   ├── ram.h
│   ├── ram.cpp
│   ├── harddrive.h
│   ├── harddrive.cpp
│   ├── komputer.h
│   ├── komputer.cpp
│   ├── Makefile (opsional)
```

2. Penjelasan Kode

Python Version
- perangkat.py → Kelas abstrak `Perangkat` sebagai dasar untuk CPU, RAM, dan Harddrive.
- cpu.py → Kelas `CPU` yang merupakan turunan dari `Perangkat`.
- ram.py → Kelas `RAM` sebagai turunan dari `Perangkat`.
- harddrive.py → Kelas `Harddrive` sebagai turunan dari `Perangkat`.
- komputer.py → Kelas `Komputer` yang menggabungkan CPU, RAM (bisa lebih dari satu), dan Harddrive.
- main.py → File utama yang menginisialisasi objek dan menampilkan informasi komputer.

- perangkat.h → Abstract base class `Perangkat`.
- cpu.h & cpu.cpp → Kelas `CPU`, termasuk implementasi metode `info()`.
- ram.h & ram.cpp → Kelas `RAM`, termasuk implementasi metode `info()`.
- harddrive.h & harddrive.cpp → Kelas `Harddrive`, termasuk implementasi metode `info()`.
- komputer.h & komputer.cpp → Kelas `Komputer` yang menggabungkan CPU, RAM, dan Harddrive.
- main.cpp → File utama untuk menjalankan program.

3. Cara Menjalankan

Python
Jalankan perintah berikut di terminal:
python main.py

C++
Kompilasi program dengan g++:
g++ -o komputer main.cpp cpu.cpp ram.cpp harddrive.cpp komputer.cpp

Kemudian jalankan:
komputer.exe

4. Output Program
Saat dijalankan, program akan mencetak informasi komputer yang dibuat:
```
Komputer: PC Abdul
CPU: Intel Core i7 (8 Core, 3.4GHz)
RAM: Corsair Vengeance (16GB, DDR5)
RAM: Corsair Vengeance (8GB, DDR4)
RAM: Kingston FURY (16GB, DDR5)
Harddrive: SSD Samsung Evo (1024GB)

