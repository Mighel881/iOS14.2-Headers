/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIIdleModeLayoutAttributes : NSObject {

	BOOL _wantsDimmingOverlay;
	double _alphaOffset;
	CGPoint _centerOffset;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGPoint centerOffset;                     //@synthesize centerOffset=_centerOffset - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) double alphaOffset;                       //@synthesize alphaOffset=_alphaOffset - In the implementation block
@property (assign,nonatomic) BOOL wantsDimmingOverlay;                 //@synthesize wantsDimmingOverlay=_wantsDimmingOverlay - In the implementation block
-(BOOL)wantsDimmingOverlay;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)init;
-(CGAffineTransform)transform;
-(CGPoint)centerOffset;
-(double)alphaOffset;
-(void)setAlphaOffset:(double)arg1 ;
-(void)setWantsDimmingOverlay:(BOOL)arg1 ;
-(void)setCenterOffset:(CGPoint)arg1 ;
@end
