/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _PKStrokeClipPlane : NSObject <NSCopying> {

	CGPoint _origin;
	CGPoint _normal;

}

@property (nonatomic,readonly) CGPoint origin;              //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) CGPoint normal;              //@synthesize normal=_normal - In the implementation block
-(CGPoint)origin;
-(BOOL)isEqual:(id)arg1 ;
-(CGPoint)normal;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)distanceToPoint:(CGPoint)arg1 ;
-(BOOL)isEqualToClipPlane:(id)arg1 ;
-(id)initWithOrigin:(CGPoint)arg1 normal:(CGPoint)arg2 ;
@end
