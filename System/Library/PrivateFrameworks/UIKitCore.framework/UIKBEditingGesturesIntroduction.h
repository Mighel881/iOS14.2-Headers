/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKBTutorialModalDisplay.h>

@class NSLayoutConstraint;

@interface UIKBEditingGesturesIntroduction : UIKBTutorialModalDisplay {

	NSLayoutConstraint* _topPaddingConstraint;

}

@property (nonatomic,readonly) long long appearance; 
@property (nonatomic,retain) NSLayoutConstraint * topPaddingConstraint;              //@synthesize topPaddingConstraint=_topPaddingConstraint - In the implementation block
+(BOOL)shouldShowEditingIntroduction;
-(id)animatedTutorialViewNamed:(id)arg1 ofType:(id)arg2 needsFrame:(BOOL)arg3 ;
-(id)buttonTitle;
-(id)textBodyFont;
-(id)mediaContents;
-(void)extraButtonTapAction;
-(id)textBodyDescriptions;
-(id)textTitleDescriptions;
-(double)pagingInterval;
-(NSLayoutConstraint *)topPaddingConstraint;
-(void)setTopPaddingConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)presentsFullScreen;
-(void)updateConstraints;
@end
