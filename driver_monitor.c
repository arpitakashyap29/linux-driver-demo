#include "driver_auth.h"
#include "e1000.h"

/* Monitor uses authentication functions */
void monitor_driver_health(struct e1000_adapter *adapter)
{
    /* Calls authenticate with user input directly */
    char *input = get_user_input();
    e1000_authenticate_request(input);
}

void run_health_check(char *command)
{
    /* Calls diagnostic with unsanitized command */
    e1000_run_diagnostic(command);
}

int check_token(const char *token)
{
    return validate_driver_token(token);
}
