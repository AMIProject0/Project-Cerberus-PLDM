#ifndef FUP_INTERFACE_H_
#define FUP_INTERFACE_H_



#include <stdio.h>
#include "flash/flash_virtual_disk.h"


#ifdef PLDM_FWUP_UA_ENABLE
int fup_interface_setup_test_fup(struct flash_virtual_disk *fup);
#endif

#endif /* FUP_INTERFACE_H_ */