// 음계에 알맞는 주파수값이에요.
#define   DO    523     // 도
#define   RE    587     // 레
#define   MI    659     // 미
#define   PA    698     // 파
#define   SOL   784     // 솔
#define   LA    880     // 라
#define   SI    988     // 시
#define   DDO   1047    // 또~!!!

// 학교종 계이름이에요~^^
const unsigned short tbl_melody[] = {
  SOL,SOL,LA,LA,SOL,SOL,MI,
  SOL,SOL,MI,MI,RE,
  SOL,SOL,LA,LA,SOL,SOL,MI,
  SOL,MI,RE,MI,DO
};

const unsigned char tbl_melody_delay[] = {
  1,1,1,1,1,1,2,
  1,1,1,1,2,
  1,1,1,1,1,1,2,
  1,1,1,1,2
};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(D6, OUTPUT); // 부저로 신호를 내보낼 핀을 설정해요.
}

void loop() {
  // 멜로디 신호를 내보내요~!
  String inputStr = Serial.readStringUntil('\n');
  long int int_one;
  int_one = inputStr.toInt();
  if (int_one == 1)
  {
    for(char index=0;index<sizeof(tbl_melody) /sizeof(unsigned short);index++)
    {
      tone(D6,tbl_melody[index]);    // 음계소리를 내요~!
      delay(tbl_melody_delay[index] * 500); // 현재 내는 음을 유지해요~!
      noTone(D6);  // 음계소리를 잠시 꺼서 다음 음소리와 구분해줘요^^
    }
  }
  else
    Serial.println(inputStr);
  delay(1000);  // 완료되면 1초간 대기~!!
}
