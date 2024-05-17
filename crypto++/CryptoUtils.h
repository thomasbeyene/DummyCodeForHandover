#include <string>
#include <tuple>

class CryptoUtils {
public:
    static std::string AESEncrypt(const std::string &plainText, const std::string &key);
    static std::string AESDecrypt(const std::string &cipherText, const std::string &key);
    static std::string ECDSASign(const std::string &message, const std::string &privateKey);
    static bool ECDSAVerify(const std::string &message, const std::string &signature, const std::string &publicKey);
    static std::string GenerateSignature(const std::string &data, const std::string &privateKey);
    static bool VerifySignature(const std::string &data, const std::string &signature, const std::string &publicKey);
    static std::tuple<std::string, std::string> GenerateKeys();
    static void StoreKeys(const std::string &privateKey, const std::string &publicKey);
    static std::string LoadPrivateKey(const std::string &id);
    static std::string LoadPublicKey(const std::string &id);
};
