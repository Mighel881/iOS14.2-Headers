/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpeechRecognitionCommandAndControl/CACOutOfProcessPresentationManager.h>

@interface CACCustomCommandEditorPresentationManager : CACOutOfProcessPresentationManager
+(long long)remoteViewType;
+(int)axNotification;
-(void)_showCustomCommandEditorWithContextKey:(id)arg1 contextValue:(id)arg2 ;
-(BOOL)showCustomCommandEditorWithGesture:(id)arg1 ;
-(BOOL)showCustomCommandEditorWithTextToInsert:(id)arg1 ;
-(BOOL)showCustomCommandEditorWithRecordedUserActionFlow:(id)arg1 ;
-(BOOL)showCustomCommandEditorWithShortcutsWorkflow:(id)arg1 ;
-(void)handleAXNotificationData:(void*)arg1 ;
@end

