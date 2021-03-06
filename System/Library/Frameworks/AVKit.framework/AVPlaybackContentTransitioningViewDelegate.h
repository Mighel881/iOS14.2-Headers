/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVPlaybackContentTransitioningViewDelegate <NSObject>
@required
-(BOOL)contentTransitioningViewShouldBeginDragging:(id)arg1 locationInView:(CGPoint)arg2;
-(BOOL)contentTransitioningView:(id)arg1 shouldBeginTransitionWithDirection:(long long)arg2;
-(id)contentTransitioningPlayerContentViewForTransition:(id)arg1;
-(void)contentTransitioningViewDidChangeTransitionStatus:(id)arg1 oldState:(long long)arg2 oldTransitionDirection:(long long)arg3 oldProgress:(double)arg4;

@end

