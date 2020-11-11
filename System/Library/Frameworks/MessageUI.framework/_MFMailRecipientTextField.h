/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITextField.h>

@interface _MFMailRecipientTextField : UITextField {

	BOOL _isShowingDictationPlaceholder;

}

@property (nonatomic,readonly) BOOL isShowingDictationPlaceholder;              //@synthesize isShowingDictationPlaceholder=_isShowingDictationPlaceholder - In the implementation block
-(void)_handleKeyUIEvent:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(BOOL)isShowingDictationPlaceholder;
-(id)_previousKeyResponder;
-(id)customOverlayContainer;
-(id)insertDictationResultPlaceholder;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
@end
