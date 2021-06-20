
import sys
import random
import time

def compare(p_choice,c_choice):
    if p_choice==c_choice:
        result='무'
        
    elif (p_choice-c_choice)%3==1:
        result='승'
        
    else:
        result='패'

    return result



rps_dict={'가위':0, '바위':1, '보':2}
rps=['가위', '바위', '보']

묵찌빠_dict={'찌':0, '묵':1, '빠':2}
묵찌빠=['찌', '묵', '빠']


print('\n------묵찌빠 게임 시작------')
print('\n컴퓨터와의 즐거운 묵찌빠 게임!! 이겨보세요^0^')


while True:
    player=input('\n\n가위/바위/보 입력: (종료는 -1 입력)\n')

    val=player in rps_dict

    if val==0 and not(player=='-1'):
        print('\n다시 입력해주세요.')
        continue
    elif player=='-1':
        print('\n종료합니다.')
        sys.exit()

    computer=random.choice(rps)

    time.sleep(0.5)

    print('\n당신은 %s를 선택했고 컴퓨터는 %s를 선택했습니다.'%(player,computer))


    time.sleep(0.5)
    result=compare(rps_dict[player],rps_dict[computer])

    if result=='무':
        time.sleep(0.5)
        print('가위바위보가 무승부네요! 다시!')
        continue
    
    else:
        if result=='승':
            print('가위바위보에서 이겼어요.')
        elif result=='패':
            print('가위바위보에서 졌어요.')
            
        while True:
            player=input('\n묵찌빠 입력:')

            val=player in 묵찌빠_dict

            if val==0:
                print('\n다시 입력해주세요.')
                continue

            computer=random.choice(묵찌빠)

            time.sleep(0.5)
            print('\n당신은 %s를 선택했고 컴퓨터는 %s를 선택했습니다.'%(player,computer))

            current_result=compare(묵찌빠_dict[player],묵찌빠_dict[computer])

            if current_result=='무':
                if result=='승':
                    time.sleep(0.5)
                    print('묵찌빠 승리!!')
                    break
                    
                elif result=='패':
                    time.sleep(0.5)
                    print('묵찌빠 패배!!')
                    break

            else:
                result=current_result
