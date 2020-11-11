/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSTextGraphicsContextInternal.h>

@class NSString;

@interface _NSUIKitTextGraphicsContext : NSObject <NSTextGraphicsContextInternal>

@property (readonly) CGContextRef CGContext; 
@property (getter=isFlipped,readonly) BOOL flipped; 
@property (getter=isDrawingToScreen,readonly) BOOL drawingToScreen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedContext;
+(id)graphicsContextForApplicationFrameworkContext:(long long)arg1 ;
-(void)restoreGraphicsState;
-(CGContextRef)CGContext;
-(void)saveGraphicsState;
-(BOOL)isFlipped;
-(BOOL)isDrawingToScreen;
@end
