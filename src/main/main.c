#include <string.h>
#include <inttypes.h>
#include "esp_wifi.h"
#include "esp_mac.h"
#include "esp_event.h"
#include "esp_log.h"
#include "esp_mesh.h"
#include "esp_mesh_internal.h"
#include "mesh_light.h"
#include "nvs_flash.h"

/*******************************************************
 *                Constants
 *******************************************************/
#define RX_SIZE (1500)
#define TX_SIZE (1460)

/*******************************************************
 *                Variable Definitions
 *******************************************************/
static const char *MESH_TAG = "main";   // This is for log
static const uint8_t MESH_ID[6] = {0x77, 0x77, 0x77, 0x77, 0x77, 0x77}  // This is written over from ID defined in menuconfig??
static uint8_t tx_buf[TX_SIZE] = {0, }; // sent result
static uint8_t rx_buf[RX_SIZE] = {0, }; // recieved result
static bool is_running = true;
static bool is_mesh_connected = false;
static mesh_addr_t mesh_parent_addr;
static int mesh_layer = -1;
static esp_netif_t *netif_sta = NULL;

mesh_light_ctl_t light_on = {
    .cmd = MESH_CONTROL_CMD,
    .on = 1,
    .token_id = MESH_TOKEN_ID,
    .token_value = MESH_TOKEN_VALUE,
};

mesh_light_ctl_t light_off = {
    .cmd = MESH_CONTROL_CMD,
    .on = 0,
    .token_id = MESH_TOKEN_ID,
    .token_value = MESH_TOKEN_VALUE,
};

/*******************************************************
 *                Function Definitions
 *******************************************************/



void app_main(void){

}