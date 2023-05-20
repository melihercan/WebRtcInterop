#include "api/peer_connection_interface.h"
#include "Interop.h"

extern "C" RTC_EXPORT webrtc::PeerConnectionFactoryInterface*
CallCreatePeerConnectionFactory(
    rtc::Thread* network_thread,
    rtc::Thread* worker_thread,
    rtc::Thread* signaling_thread,
    webrtc::AudioDeviceModule* default_adm,
    webrtc::AudioEncoderFactory* audio_encoder_factory,
    webrtc::AudioDecoderFactory* audio_decoder_factory,
    webrtc::VideoEncoderFactory* video_encoder_factory,
    webrtc::VideoDecoderFactory* video_decoder_factory,
    webrtc::AudioMixer* audio_mixer,
    webrtc::AudioProcessing* audio_processing,
    webrtc::AudioFrameProcessor* audio_frame_processor = nullptr,
    webrtc::FieldTrialsView* field_trials = nullptr) 
{
  //auto x = webrtc::CreatePeerConnectionFactory(
  //    network_thread, worker_thread, signaling_thread, default_adm,
  //    audio_encoder_factory, audio_decoder_factory, video_encoder_factory,
  //    video_decoder_factory, audio_mixer, audio_processing,
  //    audio_frame_processor, field_trials);

  return NULL;
}


//extern "C" RTC_EXPORT PeerConnectionFactoryInterface* NewPeerConnectionFactoryInterface()
//{
//	return new PeerConnectionFactoryInterface();
//}
//
//extern "C" RTC_EXPORT void DeletePeerConnectionFactoryInterface(PeerConnectionFactoryInterface* pObject)
//{
//	if (pObject != NULL)
//	{
//          delete pObject;
//          pObject = NULL;
//	}
//}
//
//
