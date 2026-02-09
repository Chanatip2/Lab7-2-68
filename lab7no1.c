double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);

int main(void) {
    int a, b, c, d, e;
    double r, s, t, u, v;

    // a)
    functionM();
    //  ถูกต้อง: functionM() ไม่รับ parameter และสามารถเรียกได้
    // แต่ค่าที่ return (double) ไม่ถูกนำไปใช้

    // b)
    a = functionM();
    //  ผิด: functionM() return double แต่ a เป็น int
    // ชนิดข้อมูลไม่ตรงกัน (type mismatch)

    // c)
    b = functionN(a, b);
    //  ผิด: functionN(int, double)
    // parameter ตัวที่ 2 ต้องเป็น double แต่ b เป็น int

    // d)
    r = functionO(r, a, s, b);
    //  ถูกต้อง: functionO(double, int, double, int)
    // r(double), a(int), s(double), b(int) ตรงตาม prototype

    // e)
    s = functionP(a, b, c, d, e);
    //  ผิด: functionP รับ parameter แค่ 4 ตัว
    // แต่ส่งมา 5 ตัว

    // f)
    u = functionM();
    //  ถูกต้อง: functionM() return double และ u เป็น double

    // g)
    c = d + functionN(r, s);
    //  ผิด: functionN(int, double)
    // argument ตัวแรกต้องเป็น int แต่ r เป็น double

    // h)
    t = s * functionO(r, a, r, a);
    //  ถูกต้อง: functionO return double
    // s(double) * double → ผลลัพธ์เป็น double เก็บใน t ได้

    // i)
    a = v + functionP(r, s, t, t);
    //  ผิด:
    // functionP(int, int, int, int)
    // r, s, t เป็น double ไม่ตรงกับ int
    // และผลลัพธ์เป็น double แต่เอาไปเก็บใน int a

    // j)
    functionP(functionN(a, a), s, t, t+r);
    //  ผิด:
    // - functionN(int, double) แต่ argument ที่ 2 เป็น int a
    // - functionP ต้องรับ int ทั้งหมด แต่ s, t, t+r เป็น double
    // - return value ของ functionP ไม่ถูกนำไปใช้

    // k)
    v = functionP(functionN(a, a), s, t, t+r);
    //  ผิด:
    // - functionN argument ตัวที่ 2 ต้องเป็น double
    // - functionP ต้องรับ int แต่ส่ง double
    // แม้ v จะเป็น double แต่ parameter ไม่ตรง prototype
}
