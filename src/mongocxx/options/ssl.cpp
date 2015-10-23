// Copyright 2014 MongoDB Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <mongocxx/options/ssl.hpp>

namespace mongocxx {
MONGOCXX_INLINE_NAMESPACE_BEGIN
namespace options {

void ssl::pem_file(std::string pem_file) {
    _pem_file = std::move(pem_file);
}

const bsoncxx::stdx::optional<std::string>& ssl::pem_file() const {
    return _pem_file;
}

void ssl::pem_password(std::string pem_password) {
    _pem_password = std::move(pem_password);
}

const bsoncxx::stdx::optional<std::string>& ssl::pem_password() const {
    return _pem_password;
}

void ssl::ca_file(std::string ca_file) {
    _ca_file = std::move(ca_file);
}

const bsoncxx::stdx::optional<std::string>& ssl::ca_file() const {
    return _ca_file;
}

void ssl::ca_dir(std::string ca_dir) {
    _ca_dir = std::move(ca_dir);
}

const bsoncxx::stdx::optional<std::string>& ssl::ca_dir() const {
    return _ca_dir;
}

void ssl::crl_file(std::string crl_file) {
    _crl_file = std::move(crl_file);
}

const bsoncxx::stdx::optional<std::string>& ssl::crl_file() const {
    return _crl_file;
}

void ssl::allow_invalid_certificates(bool allow_invalid_certificates) {
    _allow_invalid_certificates = allow_invalid_certificates;
}

const bsoncxx::stdx::optional<bool>& ssl::allow_invalid_certificates() const {
    return _allow_invalid_certificates;
}

}  // namespace options
MONGOCXX_INLINE_NAMESPACE_END
}  // namespace mongocxx

#include <mongocxx/config/postlude.hpp>
