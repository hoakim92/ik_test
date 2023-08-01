#ifndef SERVO_H
#define SERVO_H


#include <esp_err.h>

typedef struct {
  uint16_t pulse_0; 
  uint16_t pulse_180; 
  int8_t invert;
} servo_settings_t;

typedef struct {
    float minVal;
    float zero;
    float sleep;
    float start;
    float end;
    float conversation;
    float direction;
    int pwmIndex;
    char *servo_description;
} servo_descriptor;

void init_servos();
void sleep_servos();
esp_err_t set_servo(uint8_t id, int16_t angle);

#endif