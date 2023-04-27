#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

#define DOOR_SENSOR_PIN  19

static const char *TAG = "door_sensor";

void app_main(void){

    while(true){
        gpio_set_direction(DOOR_SENSOR_PIN, GPIO_MODE_INPUT); //set pin mode


        if (gpio_get_level(DOOR_SENSOR_PIN) == 0){  //if low, the two parts of the switch have been separated, aka the door has been opened
            ESP_LOGI(TAG, "INTRUDER ALERT");    //send an alert
        } 
        else{
            ESP_LOGI(TAG, "No intruder");
        }
        vTaskDelay(100); 
    }
}
