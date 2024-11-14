#include <stdio.h>

#define SIZE 10

void bubbleSort(int array[], int size);

int main(void)
{
    int a[SIZE] = { 34, 23, 12, 45, 9, 1, 24, 56, 78, 2 };
    int i;

    printf("Data items in original order\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    bubbleSort(a, SIZE);

    printf("\nData items in ascending order\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    return 0;
}

void bubbleSort(int array[], int size)
{
    int pass, i, hold;
    int swapped;

    for (pass = 1; pass < size; pass++)
    {
        swapped = 0;  // �Ω��ˬd�O�_���洫�o��

        // ���h�j��v�B��֤������
        for (i = 0; i < size - pass; i++)
        {
            if (array[i] > array[i + 1])
            {
                hold = array[i];
                array[i] = array[i + 1];
                array[i + 1] = hold;
                swapped = 1;  // �аO�w�o�ͥ洫
            }
        }

        // �p�G�b�Y�@�����S���o�ͥ���洫�A�h�Ƨǧ���
        if (!swapped)
        {
            break;
        }
    }
}