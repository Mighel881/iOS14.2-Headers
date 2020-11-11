/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MBBackgroundRestoreInfo : NSObject <NSSecureCoding, NSCopying> {

	int dataClassesRemaining;
	unsigned long long bytesRemaining;
	NSArray* failedDomains;
	int _dataClassesRemaining;
	unsigned long long _bytesRemaining;
	NSArray* _failedDomains;

}

@property (assign) int dataClassesRemaining;                       //@synthesize dataClassesRemaining=_dataClassesRemaining - In the implementation block
@property (assign) unsigned long long bytesRemaining;              //@synthesize bytesRemaining=_bytesRemaining - In the implementation block
@property (retain) NSArray * failedDomains;                        //@synthesize failedDomains=_failedDomains - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBytesRemaining:(unsigned long long)arg1 ;
-(void)setFailedDomains:(NSArray *)arg1 ;
-(void)setDataClassesRemaining:(int)arg1 ;
-(unsigned long long)bytesRemaining;
-(int)dataClassesRemaining;
-(NSArray *)failedDomains;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end
