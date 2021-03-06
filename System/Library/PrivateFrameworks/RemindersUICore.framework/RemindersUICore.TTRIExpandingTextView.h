/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemindersUICore/RemindersUICore-Structs.h>
#import <UIKitCore/UITextView.h>

@interface RemindersUICore.TTRIExpandingTextView : UITextView {

	 isForUseInNUIContainerView;
	 lineIndexWhereClippingBegins;
	 textStorageObserver;

}

@property (assign,nonatomic) CGSize contentSize; 
@property (assign,nonatomic) CGPoint contentOffset; 
@property (readonly,nonatomic) BOOL _shouldScrollEnclosingScrollView; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
-(unsigned long long)accessibilityTraits;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)contentSize;
-(BOOL)accessibilityActivate;
-(CGPoint)contentOffset;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(BOOL)_shouldScrollEnclosingScrollView;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

