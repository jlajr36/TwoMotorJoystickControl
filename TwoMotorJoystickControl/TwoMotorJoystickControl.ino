#define IN1 8
#define IN2 9
#define IN3 10
#define IN4 11

#define _IN1 4
#define _IN2 5
#define _IN3 6
#define _IN4 7

const int LFPin = A0;
const int FRPin = A1;

int LRValue = 0;
int FRValue = 0;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(_IN1, OUTPUT);
  pinMode(_IN2, OUTPUT);
  pinMode(_IN3, OUTPUT);
  pinMode(_IN4, OUTPUT);
}

void loop() {
  LRValue = analogRead(LFPin);
  if(LRValue < 100) {
    OneStepLf();
  }
  if(LRValue > 900) {
    OneStepRt();
  }
  FRValue = analogRead(FRPin);
  if(FRValue > 900) {
    OneStepFw();
  }
  if(FRValue < 100) {
    OneStepRe();
  }
}

void OneStepRt() {
  int caseSteps = 0;
  while (caseSteps < 8) {
    switch (caseSteps) {
      case 0:
        FourDigitalWritesLeft(LOW, LOW, LOW, HIGH);
        FourDigitalWritesRight(LOW, LOW, LOW, HIGH);
        break;
      case 1:
        FourDigitalWritesLeft(LOW, LOW, HIGH, HIGH);
        FourDigitalWritesRight(LOW, LOW, HIGH, HIGH);
        break;
      case 2:
        FourDigitalWritesLeft(LOW, LOW, HIGH, LOW);
        FourDigitalWritesRight(LOW, LOW, HIGH, LOW);
        break;
      case 3:
        FourDigitalWritesLeft(LOW, HIGH, HIGH, LOW);
        FourDigitalWritesRight(LOW, HIGH, HIGH, LOW);
        break;
      case 4:
        FourDigitalWritesLeft(LOW, HIGH, LOW, LOW);
        FourDigitalWritesRight(LOW, HIGH, LOW, LOW);
        break;
      case 5:
        FourDigitalWritesLeft(HIGH, HIGH, LOW, LOW);
        FourDigitalWritesRight(HIGH, HIGH, LOW, LOW);
        break;
      case 6:
        FourDigitalWritesLeft(HIGH, LOW, LOW, LOW);
        FourDigitalWritesRight(HIGH, LOW, LOW, LOW);
        break;
      case 7:
        FourDigitalWritesLeft(HIGH, LOW, LOW, HIGH);
        FourDigitalWritesRight(HIGH, LOW, LOW, HIGH);
        break;
      default:
        FourDigitalWritesLeft(LOW, LOW, LOW, LOW);
        FourDigitalWritesRight(LOW, LOW, LOW, LOW);
        break;
    }
    delay(1);
    caseSteps++;
  }
}

void OneStepLf() {
  int caseSteps = 0;
  while (caseSteps < 8) {
    switch (caseSteps) {
      case 0:
        FourDigitalWritesLeft(HIGH, LOW, LOW, HIGH);
        FourDigitalWritesRight(HIGH, LOW, LOW, HIGH);
        break;
      case 1:
        FourDigitalWritesLeft(HIGH, LOW, LOW, LOW);
        FourDigitalWritesRight(HIGH, LOW, LOW, LOW);
        break;
      case 2:
        FourDigitalWritesLeft(HIGH, HIGH, LOW, LOW);
        FourDigitalWritesRight(HIGH, HIGH, LOW, LOW);
        break;
      case 3:
        FourDigitalWritesLeft(LOW, HIGH, LOW, LOW);
        FourDigitalWritesRight(LOW, HIGH, LOW, LOW);
        break;
      case 4:
        FourDigitalWritesLeft(LOW, HIGH, HIGH, LOW);
        FourDigitalWritesRight(LOW, HIGH, HIGH, LOW);
        break;
      case 5:
        FourDigitalWritesLeft(LOW, LOW, HIGH, LOW);
        FourDigitalWritesRight(LOW, LOW, HIGH, LOW);
        break;
      case 6:
        FourDigitalWritesLeft(LOW, LOW, HIGH, HIGH);
        FourDigitalWritesRight(LOW, LOW, HIGH, HIGH);
        break;
      case 7:
        FourDigitalWritesLeft(LOW, LOW, LOW, HIGH);
        FourDigitalWritesRight(LOW, LOW, LOW, HIGH);
        break;
      default:
        FourDigitalWritesLeft(LOW, LOW, LOW, LOW);
        FourDigitalWritesRight(LOW, LOW, LOW, LOW);
        break;
    }
    delay(1);
    caseSteps++;
  }
}

