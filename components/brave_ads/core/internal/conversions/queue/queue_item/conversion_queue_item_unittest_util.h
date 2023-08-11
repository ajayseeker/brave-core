/* Copyright (c) 2023 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_COMPONENTS_BRAVE_ADS_CORE_INTERNAL_CONVERSIONS_QUEUE_QUEUE_ITEM_CONVERSION_QUEUE_ITEM_UNITTEST_UTIL_H_
#define BRAVE_COMPONENTS_BRAVE_ADS_CORE_INTERNAL_CONVERSIONS_QUEUE_QUEUE_ITEM_CONVERSION_QUEUE_ITEM_UNITTEST_UTIL_H_

#include "brave/components/brave_ads/core/internal/conversions/queue/queue_item/conversion_queue_item_info.h"

namespace brave_ads {

struct ConversionInfo;

ConversionQueueItemList BuildConversionQueueItemsForTesting(
    const ConversionInfo& conversion,
    size_t count);

void SaveConversionQueueItemsForTesting(
    const ConversionQueueItemList& conversion_queue_items);

}  // namespace brave_ads

#endif  // BRAVE_COMPONENTS_BRAVE_ADS_CORE_INTERNAL_CONVERSIONS_QUEUE_QUEUE_ITEM_CONVERSION_QUEUE_ITEM_UNITTEST_UTIL_H_
