#ifndef DRIVER_AUTH_H
#define DRIVER_AUTH_H

/* Authentication configuration */
struct auth_config {
    char *api_endpoint;
    int timeout;
    int max_retries;
};

/* Function declarations */
int e1000_authenticate_request(char *user_input);
int e1000_run_diagnostic(char *cmd);
int validate_driver_token(const char *token);

#endif /* DRIVER_AUTH_H */
