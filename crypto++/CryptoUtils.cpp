#include "CryptoUtils.h"
#include <stdexcept>
using std::runtime_error;
#include <cstdlib>
using std::exit;
#include "cryptopp/osrng.h"
using CryptoPP::AutoSeededRandomPool;
#include "cryptopp/eccrypto.h"
using CryptoPP::ECP;
using CryptoPP::ECDSA;
#include "cryptopp/sha.h"
using CryptoPP::SHA1;
#include "cryptopp/queue.h"
using CryptoPP::ByteQueue;
#include "cryptopp/oids.h"
using CryptoPP::OID;
// ASN1 is a namespace, not an object
#include "cryptopp/asn.h"
using namespace CryptoPP::ASN1;
#include "cryptopp/integer.h"
using CryptoPP::Integer;

using namespace CryptoPP;

std::string CryptoUtils::AESEncrypt(const std::string &plainText, const std::string &key) {


}

std::string CryptoUtils::AESDecrypt(const std::string &cipherText, const std::string &key) {

}

std::string CryptoUtils::ECDSASign(const std::string &message, const std::string &privateKey) {

}

bool CryptoUtils::ECDSAVerify(const std::string &message, const std::string &signature, const std::string &publicKey) {

}

std::string CryptoUtils::GenerateSignature(const std::string &data, const std::string &privateKey) {

}

bool CryptoUtils::VerifySignature(const std::string &data, const std::string &signature, const std::string &publicKey) {

}

std::tuple<std::string, std::string> CryptoUtils::GenerateKeys() {

}

void CryptoUtils::StoreKeys(const std::string &privateKey, const std::string &publicKey) {

}

std::string CryptoUtils::LoadPrivateKey(const std::string &id) {

}

std::string CryptoUtils::LoadPublicKey(const std::string &id) {

}
