#include <stdio.h>
#include <string.h>

void insertion_ascending(char arr[][10], int n)			//������������ �����ϱ� ���� �Լ� ���� 
{
    char a[20] = "";
    int i,j,s;

    for (i = 0; i < n-1; i++)					//Ȯ���ȹ迭�� ���������� ���Ͽ� ��ġ�� �����ϴ� ����Ŭ�� n-1�� �ݺ� 
    {
    	for (j=i; j >=0; j--)					//arr[j+1]�� �̹� �ڸ��� Ȯ���� �� ��ҵ�� ������ ������ ������ ���� 
    	{
	        for ( s = 0;s < 10; s++)				//arr[j]�� arr[j+1]�� ������ ���ڸ� ���ؼ� ������ ������.
	        {
	            if (arr[j][s] < arr[j + 1][s])			//arr[j]�� arr[j+1]�� ������ ���ڸ� ���ؼ� ������ ������.
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

void insertion_descending(char arr[][10], int n)			//������������ �����ϱ� ���� �Լ� ���� 
{
    char a[20] = "";
    int i,j,s;

    for (i = 0; i < n-1; i++)				//Ȯ���ȹ迭�� ���������� ���Ͽ� ��ġ�� �����ϴ� ����Ŭ�� n-1�� �ݺ�
    {
    	for (j=i; j >=0; j--)				//arr[j+1]�� �̹� �ڸ��� Ȯ���� �� ��ҵ�� ������ ������ ������ ���� 
    	{
	        for ( s = 0;s < 10; s++)			//arr[j]�� arr[j+1]�� ������ ���ڸ� ���ؼ� ������ ������.
	        {
	            if (arr[j][s] > arr[j + 1][s])		//arr[j]�� arr[j+1]�� ������ ���ڸ� ���ؼ� ������ ������.
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
	
    char arr[10][10] = { "seoul","busan","tokyo","newyork","osaka","bejing","london","la","shanghai","paris" };			//���ڿ��� ������ ���ڿ� �����ϱ� ���� ���� 
    
    printf(" insertion Sort (global big cities)\n\n");

   insertion_ascending(arr, 10);			//�������� �Լ� ���
    printf("[Ascending order] ");

    for (k = 0; k < 10; k++)
        printf("%s ", arr[k]);			//��� ���
    
	    
    insertion_descending(arr, 10);			//�������� �Լ� ���
    printf("\n[Descending order] ");

    for (k = 0; k < 10; k++)
        printf("%s ", arr[k]);		//��� ���
        
    printf("\n\n����Ű�� ������ �����մϴ�.");		//���Ḧ �˸� 
	getchar();
	
	return 0;
        


}
