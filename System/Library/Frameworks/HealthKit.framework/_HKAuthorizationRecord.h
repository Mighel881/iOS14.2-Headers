/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding> {

	long long _status;
	long long _request;
	long long _mode;
	NSDate* _anchorLimitModifiedDate;

}

@property (assign,nonatomic) long long status;                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) long long request;                                  //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) long long mode;                                     //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy,readonly) NSDate * anchorLimitModifiedDate;              //@synthesize anchorLimitModifiedDate=_anchorLimitModifiedDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)recordWithStatus:(long long)arg1 request:(long long)arg2 mode:(long long)arg3 anchorLimitModifiedDate:(id)arg4 ;
-(long long)request;
-(unsigned long long)hash;
-(BOOL)sharingEnabled;
-(long long)status;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)mode;
-(BOOL)deniedReading;
-(BOOL)deniedSharing;
-(void)setStatus:(long long)arg1 ;
-(id)recordWithReadingDisabled;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)requestedSharing;
-(NSDate *)anchorLimitModifiedDate;
-(BOOL)requestedReading;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 authorizationMode:(long long)arg3 anchorLimitModifiedDate:(id)arg4 ;
-(id)recordWithSharingDisabled;
-(BOOL)readingEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_deepCopy;
-(BOOL)isCompatibleStatus:(long long)arg1 ;
@end
