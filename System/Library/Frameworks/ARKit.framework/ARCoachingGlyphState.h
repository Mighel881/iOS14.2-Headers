/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ARCoachingGlyphStateDelegate;
#import <ARKit/ARKit-Structs.h>
@interface ARCoachingGlyphState : NSObject {

	SCD_Struct_AR10 _quaternionTarget;
	 _scaleTarget;
	unsigned long long _snapState;
	BOOL _isVertical;
	id<ARCoachingGlyphStateDelegate> _delegate;
	 _topPlaneTranslationTarget;
	 _bottomPlaneTranslationTarget;

}

@property (assign,nonatomic,__weak) id<ARCoachingGlyphStateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long snapState; 
@property (nonatomic,readonly) SCD_Struct_AR10 quaternionTarget; 
@property (nonatomic,readonly)  scaleTarget; 
@property (nonatomic,readonly)  topPlaneTranslationTarget;                                  //@synthesize topPlaneTranslationTarget=_topPlaneTranslationTarget - In the implementation block
@property (nonatomic,readonly)  bottomPlaneTranslationTarget;                               //@synthesize bottomPlaneTranslationTarget=_bottomPlaneTranslationTarget - In the implementation block
@property (assign,nonatomic) BOOL isVertical;                                               //@synthesize isVertical=_isVertical - In the implementation block
-(BOOL)isVertical;
-(id)init;
-(id<ARCoachingGlyphStateDelegate>)delegate;
-(void)setDelegate:(id<ARCoachingGlyphStateDelegate>)arg1 ;
-(void)setIsVertical:(BOOL)arg1 ;
-(unsigned long long)snapState;
-(void)setSnapState:(unsigned long long)arg1 ;
-(SCD_Struct_AR10)computeQuaternionTarget;
-(void)setQuaternionTarget:(SCD_Struct_AR10)arg1 ;
-(1)computeScaleTarget;
-(void)setScaleTarget:;
-(1)computeTopPlaneTranslationTarget;
-(void)setTopPlaneTranslationTarget:;
-(1)computeBottomPlaneTranslationTarget;
-(void)setBottomPlaneTranslationTarget:;
-(SCD_Struct_AR10)quaternionTarget;
-()scaleTarget;
-()topPlaneTranslationTarget;
-()bottomPlaneTranslationTarget;
@end

