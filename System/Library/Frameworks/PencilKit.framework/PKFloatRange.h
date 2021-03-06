/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKFloatRange : NSObject <NSCopying> {

	double _lowerBound;
	double _upperBound;

}

@property (nonatomic,readonly) double lowerBound;              //@synthesize lowerBound=_lowerBound - In the implementation block
@property (nonatomic,readonly) double upperBound;              //@synthesize upperBound=_upperBound - In the implementation block
-(id)initWithLowerBound:(double)arg1 upperBound:(double)arg2 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(double)lowerBound;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)upperBound;
@end

