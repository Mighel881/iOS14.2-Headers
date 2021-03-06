/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TipsCore/TipsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TPSExperiment : NSObject <NSCopying, NSSecureCoding> {

	long long _identifier;
	double _holdoutAllocation;
	long long _camp;

}

@property (assign,nonatomic) long long identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double holdoutAllocation;              //@synthesize holdoutAllocation=_holdoutAllocation - In the implementation block
@property (assign,nonatomic) long long camp;                        //@synthesize camp=_camp - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(long long)camp;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(long long)identifier;
-(void)setCamp:(long long)arg1 ;
-(BOOL)updateWithExperimentDictionary:(id)arg1 ;
-(BOOL)updateCampIfNeeded;
-(void)setIdentifier:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)holdoutAllocation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHoldoutAllocation:(double)arg1 ;
@end

