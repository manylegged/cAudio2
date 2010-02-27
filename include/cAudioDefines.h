#ifndef CAUDIODEFINES_H
#define CAUDIODEFINES_H

#include "cAudioPlatform.h"

//! Global define for the version of cAudio.
//! This is used primarily by plugins to make sure they are linking to the right library.
#define CAUDIO_VERSION "2.0.0"

//////////////////////
// Windows Settings //
//////////////////////
#ifdef CAUDIO_PLATFORM_WIN

#ifndef CAUDIO_STATIC_LIB
	#define CAUDIO_API __declspec(dllexport)
#else
	#define CAUDIO_API extern "C"
#endif // CAUDIO_STATIC_LIB

//!Define for making the entire library Thread Safe, comment out to disable.  Will also disable internal threading by the library.
#define CAUDIO_MAKE_THREAD_SAFE

#ifdef CAUDIO_MAKE_THREAD_SAFE
	//! Define enables threading for the main update loop.  Disable to run the internal update loop yourself. NOTE: Internal threading should NOT be used if the library is not thread safe!
	#define CAUDIO_USE_INTERNAL_THREAD
#endif //CAUDIO_MAKE_THREAD_SAFE

//! This define controls whether the Ogg/Vorbis decoder is compiled into the library.
#define CAUDIO_COMPILE_WITH_OGG_DECODER
//! This define controls whether the RIFF/Wav decoder is compiled into the library.
#define CAUDIO_COMPILE_WITH_WAV_DECODER

//! This define controls whether plugin support is added into the library, commenting it out will prevent any plugins from working
#define CAUDIO_COMPILE_WITH_PLUGIN_SUPPORT

//! Size of the internal buffer per source for audio data (total amount buffered is CAUDIO_SOURCE_BUFFER_SIZE * CAUDIO_SOURCE_NUM_BUFFERS)
#define CAUDIO_SOURCE_BUFFER_SIZE ( 1024 * 64 )
//! Number of internal buffers to cycle through per source (Note: using only 1 leads to choppy sound or premature ending of sources)
#define CAUDIO_SOURCE_NUM_BUFFERS 3

//! Comment out to remove all EFX support from the library
#define CAUDIO_EFX_ENABLED

//! Max number of effects that can be attached to a single sound source
#define CAUDIO_SOURCE_MAX_EFFECT_SLOTS 4

#endif //CAUDIO_PLATFORM_WIN

///////////////////////
// Mac OS X Settings //
///////////////////////
#ifdef CAUDIO_PLATFORM_MAC

#define CAUDIO_API extern "C"

//!Define for making the entire library Thread Safe, comment out to disable.  Will also disable internal threading by the library.
#define CAUDIO_MAKE_THREAD_SAFE

#ifdef CAUDIO_MAKE_THREAD_SAFE
	//! Define enables threading for the main update loop.  Disable to run the internal update loop yourself. NOTE: Internal threading should NOT be used if the library is not thread safe!
	#define CAUDIO_USE_INTERNAL_THREAD
#endif //CAUDIO_MAKE_THREAD_SAFE

//! This define controls whether the Ogg/Vorbis decoder is compiled into the library.
#define CAUDIO_COMPILE_WITH_OGG_DECODER
//! This define controls whether the RIFF/Wav decoder is compiled into the library.
#define CAUDIO_COMPILE_WITH_WAV_DECODER

//! This define controls whether plugin support is added into the library, commenting it out will prevent any plugins from working
#define CAUDIO_COMPILE_WITH_PLUGIN_SUPPORT

//! Size of the internal buffer per source for audio data (total amount buffered is CAUDIO_SOURCE_BUFFER_SIZE * CAUDIO_SOURCE_NUM_BUFFERS)
#define CAUDIO_SOURCE_BUFFER_SIZE ( 1024 * 64 )
//! Number of internal buffers to cycle through per source (Note: using only 1 leads to choppy sound or premature ending of sources)
#define CAUDIO_SOURCE_NUM_BUFFERS 3

