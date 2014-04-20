#ifndef ARRAY_MALLOC_H
#define ARRAY_MALLOC_H


#define MAX_MALLOC_LEN 64
#define MAX_NUM_RADIUS_IDS (MAX_MALLOC_LEN * 256)
#define MAX_EAP_MESSAGE_LEN 4096



#ifndef log_error
#define log_error printf
#endif









void thread_authenticator (void *_arg);


#endif // ARRAY_MALLOC_H
