/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>

@interface TIAddKeyboardController : PSListController
+(BOOL)shouldAddInputMode:(id)arg1 toEnabledInputModes:(id)arg2 ;
-(id)specifiers;
-(void)cancelButtonTapped;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)doneButtonTapped;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)updateDoneButton;
-(id)newSpecifiers;
-(void)toggleInputMode:(id)arg1 ;
-(void)addCheckedInputModes;
@end

