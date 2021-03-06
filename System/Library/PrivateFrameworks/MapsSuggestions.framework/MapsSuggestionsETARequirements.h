/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MapsSuggestionsETARequirements : NSObject <NSCopying> {

	double _maxAge;
	double _maxDistance;
	double _minAccuracy;

}

@property (nonatomic,readonly) double maxAge;                   //@synthesize maxAge=_maxAge - In the implementation block
@property (nonatomic,readonly) double maxDistance;              //@synthesize maxDistance=_maxDistance - In the implementation block
@property (nonatomic,readonly) double minAccuracy;              //@synthesize minAccuracy=_minAccuracy - In the implementation block
-(double)maxAge;
-(double)maxDistance;
-(double)minAccuracy;
-(id)initWithMaxAge:(double)arg1 maxDistance:(double)arg2 minAccuracy:(double)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

