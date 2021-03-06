/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WK_RTCVideoDecoderH264, WK_RTCVideoDecoderH265;

@interface WK_RTCLocalVideoH264H265Decoder : NSObject {

	WK_RTCVideoDecoderH264* m_h264Decoder;
	WK_RTCVideoDecoderH265* m_h265Decoder;

}
-(long long)releaseDecoder;
-(long long)decodeData:(const char*)arg1 size:(unsigned long long)arg2 timeStamp:(unsigned)arg3 ;
-(id)initH264DecoderWithCallback:(/*^block*/id)arg1 ;
-(id)initH265DecoderWithCallback:(/*^block*/id)arg1 ;
@end

