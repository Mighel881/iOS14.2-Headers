/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSContextualEvent.h>

@class NSString;

@interface TPSContextualContentStatusEvent : TPSContextualEvent {

	long long _statusType;
	NSString* _contentID;

}

@property (assign,nonatomic) long long statusType;              //@synthesize statusType=_statusType - In the implementation block
@property (nonatomic,copy) NSString * contentID;                //@synthesize contentID=_contentID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(NSString *)contentID;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(long long)statusType;
-(unsigned)minObservationCount;
-(void)updateStatusTypeIfOutOfBound;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatusType:(long long)arg1 ;
-(void)setContentID:(NSString *)arg1 ;
@end
