#include "driver_auth.h"

/* Stats module also depends on auth */
void collect_driver_stats(char *device_id)
{
    /* Uses authenticate function */
    e1000_authenticate_request(device_id);
}

void export_stats(char *export_cmd)
{
    /* Uses diagnostic function */
    e1000_run_diagnostic(export_cmd);
}
