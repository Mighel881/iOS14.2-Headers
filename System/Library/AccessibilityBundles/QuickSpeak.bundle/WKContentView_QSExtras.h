/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuickSpeak/__WKContentView_QSExtras_super.h>

@interface WKContentView_QSExtras : __WKContentView_QSExtras_super
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
-(void)accessibilitySpeakSelectionSetContent:(id)arg1 ;
-(void)_accessibilityDidGetSelectionRects:(id)arg1 withGranularity:(long long)arg2 atOffset:(long long)arg3 ;
-(void)_selectionChanged;
-(id)_accessibilityQuickSpeakContent;
-(id)_accessibilitySpeakSelectionTextInputResponder;
-(id)_accessibilityRetrieveRectsForGuanularity:(long long)arg1 atSelectionOffset:(long long)arg2 wordText:(id)arg3 ;
-(BOOL)_accessibilityShouldUpdateQuickSpeakContent;
-(BOOL)_accessibilitySystemShouldShowSpeakBubble;
-(BOOL)_accessibilityShouldShowSpeakBubble;
-(BOOL)_accessibilityShouldShowSpeakSpellOut;
-(BOOL)_accessibilityShouldShowSpeakLanguageBubble;
-(void)_axWaitForSpeakSelectionContentResults;
-(unsigned long long)_axSelectedTextLength;
-(void)_axWaitForSpeakSelectionRectResultsForGuanularity:(long long)arg1 atSelectionOffset:(long long)arg2 wordText:(id)arg3 ;
-(id)accessibilityQSSentenceRects;
-(id)accessibilityQSWordRects;
-(void)accessibilitySetQSWordRects:(id)arg1 ;
-(id)_webTextRectsFromWKTextRects:(id)arg1 ;
-(void)accessibilitySetQSSentenceRects:(id)arg1 ;
@end
