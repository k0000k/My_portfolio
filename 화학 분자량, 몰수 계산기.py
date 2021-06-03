
원소={'H':1.01, 'He':4.00, 'Li':6.94, 'Be':9.01,'B':1.81,'C':12.01, 'N':14.01,\
    'O':16.00, 'F':19.00, 'Ne':20.18, 'Na':22.99, 'Mg':24.31, 'Al':26.98,\
    'Si':28.09, 'P':30.97, 'S':32.06, 'Cl':35.45, 'Ar':39.95, 'K':22.99,\
    'Ca':40.08}

sum=0

while True:
    print('\n\n분자량 계산과 몰수계산을 시작합니다.')
    
    while True:
        ele=input('\n원소를 입력하세요. 모든 원소를 입력했으면 0을 입력\n')

        if ele=='0':
            break
        
        n=int(input('\n그 원소가 몇개죠?\n'))

        sum=sum+원소[ele]*n

    print('\n분자량은 %f'%sum)

    w=float(input('\n질량을 입력하세요. 단위는 g\n'))

    M=w/sum

    print('\n몰수는 %f'%M)
