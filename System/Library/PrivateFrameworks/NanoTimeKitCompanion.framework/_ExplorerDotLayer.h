/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/CATransformLayer.h>

@class CALayer;

@interface _ExplorerDotLayer : CATransformLayer {

	CALayer* _noServicePillLayer;
	CALayer* _connectivityDotBackingLayer;
	CALayer* _connectivityDotLayer;

}

@property (nonatomic,readonly) CALayer * noServicePillLayer;                       //@synthesize noServicePillLayer=_noServicePillLayer - In the implementation block
@property (nonatomic,readonly) CALayer * connectivityDotBackingLayer;              //@synthesize connectivityDotBackingLayer=_connectivityDotBackingLayer - In the implementation block
@property (nonatomic,readonly) CALayer * connectivityDotLayer;                     //@synthesize connectivityDotLayer=_connectivityDotLayer - In the implementation block
-(void)layoutSublayers;
-(id)init;
-(CALayer *)noServicePillLayer;
-(CALayer *)connectivityDotLayer;
-(CALayer *)connectivityDotBackingLayer;
@end
