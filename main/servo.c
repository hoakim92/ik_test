#include "servo.h"
#include "config.h"

#include "pca9685.h"

#include <esp_log.h>

static char tag[] = "SERVO";

void sleep_servos() {
  for (int i = 0; i<12; i++) {
    // ESP_LOGI(tag, "setPWM of servo %d, pulse %d", servos[i].pwmIndex, (int)servos[i].zero);
    setPWM(servos[i].pwmIndex, 0, servos[i].sleep);
  }
}
void init_servos() {
  for (int i = 0; i<12; i++) {
    // ESP_LOGI(tag, "setPWM of servo %d, pulse %d", servos[i].pwmIndex, (int)servos[i].zero);
    setPWM(servos[i].pwmIndex, 0, servos[i].zero);
  }
}

esp_err_t set_servo(uint8_t id, int16_t angle) {
  servo_descriptor servo = servos[id];
  uint16_t pulse = (uint16_t) (0.5 + servo.zero + (angle * servo.conversation));
  esp_err_t ret = setPWM(id, 0, pulse);
  if (ret == ESP_OK) return ESP_OK;
  else return ESP_FAIL;
}

