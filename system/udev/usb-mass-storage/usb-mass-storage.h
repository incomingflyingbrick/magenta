// Copyright 2016 The Fuchsia Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

// clang-format off

typedef struct ums_pdata {
    // id for this transaction for outgoing command and returning status
    uint32_t tag;
    // don't set these unless it is a txn called by driver itself
    bool is_driver_io;
    uint8_t cmd;
    mxr_completion_t* waiter;
} ums_pdata_t;

#define ums_iotxn_pdata(txn) iotxn_pdata(txn, ums_pdata_t)