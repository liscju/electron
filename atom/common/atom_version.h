// Copyright (c) 2013 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#ifndef ATOM_COMMON_ATOM_VERSION_H_
#define ATOM_COMMON_ATOM_VERSION_H_

#define ATOM_MAJOR_VERSION 0
#define ATOM_MINOR_VERSION 0
#define ATOM_PATCH_VERSION 0
#define ATOM_PRE_RELEASE_VERSION -dev

#ifndef ATOM_STRINGIFY
#define ATOM_STRINGIFY(n) ATOM_STRINGIFY_HELPER(n)
#define ATOM_STRINGIFY_HELPER(n) #n
#endif

#ifndef ATOM_PRE_RELEASE_VERSION
  #define ATOM_VERSION_STRING ATOM_STRINGIFY(ATOM_MAJOR_VERSION) "." \
                              ATOM_STRINGIFY(ATOM_MINOR_VERSION) "." \
                              ATOM_STRINGIFY(ATOM_PATCH_VERSION)
#else
  #define ATOM_VERSION_STRING ATOM_STRINGIFY(ATOM_MAJOR_VERSION) "." \
                              ATOM_STRINGIFY(ATOM_MINOR_VERSION) "." \
                              ATOM_STRINGIFY(ATOM_PATCH_VERSION)     \
                              ATOM_STRINGIFY(ATOM_PRE_RELEASE_VERSION)
#endif


#define ATOM_VERSION "v" ATOM_VERSION_STRING


#define ATOM_VERSION_AT_LEAST(major, minor, patch) \
  (( (major) < ATOM_MAJOR_VERSION) \
  || ((major) == ATOM_MAJOR_VERSION && (minor) < ATOM_MINOR_VERSION) \
  || ((major) == ATOM_MAJOR_VERSION && (minor) == ATOM_MINOR_VERSION \
      && (patch) <= ATOM_PATCH_VERSION))

#endif  // ATOM_COMMON_ATOM_VERSION_H_
