#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "RUS");

    int A, B, C;
    int hypothesis;

    printf("=== �������� �������� ===\n");
    printf("������� ��� ����� ����� (A, B, C): ");

    scanf("%d %d %d", &A, &B, &C);

    // ���������, ��� ��� ��� ����� ������ ���
    hypothesis = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("�������� ������������ (1 - ��, 0 - ���): %d\n", hypothesis);

    return 0;
}