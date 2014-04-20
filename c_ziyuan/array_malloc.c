#include <stdio.h>
#include <stdlib.h>

#include "array_malloc.h"

static char **g_aaa_eap_str_buf;

void thread_authenticator (void *_arg)
{
    int i;
    g_aaa_eap_str_buf = (char **)malloc(MAX_NUM_RADIUS_IDS);
    if(0 == g_aaa_eap_str_buf)
    {
        log_error("Failed to allocate buffer for storing eap strings");
        return;
    }
    for(i=0;i< MAX_NUM_RADIUS_IDS;i++)
    {
        g_aaa_eap_str_buf[i] = (char*)malloc(MAX_EAP_MESSAGE_LEN);
        if(0 == g_aaa_eap_str_buf[i])
        {
            log_error("Failed to allocate buffer for storing eap strings");
        }
    }
}
