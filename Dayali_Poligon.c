#include <stdio.h>
#include <math.h>
#include <locale.h>

#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164

int main()
{
	setlocale(LC_ALL, "Turkish");

	double a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, n;
	double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, x11, y11, x12, y12, x13, y13;
	double S1, S2, S3, S4, S5, S6, S7, S8, S9, S10;
	double So, S11, St;
	double Bo, B1, B2, B3, B4, B5, B6, B7, B8, B9, B10, B11;
	double Bo1, Bo2, Bo3, Bo4, Bo5, Bo6, Bo7, Bo8, Bo9, Bo10, Bo11;
	double fB, FB;

		/// Bilinenleri isteyelim.
	// Kırılma açıları; a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, n;
	printf("a1 değerini giriniz: ");
	scanf("%lf", &a1);
	printf("a2 değerini giriniz: ");
	scanf("%lf", &a2);
	printf("a3 değerini giriniz: ");
	scanf("%lf", &a3);
	printf("a4 değerini giriniz: ");
	scanf("%lf", &a4);
	printf("a5 değerini giriniz: ");
	scanf("%lf", &a5);
	printf("a6 değerini giriniz: ");
	scanf("%lf", &a6);
	printf("a7 değerini giriniz: ");
	scanf("%lf", &a7);
	printf("a8 değerini giriniz: ");
	scanf("%lf", &a8);
	printf("a9 değerini giriniz: ");
	scanf("%lf", &a9);
	printf("a10 değerini giriniz: ");
	scanf("%lf", &a10);
	printf("a11 değerini giriniz: ");
	scanf("%lf", &a11);
	printf("n yatay açı değerini giriniz: ");
	scanf("%lf", &n);
	// Ölçülen koordinat değerleri; x1, y1, x2, y2, x3, y3, x4, y4;
	printf("x1 değerini giriniz: ");
	scanf("%lf", &x1);
	printf("x2 değerini giriniz: ");
	scanf("%lf", &x2);
	printf("x3 değerini giriniz: ");
	scanf("%lf", &x3);
	printf("x4 değerini giriniz: ");
	scanf("%lf", &x4);
	printf("y1 değerini giriniz: ");
	scanf("%lf", &y1);
	printf("y2 değerini giriniz: ");
	scanf("%lf", &y2);
	printf("y3 değerini giriniz: ");
	scanf("%lf", &y3);
	printf("y4 değerini giriniz: ");
	scanf("%lf", &y4);
	// Ölçülen mesafeler; So, S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11; */
	printf("S1 değerini giriniz: ");
	scanf("%lf", &S1);
	printf("S2 değerini giriniz: ");
	scanf("%lf", &S2);
	printf("S3 değerini giriniz: ");
	scanf("%lf", &S3);
	printf("S4 değerini giriniz: ");
	scanf("%lf", &S4);
	printf("S5 değerini giriniz: ");
	scanf("%lf", &S5);
	printf("S6 değerini giriniz: ");
	scanf("%lf", &S6);
	printf("S7 değerini giriniz: ");
	scanf("%lf", &S7);
	printf("S8 değerini giriniz: ");
	scanf("%lf", &S8);
	printf("S9 değerini giriniz: ");
	scanf("%lf", &S9);
	printf("S10 değerini giriniz: ");
	scanf("%lf", &S10);

		/// Bilinmeyenlerin hesaplanması.
	printf("\n\t=== Hesap sonuçları! === \n");
	/* Hesaplanacak semt açıları ; βo, β1, β2, β3, β4, β5, β6, β7, β8, β9, β10, β11, βo1, βo2, βo3, βo4, βo5, βo6, βo7, βo8, βo9, βo10, βo11; */
	/* Hesaplanacak kapanma hataları;
	> fβ; Açı kapanma hatası
	> Fβ; Açı kapanma hata sınırı
	> fy; Y koordinatının kapanma hatası
	> fx; X koordinatının kapanma hatası
	> fQ; Enine kapanma hatası
	> FQ; Enine kapanma hata sınırı
	> fl; Boyuna kapanma hatası
	> Fl; Boyuna kapanma hata sınırı
	> S; Δx ve Δy den bulunan ağ uzunluğu */
	/* Hesaplanacak mesafeler; St;
	Hesaplanacak Koordinat Farkları;
	> Δx1, Δy1, Δx2, Δy2, Δx3, Δy3, Δx4, Δy4, Δx5, Δy5, Δx6, Δy6, Δx7, Δy7, Δx8, Δy8, Δx9, Δy9, Δx10, Δy10;
	> Δxo1, Δyo1, Δxo2, Δyo2, Δxo3, Δyo3, Δxo4, Δyo4, Δxo5, Δyo5, Δxo6, Δyo6, Δxo7, Δyo7, Δxo8, Δyo8, Δxo9, Δyo9, Δxo10, Δyo10, Δxt, Δyt; */
	/* Hesaplanan Koordinat değerleri
	> x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, x11, y11, x12, y12, x13, y13, x14, y14; */
	/* POLİGON HESABI
	Ölçülen noktaların koordinatlardan mesafelerin hesaplanması;
	> So = Sqrt((x1 - x2)^ 2) + (y1 - y2)^ 2);
	> S11 = Sqrt((x3 - x4)^ 2) + (y3 - y4)^ 2);
	> St = S1 + S2 + S3 + S4 + S5 + S6 + S7 + S8 + S9 + S10; toplam mesafe */
	So = pow(((pow((x1 - x2), 2)) + pow((y1 - y2), 2)), 0.5);
	S11 = pow(((pow((x3 - x4), 2)) + pow((y3 - y4), 2)), 0.5);
	St = S1 + S2 + S3 + S4 + S5 + S6 + S7 + S8 + S9 + S10;
	printf("So değeri: %f\n", So);
	printf("S11 değeri: %f\n", S11);
	printf("St değeri: %f\n", St);
	/* 1. ve 2. noktalar arasındaki, semt açısı (Dengelenmiş başlangıç noktaları-Nirengi)
	> Bo = atan((y2 - y1) / (x2 - x1)) * 200 / PI;
	NOT: Açı ‘0’ dan küçük ise +200 eklenir. ‘0’dan büyük ve eşit ise açı değeri korunur. */
	/* 12. ve 13. noktalar arasındaki, semt açısı (Dengelenmiş bitiş noktaları-Nirengi)
	> β11…………. */
	Bo = atan(((y2 - y1) / (x2 - x1)) * 200 / PI);
	printf("Bo değeri: %f\n", Bo);
	B1 = atan(((y3 - y2) / (x3 - x2)) * 200 / PI);
	printf("B1 değeri: %f\n", B1);
	B2 = atan(((y4 - y3) / (x4 - x3)) * 200 / PI);
	printf("B2 değeri: %f\n", B2);
	B3 = atan(((y5 - y4) / (x5 - x4)) * 200 / PI);
	printf("B3 değeri: %f\n", B3);
	B4 = atan(((y6 - y5) / (x6 - x5)) * 200 / PI);
	printf("B4 değeri: %f\n", B4);
	B5 = atan(((y7 - y6) / (x7 - x6)) * 200 / PI);
	printf("B5 değeri: %f\n", B5);
	B6 = atan(((y8 - y7) / (x8 - x7)) * 200 / PI);
	printf("B6 değeri: %f\n", B6);
	B7 = atan(((y9 - y8) / (x9 - x8)) * 200 / PI);
	printf("B7 değeri: %f\n", B7);
	B8 = atan(((y10 - y9) / (x10 - x9)) * 200 / PI);
	printf("B8 değeri: %f\n", B8);
	B9 = atan(((y11 - y10) / (x11 - x10)) * 200 / PI);
	printf("B9 değeri: %f\n", B9);
	B10 = atan(((y12 - y11) / (x12 - x11)) * 200 / PI);
	printf("B10 değeri: %f\n", B10);
	B11 = atan(((y13 - y12) / (x13 - x12)) * 200 / PI);
	printf("B11 değeri: %f\n", B11);
	/* 2. ve 3. noktalar arasındaki, açı kapanma hatası eklenmeyen semt açısı
	> Bo1 = Bo + a1;
	NOT: Açı 200’den büyük ise 200 çıkarılır. 200’den küçük veya eşit ise açı değeri korunur. */
	Bo1 = Bo + a1;
	printf("Bo1 değeri: %f\n", Bo1);
	/* 3. ve 4. noktalar arasındaki,Açı kapanma hatası eklenmeyen semt açısı
	> βo2 = ………….. */
	Bo2 = B1 + a2;
	printf("Bo2 değeri: %f\n", Bo2);
	/* 4. ve 5. noktalar arasındaki, Açı kapanma hatası eklenmeyen semt açısı
	> βo3 = ……….. */
	Bo3 = B2 + a3;
	printf("Bo3 değeri: %f\n", Bo3);
	/* 5. ve 6. noktalar arasındaki, Açı kapanma hatası eklenmeyen semt açısı
	> βo4 = ………. */
	Bo4 = B3 + a4;
	printf("Bo4 değeri: %f\n", Bo4);
	/* 6. ve 7. noktalar arasındaki, Açı kapanma hatası eklenmeyen semt açısı
	> βo5 = ………….. */
	Bo5 = B4 + a5;
	printf("Bo5 değeri: %f\n", Bo5);
	/* 7. ve 8. noktalar arasındaki, Açı kapanma hatası eklenmeyen semt açısı
	> βo6 = ……………. */
	Bo6 = B5 + a6;
	printf("Bo6 değeri: %f\n", Bo6);
	/* 8. ve 9. noktalar arasındaki, Açı kapanma hatası eklenmeyen semt açısı
	> βo7 = ……….. */
	Bo7 = B6 + a7;
	printf("Bo7 değeri: %f\n", Bo7);
	/* 9. ve 10. noktalar arasındaki, Açı kapanma hatası eklenmeyen semt açısı
	> βo8 = …………….. */
	Bo8 = B7 + a8;
	printf("Bo8 değeri: %f\n", Bo8);
	/* 10. ve 11. noktalar arasındaki, Açı kapanma hatası eklenmeyen semt açısı
	> βo9 = ………… */
	Bo9 = B8 + a9;
	printf("Bo9 değeri: %f\n", Bo9);
	/* 11. ve 12. noktalar arasındaki,Açı kapanma hatası eklenmeyen semt açısı
	> βo10 = ………….. */
	Bo10 = B9 + a10;
	printf("Bo10 değeri: %f\n", Bo10);
	/* 12. ve 13. noktalar arasındaki,Açı kapanma hatası eklenmeyen semt açısı
	> βo11 = ……………. */
	Bo11 = B10 + a11;
	printf("Bo11 değeri: %f\n", Bo11);
	/* Açı kapanma hatası
	> fβ = (β11 - βo11); */
	fB = (B11 - Bo11);
	printf("Açı kapanma hatası (fB) değeri: %f\n", fB);
	/* Açı kapanma hata sınırı
	> Fβ = (1.5) * (Sqrt(n)); */
	FB = (1.5) * (pow((n), 0.5));
	printf("Açı kapanma hata sınırı (FB) değeri: %f\n", FB);

	/* Açı kapanma hatası eklenen semt açıları
	2. ve 3. noktalar arası Semt açısı
	> β1 = βo + α1 + (fβ / n); */

	/* 3. ve 4. noktalar arası semt açısı
	> β2 = β1 + α2 + (fβ / n); */

	/* 4. ve 5. noktalar arası semt açısı
	> β3 = β2 + α3 + (fβ / n); */

	/* 5. ve 6. noktalar arası semt açısı
	> β4 = β3 + α4 + (fβ / n); */

	/* 6. ve 7. noktalar arası semt açısı
	> β5 = β4 + α5 + (fβ / n); */

	/* 7. ve 8. noktalar arası semt açısı
	> β6 = β5 + α6 + (fβ / n); */

	/* 8. ve 9. noktalar arası semt açısı
	> β7 = β6 + α7 + (fβ / n); */

	/* 9. ve 10. noktalar arası semt açısı
	> β8 = β7 + α8 + (fβ / n); */

	/* 10. ve 11. noktalar arası semt açısı
	> β9 = β8 + α9 + (fβ / n); */

	/* 11. ve 12. noktalar arası semt açısı
	> β10 = β9 + α10 + (fβ / n); */

	/* 12. ve 13. noktalar arası semt açısı
	> β11 = β10 + α11 + (fβ / n); */

	/* Yaklaşık koordinat farklarını hesaplayalım;
	> Δxo1, Δxo2, Δxo3, Δxo4, Δxo5, Δxo6, Δxo7, Δxo8, Δxo9, Δxo10
	> Δyo1, Δyo2, Δyo3, Δyo4, Δyo5, Δyo6, Δyo7, Δyo8, Δyo9, Δyo10
	> Δxo1 = S1 * Cos(β1 * PI / 200);
	> Δyo1 = S1 * Sin(β1 * PI / 200);
	>Δxo2 = ……………….
	> Δxt = Δxo1 + Δxo2 + Δxo3 + Δxo4 + Δxo5 + Δxo6 + Δxo7 + Δxo8 + Δxo9 + Δxo10;
	> Δyt = Δyo1 + Δyo2 + Δyo3 + Δyo4 + Δyo5 + Δyo6 + Δyo7 + Δyo8 + Δyo9 + Δyo10; */

	/* Koordinat kapanma hatası; > fx, fy
	> fy = ((y3 - y2) - Δyt);
	> fx = ((x3 - x2) - Δxt); */

	/* Kapanma hataları eklenen, Koordinat farkları;
	> Δx1, Δx2, Δx3, Δx4, Δx5, Δx6, Δx7, Δx8, Δx9, Δx10
	> Δy1, Δy2, Δy3, Δy4, Δy5, Δy6, Δy7, Δy8, Δy9, Δy10
	> Δx1 = Δxo1 + (fx / (n - 1));
	> Δy1 = Δyo1 + (fy / (n - 1));
	> Δx2 = Δxo2 + (fx / (n - 1));
	> Δy2 = Δyo2 + (fy / (n - 1));
	> Δx3=…………………… */

	/* Kapanma hataları eklenen, aranan Koordinat değerleri;
	> x5, y5, x6, y6, x7, y7, x8, y8, x9, y9, x10, y10, x11, y11, x12, y12, x13, y13, x14, y14;
	> x13 = x2 + Δx1;
	> y13 = y2 + Δy1;
	> x14 = x13 + Δx2;
	> y14 = y13 + Δy2;
	> x5 =………… */

	/* Enine ve boyuna kapanma hatası
	> fQ, FQ, fl, FL
	> S = Sqrt((Δxt)^2 + (Δyt)^ 2));
	> fQ = (((fy * Δxt) - (fx * Δyt)) / S); 
	> fl = (((fy * Δyt) + (fx * Δxt)) / S);
	> Fl = (0.05 + 0.04 * Sqrt(n - 1));
	> FQ = (0.05 + (0.15 * Math.Sqrt(S))); */

	return 0;
}
