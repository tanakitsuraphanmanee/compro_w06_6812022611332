#include <stdio.h> // สำหรับฟังก์ชัน printf

int main() {
    printf("หัวข้อ: การเขียนนิพจน์ในรูปย่อ (Short-hand Expression)\n\n");

    // กำหนดค่าเริ่มต้นสำหรับตัวแปรต่างๆ เพื่อใช้ในการคำนวณ
    // (สามารถปรับเปลี่ยนค่าเหล่านี้ได้ตามต้องการ)
    double x = 100.0;
    int y = 7;
    int z = 3;
    int a = 2;
    double total = 500.0;
    double price = 100.0;
    int quantity = 5;
    double discount = 20.0;
    double rate = 5.0; // สมมติ 5%
    double score = 85.0;
    double penalty = 2.0;
    int mistake = 3;

    // ----- Expression ที่ 1: x = x - 4.0; -----
    printf("--- 1. x = x - 4.0; ---\n");
    double x_full_1 = x; // สร้างตัวแแปรสำเนาสำหรับแบบเต็ม
    double x_short_1 = x; // สร้างตัวแแปรสำเนาสำหรับแบบย่อ

    // แบบเต็ม
    x_full_1 = x_full_1 - 4.0;
    printf("   แบบเต็ม (x = x - 4.0;): x = %.2f\n", x_full_1);

    // แบบย่อ
    x_short_1 -= 4.0;
    printf("   แบบย่อ (x -= 4.0;):    x = %.2f\n", x_short_1);

    if (x_full_1 == x_short_1) {
        printf("   ผลลัพธ์เท่ากัน: True\n\n");
    } else {
        printf("   ผลลัพธ์เท่ากัน: False\n\n");
    }

    // ----- Expression ที่ 2: x = 6.5 * x; -----
    printf("--- 2. x = 6.5 * x; ---\n");
    double x_full_2 = x; // ใช้ค่า x ล่าสุดจากการคำนวณก่อนหน้า
    double x_short_2 = x;

    // แบบเต็ม
    x_full_2 = 6.5 * x_full_2;
    printf("   แบบเต็ม (x = 6.5 * x;): x = %.2f\n", x_full_2);

    // แบบย่อ
    x_short_2 *= 6.5; // หรือ x *= 6.5;
    printf("   แบบย่อ (x *= 6.5;):    x = %.2f\n", x_short_2);

    if (x_full_2 == x_short_2) {
        printf("   ผลลัพธ์เท่ากัน: True\n\n");
    } else {
        printf("   ผลลัพธ์เท่ากัน: False\n\n");
    }

    // ----- Expression ที่ 3: x = x %% (y + z * a); -----
    // หมายเหตุ: ตัวแปร x ในที่นี้ต้องเป็นจำนวนเต็ม เนื่องจากใช้ modulo operator (%)
    printf("--- 3. x = x %% (y + z * a); ---\n");
    int x_int_full_3 = (int)x; // แปลง x เป็น int เพื่อใช้กับ %
    int x_int_short_3 = (int)x;
    int divisor_3 = y + z * a; // คำนวณส่วนหาร (7 + 3 * 2) = (7 + 6) = 13

    // แบบเต็ม
    x_int_full_3 = x_int_full_3 % divisor_3;
    printf("   แบบเต็ม (x = x %% (y + z * a);): x = %d (เมื่อ x เริ่มต้นเป็น %d)\n", x_int_full_3, (int)x);

    // แบบย่อ
    x_int_short_3 %= divisor_3;
    printf("   แบบย่อ (x %%= (y + z * a);):    x = %d\n", x_int_short_3);

    if (x_int_full_3 == x_int_short_3) {
        printf("   ผลลัพธ์เท่ากัน: True\n\n");
    } else {
        printf("   ผลลัพธ์เท่ากัน: False\n\n");
    }

    // ----- Expression ที่ 4: x = x / (2.0 * x); -----
    printf("--- 4. x = x / (2.0 * x); ---\n");
    double x_full_4 = x; // ใช้ค่า x ล่าสุด
    double x_short_4 = x;
    double divisor_4 = 2.0 * x; // คำนวณตัวหาร: 2.0 * (ค่า x ล่าสุด)
    
    // ตรวจสอบเพื่อป้องกันการหารด้วยศูนย์
    if (divisor_4 == 0) {
        printf("   ไม่สามารถหารด้วยศูนย์ได้ใน Expression นี้\n\n");
    } else {
        // แบบเต็ม
        x_full_4 = x_full_4 / divisor_4;
        printf("   แบบเต็ม (x = x / (2.0 * x);): x = %.4f\n", x_full_4);

        // แบบย่อ
        x_short_4 /= divisor_4; // หรือ x /= (2.0 * x);
        printf("   แบบย่อ (x /= (2.0 * x);):    x = %.4f\n", x_short_4);

        // เปรียบเทียบผลลัพธ์ อาจมีปัญหาเรื่อง floating point precision
        // จึงควรใช้การเปรียบเทียบความแตกต่างน้อยกว่าค่า epsilon เล็กน้อย
        if (x_full_4 == x_short_4) {
            printf("   ผลลัพธ์เท่ากัน: True\n\n");
        } else {
            printf("   ผลลัพธ์เท่ากัน: False\n\n");
        }
    }


    // ----- Expression ที่ 5: total = total + (price * quantity - discount); -----
    printf("--- 5. total = total + (price * quantity - discount); ---\n");
    double total_full_5 = total;
    double total_short_5 = total;
    double value_to_add_5 = (price * quantity - discount); // (100 * 5 - 20) = (500 - 20) = 480

    // แบบเต็ม
    total_full_5 = total_full_5 + value_to_add_5;
    printf("   แบบเต็ม (total = total + (...);): total = %.2f\n", total_full_5);

    // แบบย่อ
    total_short_5 += value_to_add_5;
    printf("   แบบย่อ (total += (...);):       total = %.2f\n", total_short_5);

    if (total_full_5 == total_short_5) {
        printf("   ผลลัพธ์เท่ากัน: True\n\n");
    } else {
        printf("   ผลลัพธ์เท่ากัน: False\n\n");
    }

    // ----- Expression ที่ 6: x = x * (1 + rate / 100); -----
    printf("--- 6. x = x * (1 + rate / 100); ---\n");
    double x_full_6 = x;
    double x_short_6 = x;
    double factor_6 = (1 + rate / 100.0); // (1 + 5.0 / 100.0) = (1 + 0.05) = 1.05

    // แบบเต็ม
    x_full_6 = x_full_6 * factor_6;
    printf("   แบบเต็ม (x = x * (...);): x = %.2f\n", x_full_6);

    // แบบย่อ
    x_short_6 *= factor_6;
    printf("   แบบย่อ (x *= (...);):    x = %.2f\n", x_short_6);

    if (x_full_6 == x_short_6) {
        printf("   ผลลัพธ์เท่ากัน: True\n\n");
    } else {
        printf("   ผลลัพธ์เท่ากัน: False\n\n");
    }

    // ----- Expression ที่ 7: score = score - (penalty * (mistake + 1)); -----
    printf("--- 7. score = score - (penalty * (mistake + 1)); ---\n");
    double score_full_7 = score;
    double score_short_7 = score;
    double deduction_7 = (penalty * (mistake + 1)); // (2.0 * (3 + 1)) = (2.0 * 4) = 8.0

    // แบบเต็ม
    score_full_7 = score_full_7 - deduction_7;
    printf("   แบบเต็ม (score = score - (...);): score = %.2f\n", score_full_7);

    // แบบย่อ
    score_short_7 -= deduction_7;
    printf("   แบบย่อ (score -= (...);):       score = %.2f\n", score_short_7);

    if (score_full_7 == score_short_7) {
        printf("   ผลลัพธ์เท่ากัน: True\n\n");
    } else {
        printf("   ผลลัพธ์เท่ากัน: False\n\n");
    }

    return 0; // บอกว่าโปรแกรมทำงานเสร็จสมบูรณ์
}