//! Comment out to remove all EFX support from the library
#define CAUDIO_EFX_ENABLED

//! Max number of effects that can be attached to a single sound source
#define CAUDIO_SOURCE_MAX_EFFECT_SLOTS 4

#endif //CAUDIO_PLATFORM_MAC

/////////////////////
// IPhone Settings //
/////////////////////
#ifdef CAUDIO_PLATFORM_IPHONE

#define CAUDIO_API extern "C"

//!Define for making the entire library Thread Safe, comment out to disable.  Will also disable internal threading by the library.
#define CAUDIO_MAKE_THREAD_SAFE

#ifdef CAUDIO_MAKE_THREAD_SAFE
	//! Define enables threading for the main update loop.  Disable to run the internal update loop yourself. NOTE: Internal threading should NOT be used if the library is not thread safe!
	#define CAUDIO_USE_INTERNAL_THREAD
#endif //CAUDIO_MAKE_THREAD_SAFE

//! This define controls whether the Ogg/Vorbis decoder is compiled into the library.
#define CAUDIO_COMPILE_WITH_OGG_DECODER
//! This define controls whether the RIFF/Wav decoder is compiled into the library.
#define CAUDIO_COMPILE_WITH_WAV_DECODER

//! Size of the internal buffer per source for audio data (total amount buffered is CAUDIO_SOURCE_BUFFER_SIZE * CAUDIO_SOURCE_NUM_BUFFERS)
#define CAUDIO_SOURCE_BUFFER_SIZE ( 1024 * 64 )
//! Number of internal buffers to cycle through per source (Note: using only 1 leads to choppy sound or premature ending of sources)
#define CAUDIO_SOURCE_NUM_BUFFERS 3

#endif //CAUDIO_PLATFORM_IPHONE

////////////////////
// Linux Settings //
////////////////////
#ifdef CAUDIO_PLATFORM_LINUX

#define CAUDIO_API extern "C"

//!Define for making the entire library Thread Safe, comment out to disable.  Will also disable internal threading by the library.
#define CAUDIO_MAKE_THREAD_SAFE

#ifdef CAUDIO_MAKE_THREAD_SAFE
	//! Define enables threading for the main update loop.  Disable to run the internal update loop yourself. NOTE: Internal threading should NOT be used if the library is not thread safe!
	#define CAUDIO_USE_INTERNAL_THREAD
#endif //CAUDIO_MAKE_THREAD_SAFE

//! This define controls whether the Ogg/Vorbis decoder is compiled into the library.
#define CAUDIO_COMPILE_WITH_OGG_DECODER
//! This define controls whether the RIFF/Wav decoder is compiled into the library.
#define CAUDIO_COMPILE_WITH_WAV_DECODER

//! This define controls whether plugin support is added into the library, commenting it out will prevent any plugins from working
#define CAUDIO_COMPILE_WITH_PLUGIN_SUPPORT

//! Size of the internal buffer per source for audio data (total amount buffered is CAUDIO_SOURCE_BUFFER_SIZE * CAUDIO_SOURCE_NUM_BUFFERS)
#define CAUDIO_SOURCE_BUFFER_SIZE ( 1024 * 64 )
//! Number of internal buffers to cycle through per source (Note: using only 1 leads to choppy sound or premature ending of sources)
#define CAUDIO_SOURCE_NUM_BUFFERS 3

//! Since linux has license issues with OpenAL EFX, we cannot release the header files necessary for it.  Therefore, we must disable EFX on linux.  Uncomment this define if you have EFX available on linux.
//#define CAUDIO_EFX_ENABLED

//! Max number of effects that can be attached to a single sound source
//#define CAUDIO_SOURCE_MAX_EFFECT_SLOTS 4

#endif //CAUDIO_PLATFORM_LINUX

#endif //CAUDIODEFINES_H
