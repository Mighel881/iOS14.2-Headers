/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AirTraffic/AirTraffic-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface ATAccountInfo : NSObject <NSCopying> {

	NSString* _altDSID;
	NSString* _appleID;
	NSNumber* _DSID;

}

@property (nonatomic,readonly) NSString * appleID;              //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,readonly) NSString * altDSID;              //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,readonly) NSNumber * DSID;                 //@synthesize DSID=_DSID - In the implementation block
-(NSNumber *)DSID;
-(NSString *)altDSID;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)appleID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
