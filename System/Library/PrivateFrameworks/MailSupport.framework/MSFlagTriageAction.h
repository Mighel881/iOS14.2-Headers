/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MailSupport/MSFlagChangeTriageAction.h>

@class NSNumber;

@interface MSFlagTriageAction : MSFlagChangeTriageAction {

	NSNumber* _flagColor;
	unsigned long long _cachedFlagState;

}

@property (assign,nonatomic) unsigned long long cachedFlagState;              //@synthesize cachedFlagState=_cachedFlagState - In the implementation block
@property (nonatomic,retain) NSNumber * flagColor;                            //@synthesize flagColor=_flagColor - In the implementation block
-(NSNumber *)flagColor;
-(void)setFlagColor:(NSNumber *)arg1 ;
-(void)_toggleFlagWithBuilder:(id)arg1 ;
-(BOOL)flagState;
-(unsigned long long)cachedFlagState;
-(void)setCachedFlagState:(unsigned long long)arg1 ;
-(BOOL)_isFlagged;
-(void)_toggleCachedFlagState;
@end

