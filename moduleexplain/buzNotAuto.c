#define DO 523
#define DOS 554
#define RE 622
#define MI 659
#define FA 740
#define SO 830
#define SI 493
#define LA 440
#define LAS 466
#define SOL 415
#define DELAY 500 //딜레이 값 선언
int music[] = {RE, RE, MI,MI,0,MI,MI,0,MI,DOS,RE,SO,SO,RE,RE,SI,DOS,DOS,RE,MI,MI,0,MI,FA,FA,SI,SI,SI,SI,0,0,0,DOS,DOS, DOS, RE,MI,MI,0,MI,FA,SI,SI,MI,MI,SI,SI,SOL,SOL,0,SOL,LAS,0,LA,LA,DO,DO,DO, 0,DOS,DOS, 0,DOS, DO, DOS,DOS,DO, DO, DOS,0,DOS,RE,RE};
int buz=3;
void setup() {
  // put your setup code here, to run once:
  pinMode(buz, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<(sizeof(music)/sizeof(int));i++){
        tone(buz, music[i],2500);
        delay(140);
      }
}