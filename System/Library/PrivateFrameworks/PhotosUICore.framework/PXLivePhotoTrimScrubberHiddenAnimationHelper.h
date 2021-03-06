/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PXLivePhotoTrimScrubberHiddenAnimationHelper : NSObject {

	long long _hideRequestCounter;
	BOOL _hidden;
	/*^block*/id _animationBlock;

}

@property (nonatomic,copy,readonly) id animationBlock;              //@synthesize animationBlock=_animationBlock - In the implementation block
@property (assign,nonatomic) BOOL hidden;                           //@synthesize hidden=_hidden - In the implementation block
-(BOOL)hidden;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)animationBlock;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithAnimationBlock:(/*^block*/id)arg1 ;
-(void)_setHidden:(BOOL)arg1 animated:(BOOL)arg2 afterDelay:(double)arg3 ;
-(void)_setHidden:(BOOL)arg1 animated:(BOOL)arg2 withRequstID:(long long)arg3 ;
@end

