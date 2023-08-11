/* Copyright (c) 2022 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/. */

#include "brave/components/brave_ads/core/internal/privacy/challenge_bypass_ristretto/public_key_unittest_util.h"

#include "brave/components/brave_ads/core/internal/privacy/challenge_bypass_ristretto/challenge_bypass_ristretto_unittest_constants.h"
#include "brave/components/brave_ads/core/internal/privacy/challenge_bypass_ristretto/public_key.h"

namespace brave_ads::privacy::cbr {

PublicKey GetPublicKeyForTesting() {
  return PublicKey(kPublicKeyBase64);
}

PublicKey GetMismatchingPublicKeyForTesting() {
  return {};
}

PublicKey GetInvalidPublicKeyForTesting() {
  return PublicKey(kInvalidBase64);
}

}  // namespace brave_ads::privacy::cbr
