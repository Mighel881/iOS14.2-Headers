/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PSController.h>

@protocol PSController;
@class PSSpecifier, UIViewController, PSRootController, NSString;

@interface PUStorageManagementBaseController : UIViewController <PSController> {

	PSSpecifier* _specifier;
	id _preferenceValue;
	UIViewController*<PSController> _parentController;
	PSRootController* _rootController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleURL:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(id)specifier;
-(void)setParentController:(id)arg1 ;
-(void)setRootController:(id)arg1 ;
-(void)didLock;
-(void)didWake;
-(void)suspend;
-(id)rootController;
-(void)willBecomeActive;
-(void)didReceiveMemoryWarning;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)didUnlock;
-(void)showController:(id)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)viewDidLoad;
-(void)willResignActive;
-(id)parentController;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)willUnlock;
@end

