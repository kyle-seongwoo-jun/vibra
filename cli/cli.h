#ifndef __CLI_H__
#define __CLI_H__

#include <string>
#include "../include/vibra.h"

class CLI 
{
public:
    int Run(int argc, char** argv);

private:
    Fingerprint* getFingerprintFromMusicFile(const std::string& music_file);
    Fingerprint* getFingerprintFromStdin(int chunk_seconds, int sample_rate,
                            int channels, int bits_per_sample, bool signed_pcm);
    std::string getMetadataFromShazam(const Fingerprint* fingerprint);

};

#endif // __CLI_H__
