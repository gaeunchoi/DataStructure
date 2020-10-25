#include <stdio.h>
#include "User.h"
#include "queue.h"
#include "mainQueue.h"

int main() {
    // 0 : 돌
    // 1 : 동
    // 2 : 은
    // 3 : 금
    // 4 : 우라늄
    // 5 : 비브라늄
    mainQueue mq[6];
    init_mq(mq);

    mq_enqueue(mq, create_User("호람미어흥", "은", "하단"));
    mq_enqueue(mq, create_User("어른작슨", "돌", "중단"));
    mq_enqueue(mq, create_User("드르렁커억푸우", "돌", "상단"));
    mq_enqueue(mq, create_User("아리아나동그란데", "돌", "옆구리"));
    mq_enqueue(mq, create_User("김똥멍청", "돌", "하단"));
    mq_enqueue(mq, create_User("롤하지말고 싸우쟈", "은", "중단"));
    mq_enqueue(mq, create_User("팡명의 서광식", "돌", "하단"));
    mq_enqueue(mq, create_User("족보담당자", "동", "옆구리"));
    mq_enqueue(mq, create_User("언더아머 단속반", "돌", "중단"));
    mq_enqueue(mq, create_User("타코와사비", "돌", "상단"));
    mq_enqueue(mq, create_User("가문의 영광굴비", "돌", "옆구리"));
    mq_enqueue(mq, create_User("바람과 함께 살빠지다", "돌", "하단"));
    mq_enqueue(mq, create_User("오드리될뻔", "돌", "중단"));
    mq_enqueue(mq, create_User("농구있네축구싶냐", "돌", "상단"));
    mq_enqueue(mq, create_User("거져줄게잘사가", "은", "중단"));
    mq_enqueue(mq, create_User("살아줄게잘꺼져", "은", "하단"));
    mq_enqueue(mq, create_User("일해라절해라", "돌", "옆구리"));
    mq_enqueue(mq, create_User("형돈아형돈좀", "은", "하단"));
    mq_enqueue(mq, create_User("돈들어손내놔", "은", "하단"));
    mq_enqueue(mq, create_User("명란젓코난", "동", "중단"));
    mq_enqueue(mq, create_User("프로틴도둑 엄준식", "동", "중단"));
    mq_enqueue(mq, create_User("정통노예시장", "돌", "중단"));
    mq_enqueue(mq, create_User("이쑤신장군", "돌", "하단"));
    mq_enqueue(mq, create_User("전국모래자랑", "돌", "상단"));
    mq_enqueue(mq, create_User("짱구는 옷팔아", "은", "상단"));
    mq_enqueue(mq, create_User("성시경 친구 내시경", "돌", "상단"));
    mq_enqueue(mq, create_User("폭행몬스터", "돌", "중단"));
    mq_enqueue(mq, create_User("봉구스박보검", "돌", "중단"));
    mq_enqueue(mq, create_User("오즈의맙소사", "동", "옆구리"));
    mq_enqueue(mq, create_User("피부암통키", "돌", "중단"));
    mq_enqueue(mq, create_User("니이모를 찾아서", "돌", "중단"));
    mq_enqueue(mq, create_User("하울의 음 쥑이는성", "동", "중단"));
    mq_enqueue(mq, create_User("누가 문을 황현희", "돌", "하단"));
    mq_enqueue(mq, create_User("저는 이만 갑오개혁", "돌", "하단"));
    mq_enqueue(mq, create_User("반지하의 제왕", "은", "하단"));
    mq_enqueue(mq, create_User("바람계곡의 나얼시카", "동", "중단"));
    mq_enqueue(mq, create_User("발광머리앤", "돌", "중단"));
    mq_enqueue(mq, create_User("베네딕트 자대배치", "돌", "상단"));
    mq_enqueue(mq, create_User("카드값줘 체리", "돌", "중단"));
    mq_enqueue(mq, create_User("조선왕조실룩샐룩", "돌", "중단"));
    mq_enqueue(mq, create_User("달의요강 세일러문", "동", "옆구리"));
    mq_enqueue(mq, create_User("중성마녀 아라베스크", "돌", "하단"));
    mq_enqueue(mq, create_User("주님믿고 다이브", "돌", "중단"));
    mq_enqueue(mq, create_User("교회가다 걸린 스님", "돌", "중단"));
    mq_enqueue(mq, create_User("태정태세이문세", "동", "중단"));
    mq_enqueue(mq, create_User("홍어심슨", "우라늄", "중단"));
    mq_enqueue(mq, create_User("벼랑위의 당뇨", "동", "중단"));
    mq_enqueue(mq, create_User("아프리카청춘이다", "동", "상단"));
    mq_enqueue(mq, create_User("차린건 많지만 조금드세요", "동", "중단"));
    mq_enqueue(mq, create_User("내이름은 재난 얼굴이죠", "금", "옆구리"));
    mq_enqueue(mq, create_User("모두까기인형", "돌", "옆구리"));
    mq_enqueue(mq, create_User("연쇄할인범", "돌", "옆구리"));
    mq_enqueue(mq, create_User("우리사이 고멘나사이", "돌", "하단"));

    print_mq(mq);
}
