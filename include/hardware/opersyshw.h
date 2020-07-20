#ifndef ANDROID_OPERSYSHW_INTERFACE_H
#define ANDROID_OPERSYSHW_INTERFACE_H

#include <stdint.h>
#include <sys/cdefs.h>
#include <sys/types.h>

#include <hardware/hardware.h>

__BEGIN_DECLS

#define OPERSYSHW_HARDWARE_MODULE_ID "opersyshw"

typedef struct opersyshw_device {
    struct hw_device_t common;

    int (*read)(const char* buffer, int length);
    int (*write)(const char* buffer, int length);
    int (*test)(int value);
    void (*zeroout)();
    int (*istherenewdata)();
    long (*get_last_timestamp)();
    int (*get_read_stat)();
    int (*get_write_stat)();
    void (*set_buffer_to_char)(char ch);

} opersyshw_device_t;

__END_DECLS

#endif // ANDROID_OPERSYSHW_INTERFACE_H