void OneStepFw() {
  int caseSteps = 0;
  while (caseSteps < 8) {
    switch (caseSteps) {
      case 0:
        FourDigitalWritesLeft(HIGH, LOW, LOW, HIGH);
        FourDigitalWritesRight(LOW, LOW, LOW, HIGH);
        break;
      case 1:
        FourDigitalWritesLeft(HIGH, LOW, LOW, LOW);
        FourDigitalWritesRight(LOW, LOW, HIGH, HIGH);
        break;
      case 2:
        FourDigitalWritesLeft(HIGH, HIGH, LOW, LOW);
        FourDigitalWritesRight(LOW, LOW, HIGH, LOW);
        break;
      case 3:
        FourDigitalWritesLeft(LOW, HIGH, LOW, LOW);
        FourDigitalWritesRight(LOW, HIGH, HIGH, LOW);
        break;
      case 4:
        FourDigitalWritesLeft(LOW, HIGH, HIGH, LOW);
        FourDigitalWritesRight(LOW, HIGH, LOW, LOW);
        break;
      case 5:
        FourDigitalWritesLeft(LOW, LOW, HIGH, LOW);
        FourDigitalWritesRight(HIGH, HIGH, LOW, LOW);
        break;
      case 6:
        FourDigitalWritesLeft(LOW, LOW, HIGH, HIGH);
        FourDigitalWritesRight(HIGH, LOW, LOW, LOW);
        break;
      case 7:
        FourDigitalWritesLeft(LOW, LOW, LOW, HIGH);
        FourDigitalWritesRight(HIGH, LOW, LOW, HIGH);
        break;
      default:
        FourDigitalWritesLeft(LOW, LOW, LOW, LOW);
        FourDigitalWritesRight(LOW, LOW, LOW, LOW);
        break;
    }
    delay(1);
    caseSteps++;
  }
}

void OneStepRe() {
  int caseSteps = 0;
  while (caseSteps < 8) {
    switch (caseSteps) {
      case 0:
        FourDigitalWritesRight(HIGH, LOW, LOW, HIGH);
        FourDigitalWritesLeft(LOW, LOW, LOW, HIGH);
        break;
      case 1:
        FourDigitalWritesRight(HIGH, LOW, LOW, LOW);
        FourDigitalWritesLeft(LOW, LOW, HIGH, HIGH);
        break;
      case 2:
        FourDigitalWritesRight(HIGH, HIGH, LOW, LOW);
        FourDigitalWritesLeft(LOW, LOW, HIGH, LOW);
        break;
      case 3:
        FourDigitalWritesRight(LOW, HIGH, LOW, LOW);
        FourDigitalWritesLeft(LOW, HIGH, HIGH, LOW);
        break;
      case 4:
        FourDigitalWritesRight(LOW, HIGH, HIGH, LOW);
        FourDigitalWritesLeft(LOW, HIGH, LOW, LOW);
        break;
      case 5:
        FourDigitalWritesRight(LOW, LOW, HIGH, LOW);
        FourDigitalWritesLeft(HIGH, HIGH, LOW, LOW);
        break;
      case 6:
        FourDigitalWritesRight(LOW, LOW, HIGH, HIGH);
        FourDigitalWritesLeft(HIGH, LOW, LOW, LOW);
        break;
      case 7:
        FourDigitalWritesRight(LOW, LOW, LOW, HIGH);
        FourDigitalWritesLeft(HIGH, LOW, LOW, HIGH);
        break;
      default:
        FourDigitalWritesLeft(LOW, LOW, LOW, LOW);
        FourDigitalWritesRight(LOW, LOW, LOW, LOW);
        break;
    }
    delay(1);
    caseSteps++;
  }
}

void FourDigitalWritesLeft(boolean b1st,
                       boolean b2nd,
                       boolean b3rd,
                       boolean b4th) {
  digitalWrite(IN1, b1st);
  digitalWrite(IN2, b2nd);
  digitalWrite(IN3, b3rd);
  digitalWrite(IN4, b4th);
}

void FourDigitalWritesRight(boolean b1st,
                       boolean b2nd,
                       boolean b3rd,
                       boolean b4th) {
  digitalWrite(_IN1, b1st);
  digitalWrite(_IN2, b2nd);
  digitalWrite(_IN3, b3rd);
  digitalWrite(_IN4, b4th);
}
