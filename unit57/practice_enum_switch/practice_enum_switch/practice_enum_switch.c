#include <stdio.h>

enum VayneSkill {
    Tumble = 1,     // ������
    SilverBolts,    // ��ȭ��
    Condemn,        // ����
    FinalHour       // ������ �ð�
};

int main()
{
    enum VayneSkill skill;

    skill = Tumble;

    switch(skill)
    {
    case Tumble:
        printf("������\n");
        break;
    case SilverBolts:
        printf("��ȭ��\n");
        break;
    case Condemn:
        printf("����\n");
        break;
    case FinalHour:
        printf("������ �ð�\n");
        break;
    default:
        break;
    }

    return 0;
}