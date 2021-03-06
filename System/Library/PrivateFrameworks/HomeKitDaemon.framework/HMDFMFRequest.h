/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString, FMFSession, HMFTimer;

@interface HMDFMFRequest : HMFObject {

	NSString* _requestID;
	FMFSession* _fmfSession;
	HMFTimer* _fmfSessionResponseTimer;

}

@property (nonatomic,readonly) NSString * requestID;                            //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) FMFSession * fmfSession;                         //@synthesize fmfSession=_fmfSession - In the implementation block
@property (nonatomic,readonly) HMFTimer * fmfSessionResponseTimer;              //@synthesize fmfSessionResponseTimer=_fmfSessionResponseTimer - In the implementation block
-(FMFSession *)fmfSession;
-(id)description;
-(NSString *)requestID;
-(id)initWithResponseTimerDelegate:(id)arg1 ;
-(HMFTimer *)fmfSessionResponseTimer;
@end

