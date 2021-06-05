
원소={'H':1.01, 'He':4.00, 'Li':6.94, 'Be':9.01,'B':1.81,'C':12.01, 'N':14.01,\
    'O':16.00, 'F':19.00, 'Ne':20.18, 'Na':22.99, 'Mg':24.31, 'Al':26.98,\
    'Si':28.09, 'P':30.97, 'S':32.06, 'Cl':35.45, 'Ar':39.95, 'K':22.99,\
    'Ca':40.08, 'Sc':44.96, 'Ti':47.87, 'V':50.94, 'Cr':52.00, 'Mn':54.94,\
    'Fe':55.85, 'Co':58.93, 'Ni':58.69, 'Cu':63.55, 'Zn':65.38, 'Ga':69.72,\
    'Ge':72.63, 'As':74.92, 'Se':78.97, 'Br':79.90, 'Kr':83.80, 'Rb':85.47,\
    'Sr':87.62, 'Y':88.91, 'Zr':91.22, 'Nb':92.91, 'Ru':101.07, 'Ag':107.87,\
    'Cd':112.41, 'In':114.82, 'Sn':118.71, 'Sb':121.76, 'Te':127.60, 'I':126.90,\
    'Xe':131.29, 'Cs':132.91, 'Ba':137.33, 'Hf':178.49, 'Ta':180.95, 'W':183.84,\
    'Re':186.21, 'Os':190.23, 'Ir':192.22, 'Pt':195.08, 'Au':196.97, 'Hg':200.59,\
    'Tl':204.38, 'Pb':207.2, 'Bi':208.98}



while True:
    print('\n\n분자량 계산과 몰수계산을 시작합니다.')
    sum=0
    
    while True:
        ele=input('\n원소를 입력하세요. 모든 원소를 입력했으면 0을 입력\n')

        if ele=='0':
            break

        val=ele in 원소
        
        if val==False:
            print('다시 입력하세요.')
            continue
        
        n=int(input('\n그 원소가 몇개죠?\n'))

        sum=sum+원소[ele]*n

    print('\n분자량은 %f'%sum)

    w=float(input('\n질량을 입력하세요. 단위는 g\n'))

    M=w/sum

    print('\n몰수는 %f'%M)

