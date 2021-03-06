/**
 * Copyright Soramitsu Co., Ltd. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef IROHA_SHARED_MODEL_PLAIN_PEER_HPP
#define IROHA_SHARED_MODEL_PLAIN_PEER_HPP

#include "cryptography/public_key.hpp"
#include "interfaces/common_objects/peer.hpp"

#include <optional>

namespace shared_model {
  namespace plain {

    class Peer final : public interface::Peer {
     public:
      Peer(const interface::types::AddressType &address,
           const interface::types::PubkeyType &public_key,
           const std::optional<interface::types::TLSCertificateType>
               &tls_certificate);

      const interface::types::AddressType &address() const override;

      const interface::types::PubkeyType &pubkey() const override;

      const std::optional<interface::types::TLSCertificateType>
          &tlsCertificate() const override;

     private:
      const interface::types::AddressType address_;
      const interface::types::PubkeyType public_key_;
      const std::optional<interface::types::TLSCertificateType>
          tls_certificate_;
    };

  }  // namespace plain
}  // namespace shared_model

#endif  // IROHA_SHARED_MODEL_PLAIN_PEER_HPP
