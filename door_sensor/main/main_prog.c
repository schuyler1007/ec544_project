#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

#define DOOR_SENSOR_PIN  19

static const char *TAG = "door_sensor";

void app_main(void){

    while(true){
        gpio_set_direction(DOOR_SENSOR_PIN, GPIO_MODE_INPUT);


        if (gpio_get_level(DOOR_SENSOR_PIN) == 0){  
            ESP_LOGI(TAG, "INTRUDER ALERT");    
        } 
        else{
            ESP_LOGI(TAG, "No intruder");
        }
        vTaskDelay(100);
    }
}