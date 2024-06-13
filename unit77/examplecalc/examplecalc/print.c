#include <stdio.h>    // printf �Լ��� ����� ��� ����
#include "print.h"    // CALC_DATA ����ü�� ����ϱ� ���� print.h ��� ���� ����
// print.h�� calcdata.h�� �����ϰ� ����

void print(CALC_DATA* data)    // ��� ��� �Լ� ����
{
    printf("%d %c %d = %d\n",
        data->operand1,    // ����� ��1
        data->operator,    // ������ ����
        data->operand2,    // ����� ��2
        data->result       // ��� ���
    );
}