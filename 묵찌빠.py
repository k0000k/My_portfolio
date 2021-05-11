import sys
import random
import time


def rps_compare(p_choice,c_choice):
    if p_choice==c_choice:
        print('\n가위바위보에서 비겼어요')
        rps_result='무'
        
    elif (p_choice-c_choice)%3==1:
        print('\n가위바위보에서 이겼어요')
        rps_result='승'
        
    else:
        print('\n가위바위보에서 졌어요')
        rps_result='패'

    return rps_result



def 정수변환(choice):
    if choice=='가위' or choice=='찌':
        _int=0
    elif choice=='바위' or choice=='묵':
        _int=1
    elif choice=='보' or choice=='빠':
        _int=2

    return _int



def 묵찌빠_compare(p_int묵찌빠,c_int묵찌빠):
    p_int묵찌빠=정수변환(p_묵찌빠)
    c_int묵찌빠=정수변환(c_묵찌빠)

    if p_int묵찌빠==c_int묵찌빠:
        묵찌빠_result='무'
        
    elif (p_int묵찌빠-c_int묵찌빠)%3==1:
        묵찌빠_result='승'
        
    else:
        묵찌빠_result='패'


    return 묵찌빠_result




rps=['가위','바위','보']
묵찌빠=['찌','묵','빠']


print('\n------묵찌빠 게임 시작------')
print('\n컴퓨터와의 즐거운 묵찌빠 게임!! 이겨보세요^0^')


while True:
    player=input('\n\n가위/바위/보 입력: (종료는 -1 입력)\n')

    if not(player=='가위')and not(player=='바위') and not(player=='보') and not(player=='-1'):
        print('\n다시 입력해주세요.')
        continue
    elif player=='-1':
        print('\n종료합니다.')
        sys.exit()

    computer=random.choice(rps)

    time.sleep(0.5)

    print('\n당신은 %s를 선택했고 컴퓨터는 %s를 선택했습니다.'%(player,computer))

    rps_player=정수변환(player)
    rps_computer=정수변환(computer)

    time.sleep(1)
    rps_result=rps_compare(rps_player,rps_computer)

        
    if rps_result=='무':
        time.sleep(0.5)
        print('가위바위보가 무승부네요! 다시!')
        continue
    elif rps_result=='승' or rps_result=='패':
        while True:
            p_묵찌빠=input('\n묵찌빠 입력:')

            if not(p_묵찌빠=='찌')and not(p_묵찌빠=='묵') and not(p_묵찌빠=='빠'):
                print('\n다시 입력해주세요.')
                continue

            c_묵찌빠=random.choice(묵찌빠)

            time.sleep(0.5)
            print('\n당신은 %s를 선택했고 컴퓨터는 %s를 선택했습니다.'%(p_묵찌빠,c_묵찌빠))

            묵찌빠_result=묵찌빠_compare(p_묵찌빠,c_묵찌빠)

            if 묵찌빠_result=='무':
                if rps_result=='승':
                    time.sleep(0.5)
                    print('묵찌빠 승리!!')
                    break
                    
                elif rps_result=='패':
                    time.sleep(0.5)
                    print('묵찌빠 패배!!')
                    break

            else:
                rps_result=묵찌빠_result
                
