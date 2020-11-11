/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:44:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBIconListLayoutDelegate <NSObject>
@optional
-(CGPoint*)iconListView:(id)arg1 originForIconCoordinate:(SBIconCoordinate)arg2 metrics:(id)arg3 proposedOrigin:(CGPoint)arg4;
-(id)iconListView:(id)arg1 animatorForRemovingIcons:(id)arg2 proposedAnimator:(id)arg3;
-(unsigned long long)iconListView:(id)arg1 rowAtPoint:(CGPoint)arg2 metrics:(id)arg3 proposedRow:(unsigned long long)arg4;
-(CGSize*)iconListView:(id)arg1 sizeThatFits:(CGSize)arg2 metrics:(id)arg3 proposedSize:(CGSize)arg4;
-(void)iconListView:(id)arg1 willLayoutIconView:(id)arg2;
-(void)iconListViewDidLayoutIcons:(id)arg1;

@end
