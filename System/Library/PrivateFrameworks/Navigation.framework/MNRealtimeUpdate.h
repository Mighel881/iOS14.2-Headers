/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, NSError;

@interface MNRealtimeUpdate : NSObject <NSSecureCoding> {

	NSUUID* _routeID;
	NSDate* _lastUpdated;
	NSError* _error;

}

@property (nonatomic,readonly) NSUUID * routeID;                  //@synthesize routeID=_routeID - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdated;              //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,readonly) NSError * error;                   //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)routeID;
-(NSError *)error;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)lastUpdated;
-(id)initWithCoder:(id)arg1 ;
@end
