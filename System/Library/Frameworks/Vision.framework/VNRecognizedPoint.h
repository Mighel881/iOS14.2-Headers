/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetectedPoint.h>

@class NSString;

@interface VNRecognizedPoint : VNDetectedPoint {

	NSString* _identifier;

}

@property (copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithLocation:(CGPoint)arg1 confidence:(float)arg2 identifier:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
