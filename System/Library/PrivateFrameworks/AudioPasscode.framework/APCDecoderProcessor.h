/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AUPasscodeDecoder, AUAudioUnitOfflineProcessor, NSMutableArray;

@interface APCDecoderProcessor : NSObject {

	AUPasscodeDecoder* _decoderAU;
	AUAudioUnitOfflineProcessor* _processor;
	NSMutableArray* _payloadsReceived;

}
-(id)run;
-(BOOL)getResultData:(id*)arg1 ;
-(id)initWithInputURL:(id)arg1 codecConfig:(id)arg2 resultData:(id)arg3 error:(id*)arg4 ;
-(id)initWithInputURL:(id)arg1 codecConfig:(id)arg2 error:(id*)arg3 ;
@end

