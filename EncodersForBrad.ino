#include <RBE1001Lib.h>
#include <ESP32Encoder.h>
ESP32Encoder leftEncoder;
ESP32Encoder rightEncoder;

void setup() {
	Serial.begin(115200);
	ESP32PWM::allocateTimer(0);
	ESP32Encoder::useInternalWeakPullResistors = UP;
	rightEncoder.attachFullQuad(MOTOR1_ENCA,
	MOTOR1_ENCB);
	//ESP32Encoder::useInternalWeakPullResistors = UP;
	leftEncoder.attachFullQuad(MOTOR2_ENCA,
	MOTOR2_ENCB);
}

void loop() {
	printf("left: %ld right: %ld\n", (long int)leftEncoder.getCount(),
			(long int)rightEncoder.getCount());
	delay(1000);
}
