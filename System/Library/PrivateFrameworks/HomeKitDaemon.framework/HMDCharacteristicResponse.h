/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristicRequest, NSError, NSNumber, NSDate;

@interface HMDCharacteristicResponse : HMFObject {

	HMDCharacteristicRequest* _request;
	id _value;
	NSError* _error;
	NSNumber* _stateNumber;
	NSDate* _valueUpdatedTime;

}

@property (nonatomic,readonly) HMDCharacteristicRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) id value;                                          //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSNumber * stateNumber;                          //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) NSDate * valueUpdatedTime;                       //@synthesize valueUpdatedTime=_valueUpdatedTime - In the implementation block
+(id)responseWithRequest:(id)arg1 error:(id)arg2 ;
+(id)responsesWithRequests:(id)arg1 error:(id)arg2 ;
-(id)attributeDescriptions;
-(HMDCharacteristicRequest *)request;
-(NSError *)error;
-(NSDate *)valueUpdatedTime;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSNumber *)stateNumber;
-(void)setValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3 ;
@end

