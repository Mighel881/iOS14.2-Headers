/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface ATXModeFeatureSet : NSObject <NSSecureCoding> {

	NSMutableDictionary* _features;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg1 ;
-(void)setValue:(BOOL)arg1 forBinaryFeatureOfType:(int)arg2 ;
-(void)mergeWithFeatures:(id)arg1 ;
-(BOOL)boolValueForFeatureType:(int)arg1 ;
-(void)setValue:(id)arg1 forFeatureType:(int)arg2 ;
-(id)valueForFeatureType:(int)arg1 ;
-(void)enumerateFeaturesUsingBlock:(/*^block*/id)arg1 ;
@end
