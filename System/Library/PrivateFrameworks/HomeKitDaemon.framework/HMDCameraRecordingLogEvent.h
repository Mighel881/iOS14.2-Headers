/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSUUID;

@interface HMDCameraRecordingLogEvent : HMDLogEvent {

	NSUUID* _sessionID;
	unsigned long long _sequenceNumber;
	NSUUID* _cameraID;

}

@property (copy,readonly) NSUUID * cameraID;                         //@synthesize cameraID=_cameraID - In the implementation block
@property (copy,readonly) NSUUID * sessionID;                        //@synthesize sessionID=_sessionID - In the implementation block
@property (assign) unsigned long long sequenceNumber;                //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (copy,readonly) NSUUID * ephemeralCameraID; 
@property (readonly) unsigned long long startTimestamp; 
@property (readonly) unsigned long long endTimestamp; 
-(id)attributeDescriptions;
-(NSUUID *)sessionID;
-(unsigned long long)endTimestamp;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)startTimestamp;
-(unsigned long long)sequenceNumber;
-(NSUUID *)cameraID;
-(id)initWithEventType:(id)arg1 sessionID:(id)arg2 cameraID:(id)arg3 sequenceNumber:(unsigned long long)arg4 ;
-(NSUUID *)ephemeralCameraID;
@end
