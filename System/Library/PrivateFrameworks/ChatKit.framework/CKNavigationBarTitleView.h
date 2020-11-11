/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UINavigationBarTitleView.h>

@interface CKNavigationBarTitleView : _UINavigationBarTitleView {

	BOOL _editing;

}

@property (assign,getter=isEditing,nonatomic) BOOL editing;              //@synthesize editing=_editing - In the implementation block
-(void)updateIfNeeded:(BOOL)arg1 ;
-(void)_setTrailingItemsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateTrailingBarButtonHiddenStateForTitleHeightAnimated:(BOOL)arg1 ;
-(void)contentDidChange;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
@end
