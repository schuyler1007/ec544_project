#ifndef __MESH_MAIN_H__
#define __MESH_MAIN_H__

#include "esp_err.h"

/*******************************************************
 *                Function Definitions
 *******************************************************/

void esp_mesh_p2p_tx_main(void *arg)
void esp_mesh_p2p_rx_main(void *arg)
esp_err_t esp_mesh_comm_p2p_start(void)
void mesh_event_handler(void *arg, esp_event_base_t event_base, int32_t event_id, void *event_data)
void ip_event_handler(void *arg, esp_event_base_t event_base, int32_t event_id, void *event_data)