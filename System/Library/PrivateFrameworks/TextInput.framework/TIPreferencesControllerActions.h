/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol TIPreferencesControllerActions <NSObject>
@property (nonatomic,copy) NSArray * inputModeSelectionSequence; 
@property (assign,nonatomic) BOOL predictionEnabled; 
@property (assign,nonatomic) BOOL automaticMinimizationEnabled; 
@property (assign,nonatomic) BOOL keyboardShownByTouch; 
@property (assign,nonatomic) CGPoint keyboardPosition; 
@property (assign,nonatomic) CGPoint floatingKeyboardPosition; 
@property (assign,nonatomic) unsigned long long floatingKeyboardDockedEdge; 
@required
-(CGPoint)keyboardPosition;
-(void)setKeyboardPosition:(CGPoint)arg1;
-(void)updateEnableProKeyboard:(BOOL)arg1;
-(void)setInputModeSelectionSequence:(id)arg1;
-(void)setFloatingKeyboardDockedEdge:(unsigned long long)arg1;
-(unsigned long long)floatingKeyboardDockedEdge;
-(BOOL)automaticMinimizationEnabled;
-(void)updateDidPerformFirstReachableKeyboardInteraction;
-(BOOL)predictionEnabled;
-(void)updateKeyboardIsSplit:(BOOL)arg1 locked:(BOOL)arg2;
-(BOOL)keyboardShownByTouch;
-(void)updateEnabledDictationLanguages:(id)arg1;
-(void)updateVisceral:(id)arg1;
-(void)didTriggerOneTimeAction:(id)arg1;
-(void)updateKeyboardIsFloating:(BOOL)arg1;
-(void)updateLastUsedDictationLanguages:(id)arg1;
-(NSArray *)inputModeSelectionSequence;
-(void)setAutomaticMinimizationEnabled:(BOOL)arg1;
-(void)setPredictionEnabled:(BOOL)arg1;
-(void)updateKeyboardHandBias:(id)arg1;
-(void)updateLastUsedKeyboards:(id)arg1;
-(CGPoint)floatingKeyboardPosition;
-(BOOL)oneTimeActionCompleted:(id)arg1;
-(void)setKeyboardShownByTouch:(BOOL)arg1;
-(void)setFloatingKeyboardPosition:(CGPoint)arg1;
-(void)updateLastUsedInputMode:(id)arg1;
-(void)updateLastUsedLayout:(id)arg1;

@end
