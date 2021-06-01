#include <stdio.h>
#include <string.h>

void bubble_ascending(char arr[][10], int n)			//오름차순으로 정렬하기 위한 함수 정의 
{
    char a[20] = "";
    int i,j,s;

    for (i = 0; i < n; i++)							//arr[j]와 arr[j+1]을 연쇄적으로 비교하여 가장 큰 수를 확정하는 사이클을 n번 반복 
    {
        for (j = 0; j < n - 1 - i; j++)				//한 사이클 내에서 비교는  n - 1 - i번 이루어짐. 
        {
            for ( s = 0;s < 10; s++)				//arr[j]와 arr[j+1]의 각각의 문자를 비교해서 순서를 결정함. 
            {
                if (arr[j][s] < arr[j + 1][s])			//두 문자열의 s번째 글자가 같으면, 값을 키워서 다음문자를 비교하고 이 과정을 순서가 결정될때까지 진행 
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


void bubble_descending(char arr[][10], int n)			//내림차순으로 정렬하기 위한 함수 정의 
{
    char a[20] = "";
    int i,j,s;

    for (i = 0; i < n; i++)						//arr[j]와 arr[j+1]을 연쇄적으로 비교하여 가장 작은 수를 확정하는 사이클을 n번 반복 
    {
        for (j = 0; j < n - 1 - i; j++)			//한 사이클 내에서 비교는  n - 1 - i번 이루어짐. 
        {
            for ( s = 0;s < 10; s++)			//arr[j]와 arr[j+1]의 각각의 문자를 비교해서 순서를 결정함.
            {
                if (arr[j][s] > arr[j + 1][s])		//두 문자열의 s번째 글자가 같으면, 값을 키워서 다음문자를 비교하고 이 과정을 순서가 결정될때까지 진행
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
	
    char arr[10][10] = { "cat","dog" ,"gorilla","rabbit","horse","cow","bear","mouse","pig","tiger" };		//문자열의 각각의 글자에 진입하기 위해 정의 
    
    printf("Bubble Sort (animals-mammals)\n\n");

    bubble_ascending(arr, 10);
    printf("[Ascending order] ");		//오름차순 함수 사용 

    for (k = 0; k < 10; k++)
        printf("%s ", arr[k]);			//결과 출력 
        
     bubble_descending(arr, 10);		//내림차순 함수 사용 
     printf("\n\n[descending order] ");

    for (k = 0; k < 10; k++)
        printf("%s ", arr[k]);			//결과 출력 
    
	printf("\n\n엔터키를 누르면 종료합니다.");		//종료를 알림 
	getchar();
	return 0;

}
