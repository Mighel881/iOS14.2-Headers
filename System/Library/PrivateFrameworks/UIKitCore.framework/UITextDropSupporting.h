/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UITextDropSupporting <UITextDroppable,UITextPasteConfigurationSupporting>
@property (assign,nonatomic) CGPoint contentOffsetForSameViewDrops; 
@optional
-(id)_attributedStringForInsertionOfAttributedString:(id)arg1;
-(void)sanitizeAttributedText:(id)arg1;
-(CGPoint)contentOffsetForSameViewDrops;
-(void)setContentOffsetForSameViewDrops:(CGPoint)arg1;

@required
-(BOOL)allowsEditingTextAttributes;
-(BOOL)canBecomeDropResponder;
-(void)becomeDropResponder;
-(void)droppingStarted;
-(void)resignDropResponderWithDropPerformed:(BOOL)arg1;
-(void)droppingFinished;

@end
