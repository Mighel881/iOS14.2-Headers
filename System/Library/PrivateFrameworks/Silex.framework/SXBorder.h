/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXJSONObject.h>

@class SXStrokeStyle;

@interface SXBorder : SXJSONObject

@property (nonatomic,readonly) SXStrokeStyle * all; 
@property (nonatomic,readonly) SXStrokeStyle * top; 
@property (nonatomic,readonly) SXStrokeStyle * bottom; 
@property (nonatomic,readonly) SXStrokeStyle * left; 
@property (nonatomic,readonly) SXStrokeStyle * right; 
-(SXStrokeStyle *)right;
-(SXStrokeStyle *)left;
-(SXStrokeStyle *)bottom;
-(SXStrokeStyle *)top;
-(SXStrokeStyle *)all;
-(BOOL)isSolid;
-(id)defaultStrokeStyle;
-(BOOL)shouldBeDotted;
@end

