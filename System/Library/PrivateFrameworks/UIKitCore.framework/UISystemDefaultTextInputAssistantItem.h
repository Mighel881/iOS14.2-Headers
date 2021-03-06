/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITextInputAssistantItem.h>

@protocol UISystemDefaultTextInputAssistantItemDelegate;
@class NSArray;

@interface UISystemDefaultTextInputAssistantItem : UITextInputAssistantItem {

	BOOL _systemItem;
	id<UISystemDefaultTextInputAssistantItemDelegate> _delegate;
	NSArray* _defaultSystemLeadingBarButtonGroups;
	NSArray* _defaultSystemTrailingBarButtonGroups;

}

@property (assign,getter=_isSystemItem,nonatomic) BOOL systemItem;                                           //@synthesize systemItem=_systemItem - In the implementation block
@property (nonatomic,retain) NSArray * defaultSystemLeadingBarButtonGroups;                                  //@synthesize defaultSystemLeadingBarButtonGroups=_defaultSystemLeadingBarButtonGroups - In the implementation block
@property (nonatomic,retain) NSArray * defaultSystemTrailingBarButtonGroups;                                 //@synthesize defaultSystemTrailingBarButtonGroups=_defaultSystemTrailingBarButtonGroups - In the implementation block
@property (assign,nonatomic,__weak) id<UISystemDefaultTextInputAssistantItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<UISystemDefaultTextInputAssistantItemDelegate>)delegate;
-(NSArray *)defaultSystemTrailingBarButtonGroups;
-(void)assistantUndo;
-(void)setDefaultSystemLeadingBarButtonGroups:(NSArray *)arg1 ;
-(void)assistantShowKeyboard;
-(void)performSystemButtonActionForStyle:(long long)arg1 ;
-(void)analyticsDispatchWithActionStyle:(long long)arg1 ;
-(void)setDelegate:(id<UISystemDefaultTextInputAssistantItemDelegate>)arg1 ;
-(void)setDefaultSystemTrailingBarButtonGroups:(NSArray *)arg1 ;
-(void)assistantCut;
-(NSArray *)defaultSystemLeadingBarButtonGroups;
-(void)assistantBold;
-(BOOL)canPerformSystemButtonActionForStyle:(long long)arg1 ;
-(void)assistantItalic;
-(void)assistantCopy;
-(BOOL)_isSystemItem;
-(void)assistantWriteboard;
-(SEL)_responderSelectorForSystemButtonStyle:(long long)arg1 ;
-(void)assistantPaste;
-(void)assistantDictation;
-(void)assistantEmoji;
-(void)_updateIsSystemItem;
-(void)assistantDismiss;
-(void)setSystemItem:(BOOL)arg1 ;
-(void)assistantUnderline;
-(void)assistantRedo;
-(void)setTrailingBarButtonGroups:(id)arg1 ;
-(void)setLeadingBarButtonGroups:(id)arg1 ;
@end

