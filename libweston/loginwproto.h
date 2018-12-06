#pragma once
/** loginw protocol definition */


/* This is autogenerated by cbindgen. Don't modify this manually. */

#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

enum LoginwRequestType {
  /*
   * bytes -> fd -- Open an input (evdev) device fd (by full path)
   */
  LoginwOpenInput = 0,
  /*
   * bytes -> fd -- Open a DRM device fd (by full path)
   */
  LoginwOpenDrm = 1,
  /*
   * void -> u64 + fd -- Initialize a new virtual terminal, returns vt number and passes tty fd
   */
  LoginwAcquireVt = 100,
  /*
   * uint -> void -- Switch to a given virtual terminal (by number)
   */
  LoginwSwitchVt = 101,
  /*
   * void -> void -- Shuts down the machine
   */
  LoginwPowerOff = 200,
  /*
   * void -> void -- Reboots the machine
   */
  LoginwReboot = 201,
  /*
   * void -> void -- Suspends the machine
   */
  LoginwSuspend = 202,
  /*
   * void -> void -- Hibernates the machine
   */
  LoginwHibernate = 203,
  /*
   * void -> boolean -- Checks whether suspending is possible
   */
  LoginwCanSuspend = 302,
  /*
   * void -> boolean -- Checks whether hibernation is possible
   */
  LoginwCanHibernate = 303,
};
typedef uint16_t LoginwRequestType;

enum LoginwResponseType {
  LoginwError = 0,
  LoginwDone = 1,
  LoginwPassedFd = 2,
  LoginwActivated = 100,
  LoginwDeactivated = 101,
};
typedef uint16_t LoginwResponseType;

typedef union {
  uint8_t bytes[128];
  uint64_t u64;
  bool boolean;
} LoginwData;

typedef struct {
  LoginwRequestType typ;
  LoginwData dat;
} LoginwRequest;

typedef struct {
  LoginwResponseType typ;
  LoginwData dat;
} LoginwResponse;

/* This is autogenerated by cbindgen. Don't modify this manually. */

void _cbindgen_helper(LoginwData _a, LoginwRequestType _b, LoginwRequest _c, LoginwResponseType _d, LoginwResponse _e);

/* This is autogenerated by cbindgen. Don't modify this manually. */