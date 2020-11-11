/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CommonUtilities/CUTCheckpoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_os_log;
@class NSObject;

@interface CUTCheckpointSignpost : CUTCheckpoint <NSSecureCoding> {

	NSObject*<OS_os_log> _log;
	unsigned long long _signpostID;
	long long _scope;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;                   //@synthesize log=_log - In the implementation block
@property (assign,nonatomic) long long scope;                            //@synthesize scope=_scope - In the implementation block
@property (assign,nonatomic) unsigned long long signpostID;              //@synthesize signpostID=_signpostID - In the implementation block
-(void)setSignpostID:(unsigned long long)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(unsigned long long)signpostID;
-(void)setScope:(long long)arg1 ;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(NSObject*<OS_os_log>)log;
-(long long)scope;
-(BOOL)_verifyMatchingName:(id)arg1 ;
@end
