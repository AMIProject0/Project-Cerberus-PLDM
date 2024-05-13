#ifndef PLDM_FWUP_PROTOCOL_COMMANDS_H_
#define PLDM_FWUP_PROTOCOL_COMMANDS_H_


#include <stdint.h>
#include "cmd_interface_pldm.h"
#include "cmd_interface/cmd_interface.h"
#include "cmd_interface/device_manager.h"
#include "mctp/mctp_base_protocol.h"
#include "pldm_fwup_protocol.h"
#include "platform_config.h"

#include "libpldm/base.h"
#include "libpldm/firmware_update.h"


int pldm_fwup_process_query_device_identifiers_request(struct pldm_fwup_state *fwup_state,
    struct device_manager *device_manager, struct cmd_interface_msg *request);
int pldm_fwup_prcocess_get_firmware_parameters_request(struct pldm_fwup_state *fwup_state,
    struct device_manager *device_manager, struct cmd_interface_msg *request);
int pldm_fwup_process_request_update_request(struct pldm_fwup_state *fwup_state, struct pldm_fwup_flash_map *fwup_flash, 
    struct cmd_interface_msg *request);

    
int pldm_fwup_generate_get_package_data_request(struct pldm_fwup_multipart_transfer *multipart_transfer, 
    uint8_t *buffer, size_t buf_len);
int pldm_fwup_process_get_package_data_response(struct pldm_fwup_multipart_transfer *multipart_transfer,
    const struct pldm_fwup_flash_map *flash_map, struct cmd_interface_msg *response);



int pldm_fwup_generate_query_device_identifiers_request(struct pldm_fwup_state *fwup_state, uint8_t *buffer, size_t buf_len);
int pldm_fwup_process_query_device_identifiers_response(struct pldm_fwup_state *fwup_state, 
    struct device_manager *device_manager, struct cmd_interface_msg *response);

int pldm_fwup_generate_get_firmware_parameters_request(struct pldm_fwup_state *fwup_state, uint8_t *buffer, size_t buf_len);
int pldm_fwup_process_get_firmware_parameters_response(struct pldm_fwup_state *fwup_state,
    struct device_manager *device_manager, struct cmd_interface_msg *response);


int pldm_fwup_generate_request_update_request(struct pldm_fwup_flash_map *fwup_flash, struct pldm_fwup_state *fwup_state, uint8_t *buffer, size_t buf_len);
int pldm_fwup_process_request_update_response(struct cmd_interface_pldm *cmd_pldm, struct cmd_interface_msg *response);

int pldm_fwup_process_get_package_data_request(struct pldm_fwup_multipart_transfer *multipart_transfer, 
    const struct pldm_fwup_flash_map *flash_map, struct cmd_interface_msg *request);

#endif /* PLDM_FWUP_PROTOCOL_COMMANDS_H_ */