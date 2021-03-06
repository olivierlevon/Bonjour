/* -*- Mode: C; tab-width: 4 -*-
 *
 * Copyright (c) 2015 Apple Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include "unittest.h"
#include "DNSMessageTest.h"
#include "ResourceRecordTest.h"
#include "mDNSCoreReceiveTest.h"
#include "CNameRecordTests.h"
#include "LocalOnlyTimeoutTests.h"

const char *HWVersionString  = "unittestMac1,1";
const char *OSVersionString  = "unittest 1.1.1 (1A111)";
const char *BinaryNameString = "unittest";
const char *VersionString    = "unittest mDNSResponder-00 (Jan  1 1970 00:00:00)";



UNITTEST_HEADER(run_tests)
UNITTEST_GROUP(DNSMessageTest)
UNITTEST_GROUP(ResourceRecordTest)
UNITTEST_GROUP(mDNSCoreReceiveTest)
UNITTEST_GROUP(CNameRecordTests) // Commenting out until issue reported in <rdar://problem/30589360> is debugged.
UNITTEST_GROUP(LocalOnlyTimeoutTests)
UNITTEST_FOOTER

// UNITTEST_MAIN is run in daemon.c

