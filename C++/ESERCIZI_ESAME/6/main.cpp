//ho messo tutto nel main per rapidità
#include<string>
#include<algorithm>
#include<string>
#include<memory>
#include<map>
#include<exception> 
#include<iostream>
class Compressor {
public:
    virtual std::string compress(const std::string& data) = 0;
    virtual std::string decompress(const std::string& compressedData) = 0;
    virtual ~Compressor() = default;
};
class ZipCompressor : public Compressor {
public:
    std::string compress(const std::string& data) override {
        return data+" compresso ZIP!";
    }
    std::string decompress(const std::string& data) override {
        return data+" decompresso ZIP!";
    }
};

// Implementazione per GZIP
class GzipCompressor : public Compressor {
public:
    std::string compress(const std::string& data) override {
        return data+" compresso GZIP!";
    }
    std::string decompress(const std::string& data) override {
        return data+" decompresso GZIP!";
    }
};

// Implementazione per RAR
class RarCompressor : public Compressor {
public:
    std::string compress(const std::string& data) override {
        return data+" compresso RAR!";
    }
    std::string decompress(const std::string& data) override {
        return data+" decompresso RAR!";
    }
};

//METODO ESAME, ESTRAE ESTENSIONE DA STRINGA FILE
std::string getFileExtension(const std::string& filename) {
    auto rev_iter = std::find(filename.rbegin(), filename.rend(), '.');
    if (rev_iter != filename.rend()) {
        return std::string(rev_iter.base(), filename.end());
    }
    return ""; // Nessuna estensione nel nome del file
}

class CompressionManager {
private:
    std::map<std::string, std::unique_ptr<Compressor>> compressors; //uso un map di oggetti a classe Base Compressor con associate la stringa di estensione relativa
public:
    CompressionManager() {
        // Registra i compressori per estensione
        compressors["txt"] = std::make_unique<ZipCompressor>();
        compressors["docx"] = std::make_unique<GzipCompressor>();
        compressors["xls"] = std::make_unique<RarCompressor>();
    }

    Compressor* getOptimalCompressor(const std::string& filename) {
        std::string extension = getFileExtension(filename);
        auto it = compressors.find(extension);
        if (it != compressors.end()) {
            return it->second.get();
        }
        else
            return nullptr; // Nessun compressore trovato per l'estensione
    }

    void compressFile(const std::string& filename, const std::string& data) {
        Compressor* compressor = getOptimalCompressor(filename);
        if (compressor) {
            std::cout<<compressor->compress(data)<<std::endl;
            // Salva compressedData in un file
        }
        else
            std::cout<<"Estensione non riconosciuta!";
    }

    void decompressFile(const std::string& filename, const std::string& data) {
        Compressor* compressor = getOptimalCompressor(filename);
        if (compressor) {
            std::cout<<compressor->decompress(data)<<std::endl;
        }
        else
            std::cout<<"Estensione non riconosciuta!";
    }
};

int main() {
    CompressionManager manager;
    manager.compressFile("file.txt", "CIAO");
    manager.decompressFile("file.txt", "CIAO");
    manager.decompressFile("file.bat", "CIAO");
    return 0;
}
