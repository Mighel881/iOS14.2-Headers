/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HKQueryAnchor : NSObject <NSSecureCoding, NSCopying> {

	long long _rowid;

}

@property (assign,setter=_setRowid:,getter=_rowid,nonatomic) long long rowid;              //@synthesize rowid=_rowid - In the implementation block
+(id)anchorFromValue:(unsigned long long)arg1 ;
+(id)latestAnchor;
+(BOOL)supportsSecureCoding;
+(id)_anchorWithRowidValue:(long long)arg1 ;
+(id)_anchorWithRowid:(long long)arg1 ;
-(long long)_rowid;
-(void)_setRowid:(long long)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

