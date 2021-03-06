/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UITextCheckingClient;
#import <UIKitCore/UIKitCore-Structs.h>
@class UITextChecker;

@interface UITextCheckingController : NSObject {

	id<UITextCheckingClient> _client;
	UITextChecker* _textChecker;
	NSRange _selectedRangeFromPreviousUnchecked;
	struct {
		unsigned respondsToAutocorrectionType : 1;
		unsigned respondsToSpellCheckingType : 1;
		unsigned respondsToSmartQuotesType : 1;
		unsigned respondsToSmartDashesType : 1;
		unsigned respondsToSmartInsertDeleteType : 1;
		unsigned respondsToContinuousSpellCheckingEnabled : 1;
	}  _tccClientFlags;

}

@property (readonly) id<UITextCheckingClient> client; 
-(NSRange)selectedRange;
-(id)textChecker;
-(id)initWithClient:(id)arg1 ;
-(void)checkSpellingForSelectionChangeFromRange:(NSRange)arg1 ;
-(void)didChangeSelectionFromRange:(id)arg1 ;
-(void)considerTextCheckingForRange:(id)arg1 ;
-(id<UITextCheckingClient>)client;
-(id)keyboardLanguages;
-(void)preheatTextChecker;
-(BOOL)foundApostropheAfterRange:(NSRange)arg1 ;
-(BOOL)continuousSpellCheckingEnabled;
-(void)removeSpellingMarkersFromWordInRange:(id)arg1 ;
-(void)checkSpellingForWordInRange:(id)arg1 ;
-(void)didChangeTextInRange:(id)arg1 ;
-(void)insertedTextInRange:(id)arg1 ;
-(void)invalidate;
-(NSRange)nsRangeForTextRange:(id)arg1 ;
-(void)dealloc;
-(id)validAnnotations;
@end

