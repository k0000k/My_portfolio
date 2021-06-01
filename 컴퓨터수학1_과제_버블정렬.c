#include <stdio.h>
#include <string.h>

void bubble_ascending(char arr[][10], int n)			//������������ �����ϱ� ���� �Լ� ���� 
{
    char a[20] = "";
    int i,j,s;

    for (i = 0; i < n; i++)							//arr[j]�� arr[j+1]�� ���������� ���Ͽ� ���� ū ���� Ȯ���ϴ� ����Ŭ�� n�� �ݺ� 
    {
        for (j = 0; j < n - 1 - i; j++)				//�� ����Ŭ ������ �񱳴�  n - 1 - i�� �̷����. 
        {
            for ( s = 0;s < 10; s++)				//arr[j]�� arr[j+1]�� ������ ���ڸ� ���ؼ� ������ ������. 
            {
                if (arr[j][s] < arr[j + 1][s])			//�� ���ڿ��� s��° ���ڰ� ������, ���� Ű���� �������ڸ� ���ϰ� �� ������ ������ �����ɶ����� ���� 
                    break;

                else if (arr[j][s] > arr[j + 1][s])
                {
                    strcpy(a, arr[j]);
                    strcpy(arr[j], arr[j + 1]);
                    strcpy(arr[j + 1], a);
                    break;
                }
            }

        }
    }
}


void bubble_descending(char arr[][10], int n)			//������������ �����ϱ� ���� �Լ� ���� 
{
    char a[20] = "";
    int i,j,s;

    for (i = 0; i < n; i++)						//arr[j]�� arr[j+1]�� ���������� ���Ͽ� ���� ���� ���� Ȯ���ϴ� ����Ŭ�� n�� �ݺ� 
    {
        for (j = 0; j < n - 1 - i; j++)			//�� ����Ŭ ������ �񱳴�  n - 1 - i�� �̷����. 
        {
            for ( s = 0;s < 10; s++)			//arr[j]�� arr[j+1]�� ������ ���ڸ� ���ؼ� ������ ������.
            {
                if (arr[j][s] > arr[j + 1][s])		//�� ���ڿ��� s��° ���ڰ� ������, ���� Ű���� �������ڸ� ���ϰ� �� ������ ������ �����ɶ����� ����
                    break;

                else if (arr[j][s] < arr[j + 1][s])
                {
                    strcpy(a, arr[j]);
                    strcpy(arr[j], arr[j + 1]);
                    strcpy(arr[j + 1], a);
                    break;
                }
            }

        }
    }
}

int main(void)
{
	
	int k;
	
    char arr[10][10] = { "cat","dog" ,"gorilla","rabbit","horse","cow","bear","mouse","pig","tiger" };		//���ڿ��� ������ ���ڿ� �����ϱ� ���� ���� 
    
    printf("Bubble Sort (animals-mammals)\n\n");

    bubble_ascending(arr, 10);
    printf("[Ascending order] ");		//�������� �Լ� ��� 

    for (k = 0; k < 10; k++)
        printf("%s ", arr[k]);			//��� ��� 
        
     bubble_descending(arr, 10);		//�������� �Լ� ��� 
     printf("\n\n[descending order] ");

    for (k = 0; k < 10; k++)
        printf("%s ", arr[k]);			//��� ��� 
    
	printf("\n\n����Ű�� ������ �����մϴ�.");		//���Ḧ �˸� 
	getchar();
	return 0;

}
