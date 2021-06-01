#include <stdio.h>
#include <string.h>

void insertion_ascending(char arr[][10], int n)			//오름차순으로 정렬하기 위한 함수 정의 
{
    char a[20] = "";
    int i,j,s;

    for (i = 0; i < n-1; i++)					//확정된배열과 연쇄적으로 비교하여 위치를 결정하는 사이클을 n-1번 반복 
    {
    	for (j=i; j >=0; j--)					//arr[j+1]를 이미 자리가 확정된 앞 요소들과 순서가 결정될 때까지 비교함 
    	{
	        for ( s = 0;s < 10; s++)				//arr[j]와 arr[j+1]의 각각의 문자를 비교해서 순서를 결정함.
	        {
	            if (arr[j][s] < arr[j + 1][s])			//arr[j]와 arr[j+1]의 각각의 문자를 비교해서 순서를 결정함.
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

void insertion_descending(char arr[][10], int n)			//내림차순으로 정렬하기 위한 함수 정의 
{
    char a[20] = "";
    int i,j,s;

    for (i = 0; i < n-1; i++)				//확정된배열과 연쇄적으로 비교하여 위치를 결정하는 사이클을 n-1번 반복
    {
    	for (j=i; j >=0; j--)				//arr[j+1]를 이미 자리가 확정된 앞 요소들과 순서가 결정될 때까지 비교함 
    	{
	        for ( s = 0;s < 10; s++)			//arr[j]와 arr[j+1]의 각각의 문자를 비교해서 순서를 결정함.
	        {
	            if (arr[j][s] > arr[j + 1][s])		//arr[j]와 arr[j+1]의 각각의 문자를 비교해서 순서를 결정함.
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
	
    char arr[10][10] = { "seoul","busan","tokyo","newyork","osaka","bejing","london","la","shanghai","paris" };			//문자열의 각각의 글자에 진입하기 위해 정의 
    
    printf(" insertion Sort (global big cities)\n\n");

   insertion_ascending(arr, 10);			//오름차순 함수 사용
    printf("[Ascending order] ");

    for (k = 0; k < 10; k++)
        printf("%s ", arr[k]);			//결과 출력
    
	    
    insertion_descending(arr, 10);			//내림차순 함수 사용
    printf("\n[Descending order] ");

    for (k = 0; k < 10; k++)
        printf("%s ", arr[k]);		//결과 출력
        
    printf("\n\n엔터키를 누르면 종료합니다.");		//종료를 알림 
	getchar();
	
	return 0;
        


}
